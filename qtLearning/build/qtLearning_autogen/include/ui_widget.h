/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *cancelButton;
    QPushButton *browseButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(423, 339);
        textEdit = new QLineEdit(Widget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 120, 171, 31));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 120, 61, 31));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 210, 101, 31));
        cancelButton = new QPushButton(Widget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(230, 210, 101, 31));
        browseButton = new QPushButton(Widget);
        browseButton->setObjectName("browseButton");
        browseButton->setGeometry(QRect(230, 250, 101, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">open:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        browseButton->setText(QCoreApplication::translate("Widget", "\346\265\217\350\247\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
