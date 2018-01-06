/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *result;
    QPushButton *buttonClear;
    QPushButton *buttonSign;
    QPushButton *buttonPercent;
    QPushButton *buttonDivide;
    QPushButton *buttonMultiply;
    QPushButton *buttonNine;
    QPushButton *buttonEight;
    QPushButton *buttonSeven;
    QPushButton *buttonMinus;
    QPushButton *buttonSix;
    QPushButton *buttonFive;
    QPushButton *buttonFour;
    QPushButton *buttonAdd;
    QPushButton *buttonThree;
    QPushButton *buttonTwo;
    QPushButton *buttonOne;
    QPushButton *buttonEqual;
    QPushButton *buttonZero;
    QPushButton *buttonDot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(242, 365);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        result = new QLabel(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(0, 0, 241, 61));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(19);
        result->setFont(font);
        result->setStyleSheet(QStringLiteral(" /* (Label at top) Label Stylesheet */ QLabel { qproperty-alignment: 'AlignVCenter | AlignRight'; border: 1px solid gray; } background-color : white; "));
        result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        buttonClear = new QPushButton(centralWidget);
        buttonClear->setObjectName(QStringLiteral("buttonClear"));
        buttonClear->setGeometry(QRect(0, 60, 61, 61));
        buttonClear->setStyleSheet(QStringLiteral(" QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        buttonSign = new QPushButton(centralWidget);
        buttonSign->setObjectName(QStringLiteral("buttonSign"));
        buttonSign->setGeometry(QRect(60, 60, 61, 61));
        buttonSign->setStyleSheet(QStringLiteral(" QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        buttonPercent = new QPushButton(centralWidget);
        buttonPercent->setObjectName(QStringLiteral("buttonPercent"));
        buttonPercent->setGeometry(QRect(120, 60, 61, 61));
        buttonPercent->setStyleSheet(QStringLiteral(" QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        buttonDivide = new QPushButton(centralWidget);
        buttonDivide->setObjectName(QStringLiteral("buttonDivide"));
        buttonDivide->setGeometry(QRect(180, 60, 61, 61));
        buttonDivide->setStyleSheet(QStringLiteral(" /* (Orange buttons) Operations Buttons Stylesheet */ QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); } "));
        buttonMultiply = new QPushButton(centralWidget);
        buttonMultiply->setObjectName(QStringLiteral("buttonMultiply"));
        buttonMultiply->setGeometry(QRect(180, 120, 61, 61));
        buttonMultiply->setStyleSheet(QStringLiteral(" /* (Orange buttons) Operations Buttons Stylesheet */ QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); } "));
        buttonNine = new QPushButton(centralWidget);
        buttonNine->setObjectName(QStringLiteral("buttonNine"));
        buttonNine->setGeometry(QRect(120, 120, 61, 61));
        buttonNine->setStyleSheet(QStringLiteral(" QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa); } /* End Digits 0-9 Stylesheet */"));
        buttonEight = new QPushButton(centralWidget);
        buttonEight->setObjectName(QStringLiteral("buttonEight"));
        buttonEight->setGeometry(QRect(60, 120, 61, 61));
        buttonEight->setStyleSheet(QStringLiteral(" QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa); } /* End Digits 0-9 Stylesheet */"));
        buttonSeven = new QPushButton(centralWidget);
        buttonSeven->setObjectName(QStringLiteral("buttonSeven"));
        buttonSeven->setGeometry(QRect(0, 120, 61, 61));
        buttonSeven->setStyleSheet(QStringLiteral(" QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa); } /* End Digits 0-9 Stylesheet */"));
        buttonMinus = new QPushButton(centralWidget);
        buttonMinus->setObjectName(QStringLiteral("buttonMinus"));
        buttonMinus->setGeometry(QRect(180, 180, 61, 61));
        buttonMinus->setStyleSheet(QStringLiteral(" /* (Orange buttons) Operations Buttons Stylesheet */ QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); } "));
        buttonSix = new QPushButton(centralWidget);
        buttonSix->setObjectName(QStringLiteral("buttonSix"));
        buttonSix->setGeometry(QRect(120, 180, 61, 61));
        buttonSix->setStyleSheet(QStringLiteral(" QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa); } /* End Digits 0-9 Stylesheet */"));
        buttonFive = new QPushButton(centralWidget);
        buttonFive->setObjectName(QStringLiteral("buttonFive"));
        buttonFive->setGeometry(QRect(60, 180, 61, 61));
        buttonFive->setStyleSheet(QStringLiteral(" QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa); } /* End Digits 0-9 Stylesheet */"));
        buttonFour = new QPushButton(centralWidget);
        buttonFour->setObjectName(QStringLiteral("buttonFour"));
        buttonFour->setGeometry(QRect(0, 180, 61, 61));
        buttonFour->setStyleSheet(QStringLiteral(" QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa); } /* End Digits 0-9 Stylesheet */"));
        buttonAdd = new QPushButton(centralWidget);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));
        buttonAdd->setGeometry(QRect(180, 240, 61, 61));
        buttonAdd->setStyleSheet(QStringLiteral(" /* (Orange buttons) Operations Buttons Stylesheet */ QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); } "));
        buttonThree = new QPushButton(centralWidget);
        buttonThree->setObjectName(QStringLiteral("buttonThree"));
        buttonThree->setGeometry(QRect(120, 240, 61, 61));
        buttonThree->setStyleSheet(QStringLiteral(" QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa); } /* End Digits 0-9 Stylesheet */"));
        buttonTwo = new QPushButton(centralWidget);
        buttonTwo->setObjectName(QStringLiteral("buttonTwo"));
        buttonTwo->setGeometry(QRect(60, 240, 61, 61));
        buttonTwo->setStyleSheet(QStringLiteral(" QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa); } /* End Digits 0-9 Stylesheet */"));
        buttonOne = new QPushButton(centralWidget);
        buttonOne->setObjectName(QStringLiteral("buttonOne"));
        buttonOne->setGeometry(QRect(0, 240, 61, 61));
        buttonOne->setStyleSheet(QStringLiteral(" QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa); } /* End Digits 0-9 Stylesheet */"));
        buttonEqual = new QPushButton(centralWidget);
        buttonEqual->setObjectName(QStringLiteral("buttonEqual"));
        buttonEqual->setGeometry(QRect(180, 300, 61, 61));
        buttonEqual->setStyleSheet(QStringLiteral(" /* (Orange buttons) Operations Buttons Stylesheet */ QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); } "));
        buttonZero = new QPushButton(centralWidget);
        buttonZero->setObjectName(QStringLiteral("buttonZero"));
        buttonZero->setGeometry(QRect(0, 300, 121, 61));
        buttonZero->setStyleSheet(QStringLiteral(" QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa); } /* End Digits 0-9 Stylesheet */"));
        buttonDot = new QPushButton(centralWidget);
        buttonDot->setObjectName(QStringLiteral("buttonDot"));
        buttonDot->setGeometry(QRect(120, 300, 61, 61));
        buttonDot->setStyleSheet(QStringLiteral(" QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        result->setText(QApplication::translate("MainWindow", "0", 0));
        buttonClear->setText(QApplication::translate("MainWindow", "c", 0));
        buttonSign->setText(QApplication::translate("MainWindow", "+/-", 0));
        buttonPercent->setText(QApplication::translate("MainWindow", "%", 0));
        buttonDivide->setText(QApplication::translate("MainWindow", "/", 0));
        buttonMultiply->setText(QApplication::translate("MainWindow", "x", 0));
        buttonNine->setText(QApplication::translate("MainWindow", "9", 0));
        buttonEight->setText(QApplication::translate("MainWindow", "8", 0));
        buttonSeven->setText(QApplication::translate("MainWindow", "7", 0));
        buttonMinus->setText(QApplication::translate("MainWindow", "-", 0));
        buttonSix->setText(QApplication::translate("MainWindow", "6", 0));
        buttonFive->setText(QApplication::translate("MainWindow", "5", 0));
        buttonFour->setText(QApplication::translate("MainWindow", "4", 0));
        buttonAdd->setText(QApplication::translate("MainWindow", "+", 0));
        buttonThree->setText(QApplication::translate("MainWindow", "3", 0));
        buttonTwo->setText(QApplication::translate("MainWindow", "2", 0));
        buttonOne->setText(QApplication::translate("MainWindow", "1", 0));
        buttonEqual->setText(QApplication::translate("MainWindow", "=", 0));
        buttonZero->setText(QApplication::translate("MainWindow", "0", 0));
        buttonDot->setText(QApplication::translate("MainWindow", ".", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
