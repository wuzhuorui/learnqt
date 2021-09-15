#include "include/helloslots.h"
#include <QtWidgets/QMessageBox>
#include "ui/hellotext.h"
SlotTestWidget::SlotTestWidget(std::shared_ptr<QWidget> parent)
    : QWidget(parent.get()), ui(new Ui::Hello) {
  ui->setupUi(this);
  connect(ui->b1, &QPushButton::clicked, this, &SlotTestWidget::FoodIsComing);
  connect(ui->lineEdit, &QLineEdit::textEdited, ui->label, &QLabel::setText);
}

SlotTestWidget::~SlotTestWidget() {}

void SlotTestWidget::FoodIsComing() {
  QMessageBox::information(this, tr("送餐"), tr("送餐"));
}
