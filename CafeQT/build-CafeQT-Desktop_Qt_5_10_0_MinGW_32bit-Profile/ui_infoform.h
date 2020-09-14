/********************************************************************************
** Form generated from reading UI file 'infoform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOFORM_H
#define UI_INFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoForm
{
public:
    QWidget *centralwidget;
    QListWidget *TableList;
    QLabel *TableLabel;
    QPushButton *ReturnButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InfoForm)
    {
        if (InfoForm->objectName().isEmpty())
            InfoForm->setObjectName(QStringLiteral("InfoForm"));
        InfoForm->setWindowModality(Qt::ApplicationModal);
        InfoForm->resize(720, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InfoForm->sizePolicy().hasHeightForWidth());
        InfoForm->setSizePolicy(sizePolicy);
        InfoForm->setMinimumSize(QSize(720, 450));
        InfoForm->setMaximumSize(QSize(720, 450));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(10);
        InfoForm->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/cafe-server.gif"), QSize(), QIcon::Normal, QIcon::Off);
        InfoForm->setWindowIcon(icon);
        centralwidget = new QWidget(InfoForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        TableList = new QListWidget(centralwidget);
        TableList->setObjectName(QStringLiteral("TableList"));
        TableList->setGeometry(QRect(10, 50, 341, 351));
        TableLabel = new QLabel(centralwidget);
        TableLabel->setObjectName(QStringLiteral("TableLabel"));
        TableLabel->setGeometry(QRect(90, 10, 161, 31));
        QFont font1;
        font1.setPointSize(14);
        TableLabel->setFont(font1);
        ReturnButton = new QPushButton(centralwidget);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));
        ReturnButton->setGeometry(QRect(560, 370, 151, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ReturnButton->sizePolicy().hasHeightForWidth());
        ReturnButton->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(87);
        font2.setStrikeOut(false);
        ReturnButton->setFont(font2);
        ReturnButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    font-weight: 700;\n"
"  color: white;\n"
"  text-decoration: none;\n"
"  padding: .8em 1em calc(.8em + 3px);\n"
"  border-radius: 3px;\n"
"  background: rgb(64,199,129);\n"
"  box-shadow: 0 -3px rgb(53,167,110) inset;\n"
"  transition: 0.2s;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background: rgb(33,147,90);\n"
"  box-shadow: 0 3px rgb(33,147,90) inset;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background: rgb(53, 167, 110);\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    /*background-color: red;*/\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 140, 181, 161));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/img/cup_PNG1964-170x170.png")));
        InfoForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InfoForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 720, 21));
        InfoForm->setMenuBar(menubar);
        statusbar = new QStatusBar(InfoForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        InfoForm->setStatusBar(statusbar);

        retranslateUi(InfoForm);

        QMetaObject::connectSlotsByName(InfoForm);
    } // setupUi

    void retranslateUi(QMainWindow *InfoForm)
    {
        InfoForm->setWindowTitle(QApplication::translate("InfoForm", "InfoForm", nullptr));
        TableLabel->setText(QApplication::translate("InfoForm", "<html><head/><body><p><span style=\" color:#0b3601;\">\320\227\320\260\320\271\320\275\321\217\321\202\321\226 \321\201\321\202\320\276\320\273\320\270\320\272\320\270</span></p></body></html>", nullptr));
        ReturnButton->setText(QApplication::translate("InfoForm", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\320\270\321\201\321\217", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InfoForm: public Ui_InfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOFORM_H
