#include "include/helloslots.h"
#include <QtWidgets/QMessageBox>
#include "ui/hellotext.h"
SlotTestWidget::SlotTestWidget(std::shared_ptr<QWidget> parent)
    : QWidget(parent.get()), ui(new Ui::Hello) {
  ui->setupUi(this);
  connect(ui->b1, SIGNAL(clicked()), this, SLOT(FoodIsComing()));
}

SlotTestWidget::~SlotTestWidget() {}

void SlotTestWidget::FoodIsComing() {
  QMessageBox::information(this, tr("送餐"), tr("送餐"));
}
