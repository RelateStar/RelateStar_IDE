#pragma once

#include <QTextEdit>

#include "SyntaxHighlighter/syntaxhighlighter.hpp"

class TextEdit : public QTextEdit
{
private:
  SyntaxHighlighter* m_highlighter = new SyntaxHighlighter(document());

public:
  TextEdit(QWidget* parent = nullptr);
  void setMargins(int left, int top, int right, int bottom);
};
