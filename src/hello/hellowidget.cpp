#include "include/hellowidget.h"

HelloWidget::HelloWidget(std::shared_ptr<QWidget> parent)
    : QWidget(parent.get()) {
  this->resize(300, 300);
  labelInfoPtr = std::make_shared<QLabel>(tr("<h1>hello</h1>"), this);
  labelInfoPtr->setGeometry(10, 10, 200, 40);
}

HelloWidget::~HelloWidget() {}
