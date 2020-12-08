#include "textedit.hpp"


TextEdit::TextEdit(QWidget* parent)
  : QTextEdit(parent)
{
  m_highlighter->highlight("cpp");
}


void TextEdit::setMargins(int left, int top, int right, int bottom)
{
  setViewportMargins(left, top, right, bottom);
}
