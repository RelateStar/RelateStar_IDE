#pragma once

#include <QShortcut>
#include <QTextEdit>

class Shortcut : public QShortcut
{
private:
  QWidget* m_parentWidget;
  QTextEdit* m_parenttextEdit;

  void setupZoomInShortcut();
  void setupZoomOutShortcut();
  void setupCloseShortcut();

public:
  Shortcut(QWidget* parentWidget, QTextEdit* parentTextEdit);
};
