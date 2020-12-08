#pragma once

#include <QSyntaxHighlighter>
#include <QRegularExpression>


struct SyntaxColor
{
  QColor comment;
  QColor keyword;
  QColor statement;
};


class IHighlighter
{

};
