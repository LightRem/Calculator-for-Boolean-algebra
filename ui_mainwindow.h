/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_6;
    QGridLayout *gridLayout_6;
    QLabel *error3;
    QLineEdit *question3;
    QLineEdit *question4;
    QLineEdit *question5;
    QLineEdit *question2;
    QLabel *error2;
    QLabel *error1;
    QLabel *error5;
    QLineEdit *question1;
    QLabel *error4;
    QLabel *error6;
    QLabel *error7;
    QLabel *error8;
    QLabel *error9;
    QLabel *error10;
    QGridLayout *gridLayout_7;
    QLabel *answer;
    QGridLayout *gridLayout_5;
    QLineEdit *result_line_P;
    QLineEdit *result_line_Q;
    QLabel *empty_result;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QPushButton *lfx;
    QPushButton *btn_backspace;
    QPushButton *btn_or;
    QPushButton *emptyarray;
    QPushButton *univ;
    QPushButton *btn_right;
    QPushButton *btn_bracket;
    QPushButton *btn_not;
    QPushButton *btn_and;
    QPushButton *btn_left;
    QPushButton *btn_xor;
    QPushButton *equal;
    QPushButton *result;
    QGridLayout *gridLayout_3;
    QPushButton *btn_name2;
    QPushButton *btn_name8;
    QPushButton *btn_name9;
    QPushButton *btn_name4;
    QPushButton *btn_name5;
    QPushButton *btn_name1;
    QPushButton *btn_name3;
    QPushButton *btn_name6;
    QPushButton *btn_name10;
    QPushButton *btn_name7;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *value9;
    QLineEdit *value6;
    QLabel *name8;
    QLabel *name5;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *value1;
    QLineEdit *value2;
    QLabel *name2;
    QLineEdit *value10;
    QSpacerItem *horizontalSpacer_3;
    QLabel *name9;
    QLabel *label_2;
    QLabel *name3;
    QLabel *name4;
    QLineEdit *value7;
    QLineEdit *value4;
    QLabel *name1;
    QLabel *name7;
    QLineEdit *value3;
    QLabel *name6;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *value5;
    QLineEdit *value_of_u;
    QLineEdit *value8;
    QLabel *name10;
    QTextEdit *instruction;
    QPushButton *btn_instruction;
    QSpacerItem *verticalSpacer_8;
    QSpinBox *spinBox_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_9;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(858, 832);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(241, 241, 241, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush2(QColor(227, 227, 227, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush3);
        MainWindow->setPalette(palette);
        MainWindow->setTabletTracking(false);
        MainWindow->setAcceptDrops(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_9 = new QGridLayout(centralwidget);
        gridLayout_9->setObjectName("gridLayout_9");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_7, 0, 5, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 2, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        error3 = new QLabel(centralwidget);
        error3->setObjectName("error3");

        gridLayout_6->addWidget(error3, 3, 1, 1, 1);

        question3 = new QLineEdit(centralwidget);
        question3->setObjectName("question3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(question3->sizePolicy().hasHeightForWidth());
        question3->setSizePolicy(sizePolicy);
        question3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));
        question3->setReadOnly(false);

        gridLayout_6->addWidget(question3, 3, 0, 1, 1);

        question4 = new QLineEdit(centralwidget);
        question4->setObjectName("question4");
        sizePolicy.setHeightForWidth(question4->sizePolicy().hasHeightForWidth());
        question4->setSizePolicy(sizePolicy);
        question4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));
        question4->setReadOnly(false);

        gridLayout_6->addWidget(question4, 4, 0, 1, 1);

        question5 = new QLineEdit(centralwidget);
        question5->setObjectName("question5");
        sizePolicy.setHeightForWidth(question5->sizePolicy().hasHeightForWidth());
        question5->setSizePolicy(sizePolicy);
        question5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));
        question5->setReadOnly(false);

        gridLayout_6->addWidget(question5, 6, 0, 1, 1);

        question2 = new QLineEdit(centralwidget);
        question2->setObjectName("question2");
        sizePolicy.setHeightForWidth(question2->sizePolicy().hasHeightForWidth());
        question2->setSizePolicy(sizePolicy);
        question2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));
        question2->setReadOnly(false);

        gridLayout_6->addWidget(question2, 1, 0, 1, 1);

        error2 = new QLabel(centralwidget);
        error2->setObjectName("error2");

        gridLayout_6->addWidget(error2, 1, 1, 1, 1);

        error1 = new QLabel(centralwidget);
        error1->setObjectName("error1");

        gridLayout_6->addWidget(error1, 0, 1, 1, 1);

        error5 = new QLabel(centralwidget);
        error5->setObjectName("error5");

        gridLayout_6->addWidget(error5, 6, 1, 1, 1);

        question1 = new QLineEdit(centralwidget);
        question1->setObjectName("question1");
        sizePolicy.setHeightForWidth(question1->sizePolicy().hasHeightForWidth());
        question1->setSizePolicy(sizePolicy);
        question1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));
        question1->setReadOnly(false);

        gridLayout_6->addWidget(question1, 0, 0, 1, 1);

        error4 = new QLabel(centralwidget);
        error4->setObjectName("error4");

        gridLayout_6->addWidget(error4, 4, 1, 1, 1);

        error6 = new QLabel(centralwidget);
        error6->setObjectName("error6");

        gridLayout_6->addWidget(error6, 0, 2, 1, 1);

        error7 = new QLabel(centralwidget);
        error7->setObjectName("error7");

        gridLayout_6->addWidget(error7, 1, 2, 1, 1);

        error8 = new QLabel(centralwidget);
        error8->setObjectName("error8");

        gridLayout_6->addWidget(error8, 3, 2, 1, 1);

        error9 = new QLabel(centralwidget);
        error9->setObjectName("error9");

        gridLayout_6->addWidget(error9, 4, 2, 1, 1);

        error10 = new QLabel(centralwidget);
        error10->setObjectName("error10");

        gridLayout_6->addWidget(error10, 6, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        answer = new QLabel(centralwidget);
        answer->setObjectName("answer");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(answer->sizePolicy().hasHeightForWidth());
        answer->setSizePolicy(sizePolicy1);
        answer->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_7->addWidget(answer, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        result_line_P = new QLineEdit(centralwidget);
        result_line_P->setObjectName("result_line_P");
        result_line_P->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));
        result_line_P->setReadOnly(true);

        gridLayout_5->addWidget(result_line_P, 1, 0, 1, 1);

        result_line_Q = new QLineEdit(centralwidget);
        result_line_Q->setObjectName("result_line_Q");
        result_line_Q->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));
        result_line_Q->setReadOnly(true);

        gridLayout_5->addWidget(result_line_Q, 0, 0, 1, 1);

        empty_result = new QLabel(centralwidget);
        empty_result->setObjectName("empty_result");
        QFont font;
        font.setPointSize(22);
        empty_result->setFont(font);

        gridLayout_5->addWidget(empty_result, 0, 1, 2, 1);


        gridLayout_7->addLayout(gridLayout_5, 1, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        lfx = new QPushButton(centralwidget);
        lfx->setObjectName("lfx");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lfx->sizePolicy().hasHeightForWidth());
        lfx->setSizePolicy(sizePolicy2);
        lfx->setFont(font);
        lfx->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        lfx->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(lfx, 1, 2, 1, 1);

        btn_backspace = new QPushButton(centralwidget);
        btn_backspace->setObjectName("btn_backspace");
        btn_backspace->setFont(font);
        btn_backspace->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_backspace->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(btn_backspace, 1, 1, 1, 1);

        btn_or = new QPushButton(centralwidget);
        btn_or->setObjectName("btn_or");
        sizePolicy2.setHeightForWidth(btn_or->sizePolicy().hasHeightForWidth());
        btn_or->setSizePolicy(sizePolicy2);
        btn_or->setFont(font);
        btn_or->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_or->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(btn_or, 1, 3, 1, 1);

        emptyarray = new QPushButton(centralwidget);
        emptyarray->setObjectName("emptyarray");
        sizePolicy2.setHeightForWidth(emptyarray->sizePolicy().hasHeightForWidth());
        emptyarray->setSizePolicy(sizePolicy2);
        emptyarray->setFont(font);
        emptyarray->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        emptyarray->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(emptyarray, 0, 3, 1, 1);

        univ = new QPushButton(centralwidget);
        univ->setObjectName("univ");
        sizePolicy2.setHeightForWidth(univ->sizePolicy().hasHeightForWidth());
        univ->setSizePolicy(sizePolicy2);
        univ->setFont(font);
        univ->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        univ->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(univ, 0, 2, 1, 1);

        btn_right = new QPushButton(centralwidget);
        btn_right->setObjectName("btn_right");
        btn_right->setFont(font);
        btn_right->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_right->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(btn_right, 0, 1, 1, 1);

        btn_bracket = new QPushButton(centralwidget);
        btn_bracket->setObjectName("btn_bracket");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btn_bracket->sizePolicy().hasHeightForWidth());
        btn_bracket->setSizePolicy(sizePolicy3);
        btn_bracket->setFont(font);
        btn_bracket->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_bracket->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(btn_bracket, 1, 0, 1, 1);

        btn_not = new QPushButton(centralwidget);
        btn_not->setObjectName("btn_not");
        sizePolicy2.setHeightForWidth(btn_not->sizePolicy().hasHeightForWidth());
        btn_not->setSizePolicy(sizePolicy2);
        btn_not->setFont(font);
        btn_not->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_not->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(btn_not, 1, 5, 1, 1);

        btn_and = new QPushButton(centralwidget);
        btn_and->setObjectName("btn_and");
        sizePolicy2.setHeightForWidth(btn_and->sizePolicy().hasHeightForWidth());
        btn_and->setSizePolicy(sizePolicy2);
        btn_and->setFont(font);
        btn_and->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_and->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(btn_and, 1, 4, 1, 1);

        btn_left = new QPushButton(centralwidget);
        btn_left->setObjectName("btn_left");
        btn_left->setFont(font);
        btn_left->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_left->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(btn_left, 0, 0, 1, 1);

        btn_xor = new QPushButton(centralwidget);
        btn_xor->setObjectName("btn_xor");
        sizePolicy2.setHeightForWidth(btn_xor->sizePolicy().hasHeightForWidth());
        btn_xor->setSizePolicy(sizePolicy2);
        btn_xor->setFont(font);
        btn_xor->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_xor->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(btn_xor, 0, 5, 1, 1);

        equal = new QPushButton(centralwidget);
        equal->setObjectName("equal");
        sizePolicy2.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy2);
        equal->setFont(font);
        equal->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        equal->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_2->addWidget(equal, 0, 4, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 1, 1, 1);

        result = new QPushButton(centralwidget);
        result->setObjectName("result");
        sizePolicy2.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy2);
        result->setFont(font);
        result->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        result->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_4->addWidget(result, 2, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        btn_name2 = new QPushButton(centralwidget);
        btn_name2->setObjectName("btn_name2");
        sizePolicy2.setHeightForWidth(btn_name2->sizePolicy().hasHeightForWidth());
        btn_name2->setSizePolicy(sizePolicy2);
        btn_name2->setFont(font);
        btn_name2->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_name2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_3->addWidget(btn_name2, 0, 1, 1, 1);

        btn_name8 = new QPushButton(centralwidget);
        btn_name8->setObjectName("btn_name8");
        sizePolicy2.setHeightForWidth(btn_name8->sizePolicy().hasHeightForWidth());
        btn_name8->setSizePolicy(sizePolicy2);
        btn_name8->setFont(font);
        btn_name8->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_name8->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_3->addWidget(btn_name8, 3, 2, 1, 1);

        btn_name9 = new QPushButton(centralwidget);
        btn_name9->setObjectName("btn_name9");
        sizePolicy2.setHeightForWidth(btn_name9->sizePolicy().hasHeightForWidth());
        btn_name9->setSizePolicy(sizePolicy2);
        btn_name9->setFont(font);
        btn_name9->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_name9->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_3->addWidget(btn_name9, 3, 3, 1, 1);

        btn_name4 = new QPushButton(centralwidget);
        btn_name4->setObjectName("btn_name4");
        sizePolicy2.setHeightForWidth(btn_name4->sizePolicy().hasHeightForWidth());
        btn_name4->setSizePolicy(sizePolicy2);
        btn_name4->setFont(font);
        btn_name4->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_name4->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_3->addWidget(btn_name4, 0, 3, 1, 1);

        btn_name5 = new QPushButton(centralwidget);
        btn_name5->setObjectName("btn_name5");
        sizePolicy2.setHeightForWidth(btn_name5->sizePolicy().hasHeightForWidth());
        btn_name5->setSizePolicy(sizePolicy2);
        btn_name5->setFont(font);
        btn_name5->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_name5->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_3->addWidget(btn_name5, 0, 4, 1, 1);

        btn_name1 = new QPushButton(centralwidget);
        btn_name1->setObjectName("btn_name1");
        sizePolicy2.setHeightForWidth(btn_name1->sizePolicy().hasHeightForWidth());
        btn_name1->setSizePolicy(sizePolicy2);
        btn_name1->setFont(font);
        btn_name1->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_name1->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_3->addWidget(btn_name1, 0, 0, 1, 1);

        btn_name3 = new QPushButton(centralwidget);
        btn_name3->setObjectName("btn_name3");
        sizePolicy2.setHeightForWidth(btn_name3->sizePolicy().hasHeightForWidth());
        btn_name3->setSizePolicy(sizePolicy2);
        btn_name3->setFont(font);
        btn_name3->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_name3->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_3->addWidget(btn_name3, 0, 2, 1, 1);

        btn_name6 = new QPushButton(centralwidget);
        btn_name6->setObjectName("btn_name6");
        sizePolicy2.setHeightForWidth(btn_name6->sizePolicy().hasHeightForWidth());
        btn_name6->setSizePolicy(sizePolicy2);
        btn_name6->setFont(font);
        btn_name6->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_name6->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_3->addWidget(btn_name6, 3, 0, 1, 1);

        btn_name10 = new QPushButton(centralwidget);
        btn_name10->setObjectName("btn_name10");
        sizePolicy2.setHeightForWidth(btn_name10->sizePolicy().hasHeightForWidth());
        btn_name10->setSizePolicy(sizePolicy2);
        btn_name10->setFont(font);
        btn_name10->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_name10->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_3->addWidget(btn_name10, 3, 4, 1, 1);

        btn_name7 = new QPushButton(centralwidget);
        btn_name7->setObjectName("btn_name7");
        sizePolicy2.setHeightForWidth(btn_name7->sizePolicy().hasHeightForWidth());
        btn_name7->setSizePolicy(sizePolicy2);
        btn_name7->setFont(font);
        btn_name7->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        btn_name7->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_3->addWidget(btn_name7, 3, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 2);


        gridLayout_8->addLayout(gridLayout_7, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 3, 3, 11, 3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setContentsMargins(-1, -1, 0, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 14, 4, 1, 1);

        value9 = new QLineEdit(centralwidget);
        value9->setObjectName("value9");
        value9->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(value9->sizePolicy().hasHeightForWidth());
        value9->setSizePolicy(sizePolicy4);
        value9->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value9, 9, 1, 1, 5);

        value6 = new QLineEdit(centralwidget);
        value6->setObjectName("value6");
        value6->setEnabled(true);
        sizePolicy4.setHeightForWidth(value6->sizePolicy().hasHeightForWidth());
        value6->setSizePolicy(sizePolicy4);
        value6->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value6, 6, 1, 1, 5);

        name8 = new QLabel(centralwidget);
        name8->setObjectName("name8");
        name8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name8, 8, 0, 1, 1);

        name5 = new QLabel(centralwidget);
        name5->setObjectName("name5");
        name5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name5, 5, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 14, 2, 1, 1);

        value1 = new QLineEdit(centralwidget);
        value1->setObjectName("value1");
        value1->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(100);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(value1->sizePolicy().hasHeightForWidth());
        value1->setSizePolicy(sizePolicy5);
        value1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value1, 1, 1, 1, 5);

        value2 = new QLineEdit(centralwidget);
        value2->setObjectName("value2");
        value2->setEnabled(true);
        sizePolicy4.setHeightForWidth(value2->sizePolicy().hasHeightForWidth());
        value2->setSizePolicy(sizePolicy4);
        value2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value2, 2, 1, 1, 5);

        name2 = new QLabel(centralwidget);
        name2->setObjectName("name2");
        name2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name2, 2, 0, 1, 1);

        value10 = new QLineEdit(centralwidget);
        value10->setObjectName("value10");
        value10->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(value10->sizePolicy().hasHeightForWidth());
        value10->setSizePolicy(sizePolicy6);
        value10->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value10, 10, 1, 1, 5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 14, 3, 1, 1);

        name9 = new QLabel(centralwidget);
        name9->setObjectName("name9");
        name9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name9, 9, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy7);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        name3 = new QLabel(centralwidget);
        name3->setObjectName("name3");
        name3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name3, 3, 0, 1, 1);

        name4 = new QLabel(centralwidget);
        name4->setObjectName("name4");
        name4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name4, 4, 0, 1, 1);

        value7 = new QLineEdit(centralwidget);
        value7->setObjectName("value7");
        value7->setEnabled(true);
        sizePolicy4.setHeightForWidth(value7->sizePolicy().hasHeightForWidth());
        value7->setSizePolicy(sizePolicy4);
        value7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value7, 7, 1, 1, 5);

        value4 = new QLineEdit(centralwidget);
        value4->setObjectName("value4");
        value4->setEnabled(true);
        sizePolicy4.setHeightForWidth(value4->sizePolicy().hasHeightForWidth());
        value4->setSizePolicy(sizePolicy4);
        value4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value4, 4, 1, 1, 5);

        name1 = new QLabel(centralwidget);
        name1->setObjectName("name1");
        name1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name1, 1, 0, 1, 1);

        name7 = new QLabel(centralwidget);
        name7->setObjectName("name7");
        name7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name7, 7, 0, 1, 1);

        value3 = new QLineEdit(centralwidget);
        value3->setObjectName("value3");
        value3->setEnabled(true);
        sizePolicy4.setHeightForWidth(value3->sizePolicy().hasHeightForWidth());
        value3->setSizePolicy(sizePolicy4);
        value3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value3, 3, 1, 1, 5);

        name6 = new QLabel(centralwidget);
        name6->setObjectName("name6");
        name6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name6, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 14, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_4, 12, 0, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        sizePolicy7.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy7);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 14, 5, 1, 1);

        value5 = new QLineEdit(centralwidget);
        value5->setObjectName("value5");
        value5->setEnabled(true);
        sizePolicy4.setHeightForWidth(value5->sizePolicy().hasHeightForWidth());
        value5->setSizePolicy(sizePolicy4);
        value5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value5, 5, 1, 1, 5);

        value_of_u = new QLineEdit(centralwidget);
        value_of_u->setObjectName("value_of_u");
        value_of_u->setEnabled(true);
        sizePolicy6.setHeightForWidth(value_of_u->sizePolicy().hasHeightForWidth());
        value_of_u->setSizePolicy(sizePolicy6);
        value_of_u->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value_of_u, 12, 2, 1, 4);

        value8 = new QLineEdit(centralwidget);
        value8->setObjectName("value8");
        value8->setEnabled(true);
        sizePolicy4.setHeightForWidth(value8->sizePolicy().hasHeightForWidth());
        value8->setSizePolicy(sizePolicy4);
        value8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"    background-color: white;\n"
"\n"
"    color: black;\n"
"\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"\n"
"    background-color: #F5F5F5; \n"
"\n"
"    color: black;\n"
"\n"
"}"));

        gridLayout->addWidget(value8, 8, 1, 1, 5);

        name10 = new QLabel(centralwidget);
        name10->setObjectName("name10");
        name10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name10, 10, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout, 3, 0, 6, 2);

        instruction = new QTextEdit(centralwidget);
        instruction->setObjectName("instruction");
        instruction->setReadOnly(true);

        gridLayout_9->addWidget(instruction, 10, 0, 1, 2);

        btn_instruction = new QPushButton(centralwidget);
        btn_instruction->setObjectName("btn_instruction");
        btn_instruction->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: #e0e0e0;\n"
"border: 1px solid black;\n"
"padding: 5px 12px; /* \320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\320\265 \320\265\321\221 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 */"));

        gridLayout_9->addWidget(btn_instruction, 9, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_8, 4, 2, 1, 1);

        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(5);

        gridLayout_9->addWidget(spinBox_2, 0, 4, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_5, 7, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_7, 3, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_4, 13, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        sizePolicy6.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy6);
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_9->addWidget(label_5, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer, 11, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout_9->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 5, 2, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_9, 12, 0, 1, 1);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        spinBox->setMaximum(10);

        gridLayout_9->addWidget(spinBox, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 6, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 8, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 858, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        error3->setText(QCoreApplication::translate("MainWindow", "Invalid brackets input", nullptr));
        question3->setText(QString());
        question4->setText(QString());
        question5->setText(QString());
        question2->setText(QString());
        error2->setText(QCoreApplication::translate("MainWindow", "Invalid brackets input", nullptr));
        error1->setText(QCoreApplication::translate("MainWindow", "Invalid brackets input", nullptr));
        error5->setText(QCoreApplication::translate("MainWindow", "Invalid brackets input", nullptr));
        question1->setText(QString());
        error4->setText(QCoreApplication::translate("MainWindow", "Invalid brackets input", nullptr));
        error6->setText(QCoreApplication::translate("MainWindow", "Enter the X please", nullptr));
        error7->setText(QCoreApplication::translate("MainWindow", "Enter the X please", nullptr));
        error8->setText(QCoreApplication::translate("MainWindow", "Enter the X please", nullptr));
        error9->setText(QCoreApplication::translate("MainWindow", "Enter the X please", nullptr));
        error10->setText(QCoreApplication::translate("MainWindow", "Enter the X please", nullptr));
        answer->setText(QCoreApplication::translate("MainWindow", "X (\320\262 \320\277\321\200\320\276\320\274\321\226\320\266\320\272\321\203 \320\262\321\226\320\264 Q \320\264\320\276 \302\254P) =", nullptr));
        result_line_P->setText(QString());
        result_line_Q->setText(QString());
        empty_result->setText(QCoreApplication::translate("MainWindow", "\342\210\205", nullptr));
        lfx->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btn_backspace->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        btn_or->setText(QCoreApplication::translate("MainWindow", "\342\210\252", nullptr));
#if QT_CONFIG(whatsthis)
        emptyarray->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\342\210\205</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        emptyarray->setText(QCoreApplication::translate("MainWindow", "\342\210\205", nullptr));
        univ->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        btn_right->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        btn_bracket->setText(QCoreApplication::translate("MainWindow", "()", nullptr));
        btn_not->setText(QCoreApplication::translate("MainWindow", "\302\254", nullptr));
        btn_and->setText(QCoreApplication::translate("MainWindow", "\342\210\251", nullptr));
        btn_left->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        btn_xor->setText(QCoreApplication::translate("MainWindow", "\342\226\263", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\320\271\321\202\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \320\245", nullptr));
        btn_name2->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        btn_name8->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        btn_name9->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        btn_name4->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        btn_name5->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        btn_name1->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        btn_name3->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_name6->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        btn_name10->setText(QCoreApplication::translate("MainWindow", "J", nullptr));
        btn_name7->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        value9->setText(QString());
        value6->setText(QString());
        name8->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        name5->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        value1->setText(QString());
        value2->setText(QString());
        name2->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        value10->setText(QString());
        name9->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260", nullptr));
        name3->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        name4->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        value7->setText(QString());
        value4->setText(QString());
        name1->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        name7->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        value3->setText(QString());
        name6->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\275\321\217 U \320\274\320\275\320\276\320\266\320\270\320\275\320\270:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\275\321\217", nullptr));
        value5->setText(QString());
        value8->setText(QString());
        name10->setText(QCoreApplication::translate("MainWindow", "J", nullptr));
        instruction->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\227 \320\273\321\226\320\262\320\276\320\263\320\276 \320\261\320\276\320\272\321\203 \320\265\320\272\321\200\320\260\320\275\321\203 \321\224 \320\272\320\275\320\276\320\277\320\272\320\260, \321\217\320\272\320\276\321\216 \320\274\320\276\320\266\320\275\320\260 \320\262\320\270\320\261\321\200\320\260\321\202\320\270 \320\272\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320"
                        "\277\320\276\321\202\321\200\321\226\320\261\320\275\320\270\321\205 \320\264\320\273\321\217 \321\200\321\226\320\262\320\275\321\217\320\275\321\214 \320\274\320\275\320\276\320\266\320\270\320\275. \320\237\321\226\320\264 \320\275\320\265\321\216 \320\262 \320\272\320\276\320\273\320\276\320\275\321\206\321\226 &quot;\320\227\320\275\320\260\321\207\320\265\320\275\320\275\321\217&quot; \320\274\320\276\320\266\320\275\320\260 \320\262\320\277\320\270\321\201\320\260\321\202\320\270 \320\261\321\203\320\264\321\214 \321\217\320\272\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \320\274\320\275\320\276\320\266\320\270\320\275\320\270, \320\260\320\273\320\265 \320\267\320\260\320\277\320\260\320\274'\321\217\321\202\320\260\321\216\321\202\321\214\321\201\321\217 \321\202\321\226\320\273\321\214\320\272\320\270 \321\203\320\275\321\226\320\272\320\260\320\273\321\214\320\275\321\226 \321\201\320\270\320\274\320\262\320\276\320\273\320\270. \320\242\320\276\320\261\321\202\320\276 "
                        "\321\217\320\272\321\211\320\276 \320\262\320\262\320\265\321\201\321\202\320\270 abca \321\202\320\276 \320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \321\206\321\226\321\224\321\227 \320\274\320\275\320\276\320\266\320\270\320\275\320\270 \320\261\321\203\320\264\320\265 abc. \320\242\320\260\320\272\320\276\320\266 \320\264\321\226\321\224 \320\277\321\200\320\260\320\262\320\270\320\273\320\276, \321\211\320\276 \320\267\320\261\320\265\321\200\321\226\320\263\320\260\321\216\321\202\321\214\321\201\321\217 \321\202\321\226\320\273\321\214\320\272\320\270 \321\201\320\270\320\274\320\262\320\276\320\273\320\270 \320\275\320\270\320\266\320\275\321\214\320\276\320\263\320\276 \321\200\320\265\320\263\321\226\321\201\321\202\321\200\321\203. \320\257\320\272\321\211\320\276 \320\274\320\275\320\276\320\266\320\270\320\275\320\260 \320\261\321\203\320\264\320\265 AB \321\202\320\276 \320\267\320\261\320\265\321\200\320\265\320\266\320\265\321\202\321\214\321\201\321\217 ab. \320\227\320\275\320"
                        "\260\321\207\320\265\320\275\320\275\321\217 \320\274\320\275\320\276\320\266\320\270\320\275(A-J) \320\274\320\276\320\266\321\203\321\202\321\214 \321\201\320\277\321\226\320\262\320\277\320\260\320\264\320\260\321\202\320\270. \320\235\320\270\320\266\321\207\320\265 \321\224 \320\274\320\276\320\266\320\273\320\270\320\262\321\226\321\201\321\202\321\214 \320\262\320\262\320\265\321\201\321\202\320\270 \320\265\320\273\320\265\320\274\320\265\320\275\321\202\320\270 \321\203\320\275\321\226\320\262\320\265\321\200\321\201\320\260\320\273\321\214\320\275\320\276\321\227 \320\274\320\275\320\276\320\266\320\270\320\275\320\270. \320\227\320\275\320\260\321\207\320\265\320\275\320\275\321\217 U \320\274\320\275\320\276\320\266\320\270\320\275\320\270 \320\264\320\270\320\275\320\260\320\274\321\226\321\207\320\275\320\276 \320\267\320\274\321\226\320\275\321\216\321\216\321\202\321\214\321\201\321\217 \320\262 \320\267\320\260\320\273\320\265\320\266\320\275\320\276\321\201\321\202\321\226 \320\262\321\226\320"
                        "\264 \320\267\320\275\320\260\321\207\320\265\320\275\321\214 \320\262 \320\274\320\275\320\276\320\266\320\270\320\275\320\260\321\205 A-J. \320\222\320\270\320\264\320\260\320\273\321\217\321\202\320\270 \320\265\320\273\320\265\320\274\320\265\320\275\321\202\320\270 \320\262 U \320\274\320\275\320\276\320\266\320\270\320\275\321\226 \320\274\320\276\320\266\320\275\320\260, \320\260\320\273\320\265 \321\202\321\226\320\273\321\214\320\272\320\270 \321\202\321\226, \321\217\320\272\321\226 \320\275\320\265 \320\267\320\261\320\265\321\200\321\226\320\263\320\260\321\216\321\202\321\214\321\201\321\217 \320\262 \320\274\320\275\320\276\320\266\320\270\320\275\320\260\321\205 A-J.<br />\320\227 \320\277\321\200\320\260\320\262\320\276\320\263\320\276 \320\261\320\276\320\272\321\203 \321\200\320\276\320\267\321\202\320\260\321\210\320\276\320\262\320\260\320\275\320\270\320\271 \321\226\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201 \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321"
                        "\217 \321\201\320\270\321\201\321\202\320\265\320\274 \321\200\321\226\320\262\320\275\321\217\320\275\321\214. \320\222\320\265\321\200\321\205\320\275\321\214\320\276\321\216 \320\272\320\275\320\276\320\277\320\272\320\276\321\216 \320\274\320\276\320\266\320\275\320\260 \320\262\320\270\320\261\321\200\320\260\321\202\320\270 \320\277\320\276\321\202\321\200\321\226\320\261\320\275\321\203 \320\272\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\201\320\273\320\276\321\202\321\226\320\262 \320\264\320\273\321\217 \321\200\321\226\320\262\320\275\321\217\320\275\321\214. \320\232\320\276\320\266\320\275\320\265 \321\200\321\226\320\262\320\275\321\217\320\275\320\275\321\217 \320\274\320\260\321\224 \320\274\321\226\321\201\321\202\320\270\321\202\320\270 \321\205\320\276\321\207\320\260 \320\261 \320\276\320\264\320\270\320\275 \321\201\320\270\320\274\320\262\320\276\320\273 \320\245 \321\202\320\260 \320\276\320\264\320\270\320\275 \321\201\320\270\320\274\320\262\320\276\320\273 =. "
                        "\320\237\321\200\320\270 \320\262\320\262\320\265\320\264\320\265\320\275\321\226 \321\200\321\226\320\262\320\275\321\217\320\275\320\275\321\217 \321\224 \320\260\320\262\321\202\320\276\320\267\320\260\320\274\321\226\320\275\320\260, \321\217\320\272\320\260 \320\264\320\276\320\277\320\276\320\274\320\260\320\263\320\260\321\224 \320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\320\276 \320\262\320\262\320\265\321\201\321\202\320\270 \320\264\320\260\320\275\320\275\321\226. \320\235\320\270\320\266\321\207\320\265, \321\203 \320\277\320\276\320\273\321\226 \320\267 \320\272\320\273\320\260\320\262\321\226\321\210\320\260\320\274\320\270 \321\224 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\270 \321\202\320\260 \320\274\320\275\320\276\320\266\320\270\320\275\320\270. \320\243\321\202\320\276\321\207\320\275\320\265\320\275\320\275\321\217: \320\274\320\275\320\276\320\266\320\270\320\275\320\260 U \321\202\320\260 \320\276\320\277\320\265\321\200\320\260\321\202\320"
                        "\276\321\200 U(\320\276\320\261'\321\224\320\264\320\275\320\260\320\275\320\275\321\217) \321\224 \320\264\321\203\320\266\320\265 \320\262\321\226\320\267\321\203\320\260\320\273\321\214\320\275\320\276 \321\201\321\205\320\276\320\266\320\270\320\274\320\270, \321\202\320\276 U \320\274\320\275\320\276\320\266\320\270\320\275\320\260 \320\267\320\275\320\260\321\205\320\276\320\264\320\270\321\202\321\214\321\201\321\217 \320\275\320\260\320\264 \320\274\320\275\320\276\320\266\320\270\320\275\320\276\321\216 X, \320\267\320\277\321\200\320\260\320\262\320\260 \320\262\321\226\320\264 ')', \320\267\320\273\321\226\320\262\320\260 \320\262\321\226\320\264 \320\277\321\203\321\201\321\202\320\276\321\227 \320\274\320\275\320\276\320\266\320\270\320\275\320\270, \320\260 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200 U(\320\276\320\261'\321\224\320\264\320\260\320\275\320\275\321\217) \320\267\320\275\320\260\321\205\320\276\320\264\320\270\321\202\321\214\321\201\321\217 \320\277\321\226\320"
                        "\264 \320\277\321\203\321\201\321\202\320\276\321\216 \320\274\320\275\320\276\320\266\320\270\320\275\320\276\321\216, \320\267\320\277\321\200\320\260\320\262\320\260 \320\262\321\226\320\264 \320\245. \320\232\320\276\320\273\320\270 \321\200\321\226\320\262\320\275\321\217\320\275\320\275\321\217 \320\277\320\276\320\262\320\275\321\226\321\201\321\202\321\214\321\216 \320\275\320\260\320\277\320\270\321\201\320\260\320\275\321\226 \320\262\320\270 \320\274\320\260\321\224\321\202\320\265 \320\275\320\260\321\202\320\270\321\201\320\275\321\203\321\202\320\270 \320\272\320\273\320\260\320\262\321\226\321\210\321\203 &quot;\320\227\320\275\320\260\320\271\321\202\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \320\245&quot; \321\226 \320\264\320\260\320\275\320\275\321\226 \321\200\321\226\320\262\320\275\321\217\320\275\320\275\321\217 \320\276\320\261\321\200\320\260\321\205\321\203\321\216\321\202\321\214\321\201\321\217 \321\202\320\260 \320\262\320\270\320\262\320\265\320\264\320"
                        "\265\321\202\321\214\321\201\321\217 \320\275\320\270\320\266\321\207\320\265, \320\277\321\226\320\264 \320\272\320\273\320\260\320\262\321\226\321\210\320\260\320\274\320\270 \320\277\321\200\320\276\320\274\321\226\320\266\320\276\320\272 \320\275\320\260 \321\217\320\272\320\276\320\274\321\203 \320\274\320\276\320\266\320\265 \320\267\320\275\320\260\321\205\320\276\320\264\320\270\321\202\320\270\321\201\321\217 X. \320\257\320\272\321\211\320\276 \321\200\321\226\320\262\320\275\321\217\320\275\320\275\321\217 \320\275\320\265 \320\274\320\260\321\224 \321\200\320\276\320\267\320\262'\321\217\320\267\320\272\321\226\320\262, \320\262\320\270\320\262\320\265\320\264\320\265\321\202\321\214\321\201\321\217 \320\277\321\203\321\201\321\202\320\260 \320\274\320\275\320\276\320\266\320\270\320\275\320\260. \320\232\320\273\320\260\320\262\321\226\321\210\320\260 &quot;\320\227\320\275\320\260\320\271\321\202\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \320\245&quot; \320\275\320\265"
                        " \320\261\321\203\320\264\320\265 \320\277\321\200\320\260\321\206\321\216\320\262\320\260\321\202\320\270 \320\264\320\276\321\202\320\270, \320\277\320\276\320\272\320\270 \320\262\320\270\321\201\320\270\321\202\321\214 \321\205\320\276\321\207\320\260 \320\261 \320\276\320\264\320\275\320\260 \320\277\320\276\320\274\320\270\320\273\320\272\320\260, \320\260\320\261\320\276 \320\262 \321\200\321\226\320\262\320\275\321\217\320\275\320\275\321\226 \320\275\320\265 \320\267'\321\217\320\262\320\270\321\202\321\214\321\201\321\217 \321\205\320\276\321\207\320\260 \320\261 \320\276\320\264\320\270\320\275 \321\201\320\270\320\274\320\262\320\276\320\273 =.<span style=\" font-family:'JetBrains Mono','monospace'; color:#6aab73;\"> </span></p></body></html>", nullptr));
        btn_instruction->setText(QCoreApplication::translate("MainWindow", "\320\206\320\275\321\201\321\202\321\200\321\203\320\272\321\206\321\226\321\217 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\200\321\226\320\262\320\275\321\217\320\275\321\214(\320\264\320\276 5):", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\274\320\275\320\276\320\266\320\270\320\275 (\320\264\320\276 10):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
