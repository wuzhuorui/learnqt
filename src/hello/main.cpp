#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include "include/helloslots.h"
#include "ui/hellotext.h"
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  SlotTestWidget w(nullptr);
  w.show();

  return a.exec();
}
