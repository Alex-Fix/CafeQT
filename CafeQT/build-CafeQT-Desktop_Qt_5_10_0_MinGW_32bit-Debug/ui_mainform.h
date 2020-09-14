/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QAction *InfoAboutDev;
    QAction *Exit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *NewOrderButton;
    QPushButton *CloseOrderButton;
    QPushButton *AddToOrderButton;
    QPushButton *DeleteOrderButton;
    QPushButton *InfoAboutOrderButton;
    QPushButton *Info;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->setWindowModality(Qt::NonModal);
        MainForm->setEnabled(true);
        MainForm->resize(720, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainForm->sizePolicy().hasHeightForWidth());
        MainForm->setSizePolicy(sizePolicy);
        MainForm->setMinimumSize(QSize(720, 450));
        MainForm->setMaximumSize(QSize(720, 450));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        MainForm->setFont(font);
        MainForm->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/cafe-server.gif"), QSize(), QIcon::Normal, QIcon::Off);
        MainForm->setWindowIcon(icon);
        MainForm->setAutoFillBackground(false);
        MainForm->setStyleSheet(QStringLiteral(""));
        MainForm->setToolButtonStyle(Qt::ToolButtonTextOnly);
        MainForm->setAnimated(true);
        InfoAboutDev = new QAction(MainForm);
        InfoAboutDev->setObjectName(QStringLiteral("InfoAboutDev"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/img/Button White Info.png"), QSize(), QIcon::Normal, QIcon::Off);
        InfoAboutDev->setIcon(icon1);
        Exit = new QAction(MainForm);
        Exit->setObjectName(QStringLiteral("Exit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/img/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        Exit->setIcon(icon2);
        centralWidget = new QWidget(MainForm);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 6, 1, 1);

        NewOrderButton = new QPushButton(centralWidget);
        NewOrderButton->setObjectName(QStringLiteral("NewOrderButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(NewOrderButton->sizePolicy().hasHeightForWidth());
        NewOrderButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(87);
        font1.setStrikeOut(false);
        NewOrderButton->setFont(font1);
        NewOrderButton->setAutoFillBackground(false);
        NewOrderButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(NewOrderButton, 1, 1, 1, 1);

        CloseOrderButton = new QPushButton(centralWidget);
        CloseOrderButton->setObjectName(QStringLiteral("CloseOrderButton"));
        sizePolicy1.setHeightForWidth(CloseOrderButton->sizePolicy().hasHeightForWidth());
        CloseOrderButton->setSizePolicy(sizePolicy1);
        CloseOrderButton->setFont(font1);
        CloseOrderButton->setAutoFillBackground(false);
        CloseOrderButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(CloseOrderButton, 1, 3, 1, 1);

        AddToOrderButton = new QPushButton(centralWidget);
        AddToOrderButton->setObjectName(QStringLiteral("AddToOrderButton"));
        sizePolicy1.setHeightForWidth(AddToOrderButton->sizePolicy().hasHeightForWidth());
        AddToOrderButton->setSizePolicy(sizePolicy1);
        AddToOrderButton->setFont(font1);
        AddToOrderButton->setAutoFillBackground(false);
        AddToOrderButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(AddToOrderButton, 3, 1, 1, 1);

        DeleteOrderButton = new QPushButton(centralWidget);
        DeleteOrderButton->setObjectName(QStringLiteral("DeleteOrderButton"));
        sizePolicy1.setHeightForWidth(DeleteOrderButton->sizePolicy().hasHeightForWidth());
        DeleteOrderButton->setSizePolicy(sizePolicy1);
        DeleteOrderButton->setFont(font1);
        DeleteOrderButton->setAutoFillBackground(false);
        DeleteOrderButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(DeleteOrderButton, 3, 3, 1, 1);

        InfoAboutOrderButton = new QPushButton(centralWidget);
        InfoAboutOrderButton->setObjectName(QStringLiteral("InfoAboutOrderButton"));
        sizePolicy1.setHeightForWidth(InfoAboutOrderButton->sizePolicy().hasHeightForWidth());
        InfoAboutOrderButton->setSizePolicy(sizePolicy1);
        InfoAboutOrderButton->setFont(font1);
        InfoAboutOrderButton->setAutoFillBackground(false);
        InfoAboutOrderButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(InfoAboutOrderButton, 1, 5, 1, 1);

        Info = new QPushButton(centralWidget);
        Info->setObjectName(QStringLiteral("Info"));
        sizePolicy1.setHeightForWidth(Info->sizePolicy().hasHeightForWidth());
        Info->setSizePolicy(sizePolicy1);
        Info->setFont(font1);
        Info->setAutoFillBackground(false);
        Info->setStyleSheet(QLatin1String("QPushButton\n"
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

        gridLayout->addWidget(Info, 3, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 0, 3, 1, 1);

        MainForm->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainForm);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 720, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setTearOffEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/img/\320\221\320\265\320\267 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setIcon(icon3);
        menu->setSeparatorsCollapsible(false);
        menu->setToolTipsVisible(false);
        MainForm->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainForm);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainForm->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(InfoAboutDev);
        menu->addAction(Exit);

        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "MainForm", nullptr));
        InfoAboutDev->setText(QApplication::translate("MainForm", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \321\200\320\276\320\267\321\200\320\276\320\261\320\275\320\270\320\272\320\260", nullptr));
#ifndef QT_NO_TOOLTIP
        InfoAboutDev->setToolTip(QApplication::translate("MainForm", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", nullptr));
#endif // QT_NO_TOOLTIP
        Exit->setText(QApplication::translate("MainForm", "\320\222\320\270\320\271\321\202\320\270", nullptr));
        NewOrderButton->setText(QApplication::translate("MainForm", "\320\235\320\276\320\262\320\265 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        CloseOrderButton->setText(QApplication::translate("MainForm", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        AddToOrderButton->setText(QApplication::translate("MainForm", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\264\320\276 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        DeleteOrderButton->setText(QApplication::translate("MainForm", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217", nullptr));
        InfoAboutOrderButton->setText(QApplication::translate("MainForm", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \321\201\321\202\320\276\320\273\320\270\320\272", nullptr));
        Info->setText(QApplication::translate("MainForm", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", nullptr));
        menu->setTitle(QApplication::translate("MainForm", "\320\224\320\276\320\264\320\260\321\202\320\272\320\276\320\262\321\226 \320\264\321\226\321\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
