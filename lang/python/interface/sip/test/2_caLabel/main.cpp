#include <QApplication>
#include <QCaLabel.h>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QCaLabel label("DMC2183:1:DscrptnSI");
  label.activate();
  label.show();

  return a.exec();
}
