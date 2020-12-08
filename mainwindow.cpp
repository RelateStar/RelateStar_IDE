#include "mainwindow.hpp"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
{
  m_textEdit = new TextEdit(this);
  m_menuBar = new MenuBar(this);
  m_shortcut = new Shortcut(this, m_textEdit);

  m_textEdit->setMargins(0, m_menuBar->height(), 0, 0);

  this->setCentralWidget(m_textEdit);
}

MainWindow::~MainWindow()
{ }

