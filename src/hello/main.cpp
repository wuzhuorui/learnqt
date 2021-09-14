#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include "ui/hellotext.h"
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  QWidget hw;
  Ui::Hello helloUi;

  helloUi.setupUi(&hw);
  hw.show();

  return a.exec();
}
