#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QLabel label("hello");
  label.show();

  return a.exec();
}
