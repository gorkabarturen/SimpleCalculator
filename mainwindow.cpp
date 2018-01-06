#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

double firstNum;
std::string lastOperationPressed;

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
        ui->setupUi(this);

	ui->buttonAdd->setCheckable(true);
	ui->buttonMinus->setCheckable(true);
	ui->buttonDivide->setCheckable(true);
	ui->buttonMultiply->setCheckable(true);
	connect(ui->buttonZero, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->buttonOne, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->buttonTwo, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->buttonThree, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->buttonFour, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->buttonFive, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->buttonSix, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->buttonSeven, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->buttonEight, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->buttonNine, SIGNAL(released()), this, SLOT(digit_pressed()));
	connect(ui->buttonAdd, SIGNAL(released()), this, SLOT(binary_operation_released()));
	connect(ui->buttonMinus, SIGNAL(released()), this, SLOT(binary_operation_released()));
	connect(ui->buttonDivide, SIGNAL(released()), this, SLOT(binary_operation_released()));
	connect(ui->buttonMultiply, SIGNAL(released()), this, SLOT(binary_operation_released()));

}
MainWindow::~MainWindow()
{
	delete ui;
}
void MainWindow::digit_pressed()
{
	QPushButton * button = (QPushButton*)sender();

	double resultNumber;
	QString result;

		if(!ui->buttonAdd->isChecked() &&
				!ui->buttonDivide->isChecked() &&
				!ui->buttonMultiply->isChecked() &&
				!ui->buttonMinus->isChecked())
			{
				resultNumber = (ui->result->text() + button->text()).toDouble();
			}
		else
			{
	ui->result->text().clear();
	resultNumber = (button->text()).toDouble();

	if(ui->buttonMinus->isChecked())
		{
			lastOperationPressed = "substract";
		}
	else if(ui->buttonAdd->isChecked())
		{
			lastOperationPressed = "add";
		}
	else if(ui->buttonMultiply->isChecked())
		{
			lastOperationPressed = "multiply";
		}
	else if(ui->buttonDivide->isChecked())
		{
			lastOperationPressed = "divide";
		}

			}


	result = QString::number(resultNumber, 'g', 15);

	ui->result->setText(result);
}

void MainWindow::on_buttonDot_released()
{
	if(!(ui->result->text().contains(".")))
		ui->result->setText(ui->result->text() + ".");
}

void MainWindow::on_buttonSign_released()
{

	QPushButton * button = (QPushButton *) sender();

	QString result;
	double resultNumber;


	if(button->objectName() == "buttonSign")
		{
			resultNumber = (ui->result->text()).toDouble();
			resultNumber = resultNumber * -1;
			result = QString::number(resultNumber, 'g', 15);
			ui->result->setText(result);
		}

	if(button->objectName() == "buttonPercent")
		{
			resultNumber = (ui->result->text()).toDouble();
			resultNumber = resultNumber * -1;
			result = QString::number(resultNumber, 'g', 15);
			ui->result->setText(result);
		}
}

void MainWindow::on_buttonPercent_released()
{

	QPushButton * button = (QPushButton *) sender();

	QString result;
	double resultNumber;

	if(button->objectName() == "buttonPercent")
		{
			resultNumber = (ui->result->text()).toDouble();
			resultNumber = resultNumber * 0.01;
			result = QString::number(resultNumber, 'g', 15);
			ui->result->setText(result);
		}
}

void MainWindow::on_buttonClear_released()
{

	if(sender()->objectName() == "buttonClear")
		{
			ui->result->setText("0");
		}

}

void MainWindow::binary_operation_released()
{
	QPushButton * button = (QPushButton *) sender();

	firstNum = ui->result->text().toDouble();

	button->setChecked(true);
}

void MainWindow::on_buttonEqual_released()
{
	double secondNum, resultNum;

	secondNum = ui->result->text().toDouble();

	QString resultString;

	if(lastOperationPressed == "substract")
		{
			resultNum = firstNum - secondNum;
			resultString = QString::number(resultNum, 'g', 15);
		ui->buttonMinus->setChecked(false);
		}
	else if(lastOperationPressed == "add")
		{
			resultNum = firstNum + secondNum;
			resultString = QString::number(resultNum, 'g', 15);

		ui->buttonAdd->setChecked(false);
		}
	else if(lastOperationPressed == "multiply")
		{
			resultNum = firstNum * secondNum;
			resultString = QString::number(resultNum, 'g', 15);
		ui->buttonMultiply->setChecked(false);
		}
	else if(lastOperationPressed == "divide")
		{
			resultNum = firstNum / secondNum;
			resultString = QString::number(resultNum, 'g', 15);
		ui->buttonDivide->setChecked(false);
		}


	ui->result->setText(resultString);
}
