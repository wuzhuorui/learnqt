#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <memory>
class HelloWidget : public QWidget {
  Q_OBJECT
 public:
  explicit HelloWidget(std::shared_ptr<QWidget> parent = nullptr);
  ~HelloWidget();
  std::shared_ptr<QLabel> labelInfoPtr;
};
