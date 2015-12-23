#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
  QApplication app (argc, argv);

  QPushButton button;
  button.setText("Hello world!");
  button.setToolTip("A tooltip");
  button.show();

  return app.exec();
}
