#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	Ui::MainWindow *ui;

private slots:
	void digit_pressed();
	void on_buttonDot_released();
	void on_buttonSign_released();
	void on_buttonPercent_released();
	void on_buttonClear_released();
	void binary_operation_released();
	void on_buttonEqual_released();
};

#endif // MAINWINDOW_H
