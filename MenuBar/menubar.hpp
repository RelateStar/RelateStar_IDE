#pragma once

#include <QMenuBar>
#include <QFontDialog>

class MenuBar : public QMenuBar
{
private:
  QMenu* m_fileMenu = new QMenu("File");
  QMenu* m_editMenu = new QMenu("Edit");
  QMenu* m_viewMenu = new QMenu("View");
  QMenu* m_helpMenu = new QMenu("Help");

  QWidget* m_parent;

public:
  MenuBar(QWidget* parent = nullptr);
};
