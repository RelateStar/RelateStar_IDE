#include "menubar.hpp"


MenuBar::MenuBar(QWidget* parent)
  : QMenuBar(parent)
  , m_parent(parent)
{
  QAction* closeAction = new QAction("Close");
  connect(closeAction, &QAction::triggered, [=](){
    m_parent->close();
  });

  m_fileMenu->addAction(closeAction);
  this->addMenu(m_fileMenu);

  QAction* fontAction = new QAction("Font");
  connect(fontAction, &QAction::triggered, [=](){
    m_parent->setFont(QFontDialog::getFont(nullptr, m_parent->font()));
  });

  m_editMenu->addAction(fontAction);
  this->addMenu(m_editMenu);
  this->addMenu(m_viewMenu);
  this->addMenu(m_helpMenu);
}
