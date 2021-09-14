#include <include/hellowidget.h>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  HelloWidget hw;
  hw.show();

  return a.exec();
}
