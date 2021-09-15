#pragma once

#include <QtWidgets/QWidget>
#include <memory>

namespace Ui {
class Hello;
}

class SlotTestWidget : public QWidget {
  Q_OBJECT
 public:
  explicit SlotTestWidget(std::shared_ptr<QWidget> parent);
  ~SlotTestWidget();
 public slots:
  void FoodIsComing();

 private:
  std::shared_ptr<Ui::Hello> ui;
};
