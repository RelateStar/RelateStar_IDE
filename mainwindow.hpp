#pragma once

#include <QMainWindow>

#include "MenuBar/menubar.hpp"
#include "textedit.hpp"
#include "shortcut.hpp"

class MainWindow : public QMainWindow
{
  Q_OBJECT

private:
  MenuBar* m_menuBar;
  Shortcut* m_shortcut;
  TextEdit* m_textEdit;

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
};
