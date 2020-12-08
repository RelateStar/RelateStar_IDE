#pragma once

#include <QDebug>

#include "IHighlighter.hpp"

class SyntaxHighlighter : public QSyntaxHighlighter
{
private:
  QVector<QSharedPointer<IHighlighter>> languages;

  QVector<QString> m_cStyleCommentsLangs;
  bool m_isCStyleComment = false;
  QString m_ext = "";

  void _handleMultilineComment(const QString& text);
  void _handleSingleLineComment(const QString& text);
  void _initExtensions();

public:
  explicit SyntaxHighlighter(QTextDocument* parent = 0);
  void highlightBlock(const QString& text) override;
  void highlight(const QString& ext);
  void dehighlight();

  struct HighlightingRule {
    QRegularExpression pattern;
    QTextCharFormat format;
  };
  QVector<HighlightingRule> highlightingRules;
  QTextCharFormat keywordFormat;
  QTextCharFormat quotationFormat;
  QTextCharFormat multiLineCommentFormat;
};
