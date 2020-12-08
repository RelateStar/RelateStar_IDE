#include "shortcut.hpp"

Shortcut::Shortcut(QWidget* parentWidget, QTextEdit* parentTextEdit)
  : QShortcut(0)
  , m_parentWidget(parentWidget)
  , m_parenttextEdit(parentTextEdit)
{
  setupZoomInShortcut();
  setupZoomOutShortcut();
  setupCloseShortcut();
}


void Shortcut::setupZoomInShortcut()
{
  QShortcut* zoomInShortcut = new QShortcut(m_parenttextEdit);
  zoomInShortcut->setKey(Qt::CTRL + Qt::Key_Equal);
  connect(zoomInShortcut, &QShortcut::activated, [=](){ m_parenttextEdit->zoomIn(2); });
}


void Shortcut::setupZoomOutShortcut()
{
  QShortcut* zoomOutShortcut = new QShortcut(m_parenttextEdit);
  zoomOutShortcut->setKey(Qt::CTRL + Qt::Key_Minus);
  connect(zoomOutShortcut, &QShortcut::activated, [=](){ m_parenttextEdit->zoomOut(2); });
}


void Shortcut::setupCloseShortcut()
{
  QShortcut* closeShortcut = new QShortcut(m_parenttextEdit);
  closeShortcut->setKey(Qt::CTRL + Qt::Key_Q);
  connect(closeShortcut, &QShortcut::activated, [=](){ m_parentWidget->close(); });
}
