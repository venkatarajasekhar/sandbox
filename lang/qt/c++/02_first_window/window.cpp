#include "window.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QApplication>

Window::Window(QWidget *parent) :
    QWidget(parent)
{

  // Set size of the window
  setFixedSize(200, 80);
  // Create and position the button
  a_button = new QPushButton("Hello World", this);
  a_button->setGeometry(10, 10, 80, 30);
  b_button = new QPushButton("Hello again", this);

  mainLayout = new QVBoxLayout(this);
  mainLayout->addWidget(a_button);
  mainLayout->addWidget(b_button);

  // SIGNALS + SLOTS
  // NEW : Do the connection
  //connect(m_button, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));

  // CUSTOM SLOT
  a_button->setCheckable(true);
  connect(a_button, SIGNAL(clicked(bool)), this, SLOT(slotButtonClicked(bool)));
  a_counter = 0;
  connect(this,SIGNAL(counterReached()),QApplication::instance(),SLOT(quit()));
}


void Window::slotButtonClicked(bool checked)
{
    if (checked) {
        a_button->setText("Checked");
    } else {
        a_button->setText("Hello World");
    }
    a_counter++;
    if (a_counter == 5) {
        emit counterReached();
    }
}
