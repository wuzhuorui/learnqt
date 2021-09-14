/********************************************************************************
** Form generated from reading UI file 'hellotext.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef HELLOTEXT_H
#define HELLOTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hello
{
public:
    QLabel *hello;
    QPushButton *b1;

    void setupUi(QWidget *Hello)
    {
        if (Hello->objectName().isEmpty())
            Hello->setObjectName(QString::fromUtf8("Hello"));
        Hello->resize(482, 386);
        hello = new QLabel(Hello);
        hello->setObjectName(QString::fromUtf8("hello"));
        hello->setGeometry(QRect(10, 10, 200, 40));
        b1 = new QPushButton(Hello);
        b1->setObjectName(QString::fromUtf8("b1"));
        b1->setGeometry(QRect(120, 180, 80, 23));

        retranslateUi(Hello);

        QMetaObject::connectSlotsByName(Hello);
    } // setupUi

    void retranslateUi(QWidget *Hello)
    {
        Hello->setWindowTitle(QApplication::translate("Hello", "Form", nullptr));
        hello->setText(QApplication::translate("Hello", "<html><head/><body><p><span style=\" font-size:24pt;\">Hello Text!!</span></p></body></html>", nullptr));
        b1->setText(QApplication::translate("Hello", "\346\210\221\351\245\277\344\272\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hello: public Ui_Hello {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HELLOTEXT_H
