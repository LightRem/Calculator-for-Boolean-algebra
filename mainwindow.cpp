#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
MainLogic Main;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->empty_result->hide();
    ui->instruction->hide();
    nofquestions = ui->spinBox_2->value();
    mynames = {ui->name1, ui->name2, ui->name3, ui->name4, ui->name5, ui->name6, ui->name7, ui->name8, ui->name9, ui->name10};
    myvalues = {ui->value1, ui->value2, ui->value3, ui->value4, ui->value5, ui->value6, ui->value7, ui->value8, ui->value9, ui->value10};
    myquestions = {ui->question1, ui->question2, ui->question3, ui->question4, ui->question5};
    mylitername = "ABCDEFGHIJ";
    symvols = "∪∩¬△=";
    Arrays = "∅XUABCDEFGHIJ";
    mybuttons = {ui->btn_name1, ui->btn_name2, ui->btn_name3, ui->btn_name4, ui->btn_name5, ui->btn_name6, ui->btn_name7, ui->btn_name8, ui->btn_name9, ui->btn_name10};
    myerrors = {ui->error1, ui->error2, ui->error3, ui->error4, ui->error5, ui->error6, ui->error7, ui->error8, ui->error9, ui->error10};
    for (int i = 0; i < 10; i++) {
        mynames[i]->hide();
        myvalues[i]->hide();
        mybuttons[i]->hide();
        mybuttons[i]->setFocusPolicy(Qt::NoFocus);
        myerrors[i]->hide();
    }
    for (int i = 1; i < 5; i++) {
        myquestions[i]->hide();
    }
    for (int i = 0; i < 5; i++) {
        myquestions[i]->installEventFilter(this);
    }
    connect(ui->spinBox_2, SIGNAL(valueChanged(int)), this, SLOT(qbox(int)));
    connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(nbox(int)));
    for (int i = 0; i < 10; i++) {
        connect(myvalues[i], &QLineEdit::textChanged, this, [this, i](const QString &text) {
            this->invalue(text.toStdString(), i);
        });
    }
    for (int i = 0; i < 10; i++) {
        connect(mybuttons[i], &QPushButton::clicked, this, [this, i]() {
           this->btn_array(i);
        });
    }
    connect(ui->value_of_u, &QLineEdit::textChanged, this, [this](const QString &text) {
            this->universaladd();
        } );
    connect(ui->btn_or, &QPushButton::clicked, this, [this]() {
       this->btn_or();
    });
    connect(ui->btn_and, &QPushButton::clicked, this, [this]() {
       this->btn_and();
    });
    connect(ui->btn_xor, &QPushButton::clicked, this, [this]() {
       this->btn_xor();
    });
    connect(ui->btn_not, &QPushButton::clicked, this, [this]() {
       this->btn_Not();
    });
    connect(ui->equal, &QPushButton::clicked, this, [this]() {
       this->btn_equal();
    });
    connect(ui->univ, &QPushButton::clicked, this, [this]() {
       this->btn_universal();
    });
    connect(ui->lfx, &QPushButton::clicked, this, [this]() {
       this->btn_X();
    });
    connect(ui->emptyarray, &QPushButton::clicked, this, [this]() {
       this->btn_emptyarray();
    });
    connect(ui->result, &QPushButton::clicked, this, [this]() {
       this->btn_result();
    });
    connect(ui->btn_backspace, &QPushButton::clicked, this, [this]() {
        this->btn_backspace();
    });
    connect(ui->btn_bracket, &QPushButton::clicked, this, [this]() {
        this->btn_bracket();
    });
    connect(ui->btn_left, &QPushButton::clicked, this, [this]() {
        this->btn_left();
    });
    connect(ui->btn_right, &QPushButton::clicked, this, [this]() {
        this->btn_right();
    });
    connect(ui->btn_instruction, &QPushButton::clicked, this, [this]() {
        this->btn_instruction();
    });
    this->adjustSize();
}
void MainWindow::btn_instruction() {
    if (ui->instruction->isHidden()) {
        ui->instruction->show();
    }
    else {
        ui->instruction->hide();
    }
}
void MainWindow::btn_backspace() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    if (text.isEmpty()) {
        return;
    }
    text.remove(text.size() - 1, 1);
    int countl = 0, countr = 0, posofe;
    bool left = false, right = false, cont;
    if (text.contains('=')) {
        posofe = text.indexOf('=');
        cont = true;
    }
    else {
        posofe = text.size();
        cont = false;
    }
    for (int i = 0; i < posofe; i++) {
        if (text[i] == '(') {
            countl++;
        }
        if (text[i] == ')') {
            countr++;
        }
    }
    if (countl != countr) {
        left = true;
    }
    if (cont == true) {
        countl = 0, countr = 0;
        for (int i = posofe; i < text.size(); i++) {
            if (text[i] == '(') {
                countl++;
            }
            if (text[i] == ')') {
                countr++;
            }
        }
        if (countl != countr) {
            right = true;
        }
    }
    if (left||right) {
        myerrors[i]->show();
    }
    else {
        myerrors[i]->hide();
    }
    myquestions[i]->setText(text);
    myquestions[i]->setFocus();
}
void MainWindow::btn_right() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    while (pos > 0 && symvols.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && Arrays.contains(text[pos])) {
        text.remove(pos, 1);
    }
    text.insert(pos, ")");
    pos++;
    int countl = 0, countr = 0, posofe;
    bool left = false, right = false, cont;
    if (text.contains('=')) {
        posofe = text.indexOf('=');
        cont = true;
    }
    else {
        posofe = text.size();
        cont = false;
    }
    for (int i = 0; i < posofe; i++) {
        if (text[i] == '(') {
            countl++;
        }
        if (text[i] == ')') {
            countr++;
        }
    }
    if (countl != countr) {
        left = true;
    }
    if (cont == true) {
        countl = 0, countr = 0;
        for (int i = posofe; i < text.size(); i++) {
            if (text[i] == '(') {
                countl++;
            }
            if (text[i] == ')') {
                countr++;
            }
        }
        if (countl != countr) {
            right = true;
        }
    }
    if (left||right) {
        myerrors[i]->show();
    }
    else {
        myerrors[i]->hide();
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
void MainWindow::btn_left() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    while (pos > 0 && Arrays.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && symvols.contains(text[pos])) {
        text.remove(pos, 1);
    }
    if (pos> 0 && text[pos-1] == ')') {
        text.insert(pos, "∩(");
        pos++;
        pos++;
    }
    else {
        text.insert(pos, "(");
        pos++;
    }
    int balance, posofe;
    bool left = false, right = false, cont;
    if (text.contains('=')) {
        posofe = text.indexOf('=');
        cont = true;
    }
    else {
        posofe = text.size();
        cont = false;
    }
    for (int i = 0; i < posofe; i++) {
        if (text[i] == '(') {
            balance++;
        } else if (text[i] == ')') {
            balance--;
        }
        if (balance < 0) {
            left = true;
            break;
        }
    }
    if (balance != 0 ) {
        left = true;
    }
    if (cont == true) {
        balance = 0;
        for (int i = posofe; i < text.size(); i++) {
            if (text[i] == '(') {
                balance++;
            } else if (text[i] == ')') {
                balance--;
            }
            if (balance < 0) {
                right = true;
                break;
            }
        }
        if (balance != 0 ) {
            right = true;
        }
    }
    if (left||right) {
        myerrors[i]->show();
    }
    else {
        myerrors[i]->hide();
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
void MainWindow::btn_bracket() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    while (pos > 0 && Arrays.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && Arrays.contains(text[pos])) {
        text.remove(pos, 1);
    }
    if (pos> 0 && text[pos-1] == ')') {
        text.insert(pos, "∩()");
        pos++;
        pos++;
    }
    else {
        text.insert(pos, "()");
        pos++;
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
void MainWindow::btn_array(int n) {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    while (pos > 0 && Arrays.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && Arrays.contains(text[pos])) {
        text.remove(pos, 1);
    }
    if ((pos == 0 || text[pos - 1] != ')') && (pos == text.size() || text[pos] != '(')) {
        text.insert(pos, mylitername[n]);
        pos++;
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
int getPriority(QChar op) {
    if (op == QChar(L'¬')) return 3;
    if (op == QChar(L'∩')) return 2;
    if (op == QChar(L'∪') || op == QChar(L'△')) return 1;
    return -1;
}
void MainWindow::btn_result() {
    QString Function;
    vector<QString> L(nofquestions);
    vector<QString> R(nofquestions);
    vector<QString> text(nofquestions);
    for (int i = 0; i < nofquestions; i++) {
        text[i]=myquestions[i]->text();
        if (myerrors[i]->isVisible()) {
            ui->result_line_P->clear();
            ui->result_line_Q->clear();
            return;
        }
        if (!text[i].contains("X")) {
            myerrors[i+5]->show();
            ui->result_line_P->clear();
            ui->result_line_Q->clear();
            return;
        }
    }
    for (int i = 0; i < nofquestions; i++) {
        for (int j = 0; j < text[i].size() - 1;) {
            if (symvols.contains(text[i][j]) && text[i][j+1] == ')') {
                text[i].remove(j, 1);
            } else {
                j++;
            }
        }
    }
    int index = 0;
    for (int i = 0; i < nofquestions; i++) {
        if ((index = text[i].indexOf("=")) != -1) {
            L[i]=myquestions[i]->text().left(index);
            R[i]=myquestions[i]->text().mid(index+1);
            if (symvols.contains(R[i].right(1))) {
                if (R[i].right(1) == L'¬') {
                    if (R[i].size() >= 2) {
                        R[i].remove(R[i].size() - 2, 2);
                    } else {
                        R[i].clear();
                    }
                }
                else {
                    R[i].remove(R[i].size() - 1, 1);
                }
            }
        }
        if (L[i].isEmpty() || R[i].isEmpty()) {
            ui->result_line_P->clear();
            ui->result_line_Q->clear();
            return;
        }
    }
    for (int i = 0; i < nofquestions; i++) {
        if (i != nofquestions-1) {
        Function.append("(("+L[i]+')'+L'△'+'('+R[i]+"))"+L'∪');
        }
        else {
            Function.append("(("+L[i]+')'+L'△'+'('+R[i]+"))");
        }
    }
    QString Q, P, QLine, PLine, QStack, PStack;
    Q = Function;
    P = Function;
    Q.replace('X', L'∅');
    P.replace('X', 'U');
    for (int i = 0; i < Q.size(); i++) {
        if (Arrays.contains(Q[i])) {
            QLine.append(Q[i]);
        }
        else {
            if (Q[i] == '(') {
                QStack.append(Q[i]);
            }
            else if (Q[i] == ')') {
                while (QStack.back() != '(') {
                    QLine.append(QStack.back());
                    QStack.chop(1);
                }
                QStack.chop(1);
            }
            else {
                while (!QStack.isEmpty() && QStack.back() != '(' && getPriority(QStack.back()) >= getPriority(Q[i])) {
                    QLine.append(QStack.back());
                    QStack.chop(1);
                }
                QStack.append(Q[i]);
            }
        }
    }
    while (!QStack.isEmpty()) {
        QLine.append(QStack.back());
        QStack.chop(1);
    }
    Main.v.push_back(Main.U);
    Main.v.push_back(Main.Empty);
    Array Q_final;
    Q_final.name = 'Q';
    vector<QString> Q_arr;
    vector<Array> temp;
    while (!QLine.isEmpty()) {
        while (!QLine.isEmpty() && !symvols.contains(QLine[0])) {
            Q_arr.push_back(QString(QLine[0]));
            QLine.remove(0, 1);
        }
        if (QLine.isEmpty()) {
            break;
        }
        if (getPriority(QLine[0]) == 3) {
            if (Q_arr.empty()) {
                Main.v.pop_back(); Main.v.pop_back();
                ui->result_line_P->clear(); ui->result_line_Q->clear();
                return;
            }
            bool a = false;
            for (int j = 0; j < Main.v.size(); j++) {
                if (Q_arr[Q_arr.size()-1].toStdString() == Main.v[j].name) {
                    temp.push_back(Main.Not(Main.v[j]));
                    temp[temp.size()-1].name = "temp" + to_string(temp.size());
                    Q_arr[Q_arr.size()-1] = QString::fromStdString(temp[temp.size()-1].name);
                    a = true;
                    break;
                }
            }
            if (!a) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == Q_arr[Q_arr.size()-1].toStdString()) {
                        temp.push_back(Main.Not(temp[j]));
                        temp[temp.size()-1].name = "temp" + to_string(temp.size());
                        Q_arr[Q_arr.size()-1] = QString::fromStdString(temp[temp.size()-1].name);
                        break;
                    }
                }
            }
        }
        else if (getPriority(QLine[0]) == 2) {
            if (Q_arr.size() < 2) {
                Main.v.pop_back(); Main.v.pop_back(); ui->result_line_P->clear(); ui->result_line_Q->clear(); return;
            }
            Array X, Y;
            bool a = false, b = false;
            for (int j = 0; j < Main.v.size(); j++) {
                if (Q_arr[Q_arr.size()-1].toStdString() == Main.v[j].name) {
                    X = Main.v[j];
                    a = true;
                }
                if (Q_arr[Q_arr.size()-2].toStdString() == Main.v[j].name) {
                    Y = Main.v[j];
                    b = true;
                }
                if (a&&b) {
                    break;
                }
            }
            if (!a) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == Q_arr[Q_arr.size()-1].toStdString()) {
                        X = temp[j];
                        break;
                    }
                }
            }
            if (!b) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == Q_arr[Q_arr.size()-2].toStdString()) {
                        Y = temp[j];
                        break;
                    }
                }
            }
            temp.push_back(Main.And(X, Y));
            temp[temp.size()-1].name = "temp" + to_string(temp.size());
            Q_arr[Q_arr.size()-2] = QString::fromStdString(temp[temp.size()-1].name);
            Q_arr.pop_back();
        }
        else if (QLine[0] == L'∪') {
            if (Q_arr.size() < 2) {
                Main.v.pop_back(); Main.v.pop_back(); ui->result_line_P->clear(); ui->result_line_Q->clear(); return;
            }
            Array X, Y;
            bool a = false, b = false;
            for (int j = 0; j < Main.v.size(); j++) {
                if (Q_arr[Q_arr.size()-1].toStdString() == Main.v[j].name) {
                    X = Main.v[j];
                    a = true;
                }
                if (Q_arr[Q_arr.size()-2].toStdString() == Main.v[j].name) {
                    Y = Main.v[j];
                    b = true;
                }
                if (a&&b) {
                    break;
                }
            }
            if (!a) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == Q_arr[Q_arr.size()-1].toStdString()) {
                        X = temp[j];
                        break;
                    }
                }
            }
            if (!b) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == Q_arr[Q_arr.size()-2].toStdString()) {
                        Y = temp[j];
                        break;
                    }
                }
            }
            temp.push_back(Main.Or(X, Y));
            temp[temp.size()-1].name = "temp" + to_string(temp.size());
            Q_arr[Q_arr.size()-2] = QString::fromStdString(temp[temp.size()-1].name);
            Q_arr.pop_back();
        }
        else {
            if (Q_arr.size() < 2) {
                Main.v.pop_back(); Main.v.pop_back(); ui->result_line_P->clear(); ui->result_line_Q->clear(); return;
            }
            Array X, Y;
            bool a = false, b = false;
            for (int j = 0; j < Main.v.size(); j++) {
                if (Q_arr[Q_arr.size()-1].toStdString() == Main.v[j].name) {
                    X = Main.v[j];
                    a = true;
                }
                if (Q_arr[Q_arr.size()-2].toStdString() == Main.v[j].name) {
                    Y = Main.v[j];
                    b = true;
                }
                if (a&&b) {
                    break;
                }
            }
            if (!a) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == Q_arr[Q_arr.size()-1].toStdString()) {
                        X = temp[j];
                        break;
                    }
                }
            }
            if (!b) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == Q_arr[Q_arr.size()-2].toStdString()) {
                        Y = temp[j];
                        break;
                    }
                }
            }
            temp.push_back(Main.XOR(X, Y));
            temp[temp.size()-1].name = "temp" + to_string(temp.size());
            Q_arr[Q_arr.size()-2] = QString::fromStdString(temp[temp.size()-1].name);
            Q_arr.pop_back();
        }
        QLine.remove(0, 1);
    }
    if (temp.empty()) {
        Main.v.pop_back();
        Main.v.pop_back();
        ui->result_line_P->clear();
        ui->result_line_Q->clear();
        return;
    }
    Q_final.value = temp[temp.size()-1].value;
    temp.clear();
    for (int i = 0; i < P.size(); i++) {
        if (Arrays.contains(P[i])) {
            PLine.append(P[i]);
        }
        else {
            if (P[i] == '(') {
                PStack.append(P[i]);
            }
            else if (P[i] == ')') {
                while (PStack.back() != '(') {
                    PLine.append(PStack.back());
                    PStack.chop(1);
                }
                PStack.chop(1);
            }
            else {
                while (!PStack.isEmpty() && PStack.back() != '(' && getPriority(PStack.back()) >= getPriority(P[i])) {
                    PLine.append(PStack.back());
                    PStack.chop(1);
                }
                PStack.append(P[i]);
            }
        }
    }
    while (!PStack.isEmpty()) {
        PLine.append(PStack.back());
        PStack.chop(1);
    }
    Array P_final;
    P_final.name = 'P';
    vector<QString> P_arr;
    while (!PLine.isEmpty()) {
        while (!PLine.isEmpty() && !symvols.contains(PLine[0])) {
            P_arr.push_back(QString(PLine[0]));
            PLine.remove(0, 1);
        }
        if (PLine.isEmpty()) {
            break;
        }
        if (getPriority(PLine[0]) == 3) {
            if (P_arr.empty()) {
                Main.v.pop_back(); Main.v.pop_back();
                ui->result_line_P->clear(); ui->result_line_Q->clear();
                return;
            }

            bool a = false;
            for (int j = 0; j < Main.v.size(); j++) {
                if (P_arr[P_arr.size()-1].toStdString() == Main.v[j].name) {
                    temp.push_back(Main.Not(Main.v[j]));
                    temp[temp.size()-1].name = "temp" + to_string(temp.size());
                    P_arr[P_arr.size()-1] = QString::fromStdString(temp[temp.size()-1].name);
                    a = true;
                    break;
                }
            }
            if (!a) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == P_arr[P_arr.size()-1].toStdString()) {
                        temp.push_back(Main.Not(temp[j]));
                        temp[temp.size()-1].name = "temp" + to_string(temp.size());
                        P_arr[P_arr.size()-1] = QString::fromStdString(temp[temp.size()-1].name);
                        break;
                    }
                }
            }
        }
        else if (getPriority(PLine[0]) == 2) {
            if (P_arr.size() < 2) {
                Main.v.pop_back(); Main.v.pop_back(); ui->result_line_P->clear(); ui->result_line_Q->clear(); return;
            }
            Array X, Y;
            bool a = false, b = false;
            for (int j = 0; j < Main.v.size(); j++) {
                if (P_arr[P_arr.size()-1].toStdString() == Main.v[j].name) {
                    X = Main.v[j];
                    a = true;
                }
                if (P_arr[P_arr.size()-2].toStdString() == Main.v[j].name) {
                    Y = Main.v[j];
                    b = true;
                }
                if (a&&b) {
                    break;
                }
            }
            if (!a) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == P_arr[P_arr.size()-1].toStdString()) {
                        X = temp[j];
                        break;
                    }
                }
            }
            if (!b) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == P_arr[P_arr.size()-2].toStdString()) {
                        Y = temp[j];
                        break;
                    }
                }
            }
            temp.push_back(Main.And(X, Y));
            temp[temp.size()-1].name = "temp" + to_string(temp.size());
            P_arr[P_arr.size()-2] = QString::fromStdString(temp[temp.size()-1].name);
            P_arr.pop_back();
        }
        else if (PLine[0] == L'∪') {
            if (P_arr.size() < 2) {
                Main.v.pop_back(); Main.v.pop_back(); ui->result_line_P->clear(); ui->result_line_Q->clear(); return;
            }
            Array X, Y;
            bool a = false, b = false;
            for (int j = 0; j < Main.v.size(); j++) {
                if (P_arr[P_arr.size()-1].toStdString() == Main.v[j].name) {
                    X = Main.v[j];
                    a = true;
                }
                if (P_arr[P_arr.size()-2].toStdString() == Main.v[j].name) {
                    Y = Main.v[j];
                    b = true;
                }
                if (a&&b) {
                    break;
                }
            }
            if (!a) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == P_arr[P_arr.size()-1].toStdString()) {
                        X = temp[j];
                        break;
                    }
                }
            }
            if (!b) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == P_arr[P_arr.size()-2].toStdString()) {
                        Y = temp[j];
                        break;
                    }
                }
            }
            temp.push_back(Main.Or(X, Y));
            temp[temp.size()-1].name = "temp" + to_string(temp.size());
            P_arr[P_arr.size()-2] = QString::fromStdString(temp[temp.size()-1].name);
            P_arr.pop_back();
        }
        else {
            if (P_arr.size() < 2) {
                Main.v.pop_back(); Main.v.pop_back(); ui->result_line_P->clear(); ui->result_line_Q->clear(); return;
            }
            Array X, Y;
            bool a = false, b = false;
            for (int j = 0; j < Main.v.size(); j++) {
                if (P_arr[P_arr.size()-1].toStdString() == Main.v[j].name) {
                    X = Main.v[j];
                    a = true;
                }
                if (P_arr[P_arr.size()-2].toStdString() == Main.v[j].name) {
                    Y = Main.v[j];
                    b = true;
                }
                if (a&&b) {
                    break;
                }
            }
            if (!a) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == P_arr[P_arr.size()-1].toStdString()) {
                        X = temp[j];
                        break;
                    }
                }
            }
            if (!b) {
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j].name == P_arr[P_arr.size()-2].toStdString()) {
                        Y = temp[j];
                        break;
                    }
                }
            }
            temp.push_back(Main.XOR(X, Y));
            temp[temp.size()-1].name = "temp" + to_string(temp.size());
            P_arr[P_arr.size()-2] = QString::fromStdString(temp[temp.size()-1].name);
            P_arr.pop_back();
        }
        PLine.remove(0, 1);
    }
    if (temp.empty()) {
        Main.v.pop_back();
        Main.v.pop_back();
        ui->result_line_P->clear();
        ui->result_line_Q->clear();
        return;
    }
    P_final.value = temp[temp.size()-1].value;
    Main.v.pop_back();
    Main.v.pop_back();
    if (Main.Empty.value != Main.And(Q_final, P_final).value) {
        ui->result_line_P->hide();
        ui->result_line_Q->hide();
        ui->empty_result->show();
        return;
    }
    P_final.value = Main.Not(temp[temp.size()-1]).value;
    if (Q_final.value.empty() && P_final.value.empty()) {
        ui->result_line_P->hide();
        ui->result_line_Q->hide();
        ui->empty_result->show();
    }
    else {
        ui->result_line_P->show();
        ui->result_line_Q->show();
        ui->empty_result->hide();
        if (Q_final.value.empty()) {
            ui->result_line_Q->setText("∅");
        } else {
            ui->result_line_Q->setText(QString::fromStdString(Q_final.value));
        }
        ui->result_line_P->setText(QString::fromStdString(P_final.value));
    }
}
void MainWindow::btn_Not() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    if (pos > 0 && (text[pos - 1] == L'¬' || Arrays.contains(text[pos - 1]))) {
        text.remove(pos - 1, 1);
        pos--;
    }
    else if (pos < text.size() && (text[pos] == L'¬' || symvols.contains(text[pos]))) {
        text.remove(pos, 1);
    }
    else if (pos == 0 || (pos > 0 && text[pos-1] != ')')) {
        text.insert(pos, "¬");
        pos++;
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
void MainWindow::btn_X() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    while (pos > 0 && Arrays.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && Arrays.contains(text[pos])) {
        text.remove(pos, 1);
    }
    if ((pos == 0 || text[pos - 1] != ')') && (pos == text.size() || text[pos] != '(')) {
        text.insert(pos, "X");
        pos++;
    }
    if (myerrors[i+5]->isVisible()) {
        myerrors[i+5]->hide();
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
void MainWindow::btn_universal() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    while (pos > 0 && Arrays.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && Arrays.contains(text[pos])) {
        text.remove(pos, 1);
    }
    if ((pos == 0 || text[pos - 1] != ')') && (pos == text.size() || text[pos] != '(')) {
        text.insert(pos, "U");
        pos++;
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
void MainWindow::btn_emptyarray() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    while (pos > 0 && Arrays.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && Arrays.contains(text[pos])) {
        text.remove(pos, 1);
    }
    if ((pos == 0 || text[pos - 1] != ')') && (pos == text.size() || text[pos] != '(')) {
        text.insert(pos, "∅");
        pos++;
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
void MainWindow::btn_equal() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    int oldEqualPos;
    while ((oldEqualPos = text.indexOf('=')) != -1) {
        if (oldEqualPos > 0 && Arrays.contains(text[oldEqualPos - 1])) {
            text.remove(oldEqualPos - 1, 2);
            if (pos > oldEqualPos) {
                pos -= 2;
            } else if (pos == oldEqualPos) {
                pos -= 1;
            }
        }
        else {
            text.remove(oldEqualPos, 1);
            if (pos > oldEqualPos) {
                pos -= 1;
            }
        }
    }
    while (pos > 0 && symvols.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && symvols.contains(text[pos])) {
        text.remove(pos, 1);
    }
    if (pos > 0 && text[pos - 1] != '(' && (pos == text.size() || text[pos] != ')')) {
        text.insert(pos, "=");
        pos++;
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
void MainWindow::btn_or() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    while (pos > 0 && symvols.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && symvols.contains(text[pos])) {
        text.remove(pos, 1);
    }
    if (pos > 0 && text[pos-1] != '(') {
        text.insert(pos, "∪");
        pos++;
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
void MainWindow::btn_and() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    while (pos > 0 && symvols.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && symvols.contains(text[pos])) {
        text.remove(pos, 1);
    }
    if (pos > 0 && text[pos-1] != '(') {
        text.insert(pos, "∩");
        pos++;
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}
void MainWindow::btn_xor() {
    QWidget *focusedWidget = QApplication::focusWidget();
    QLineEdit *currentLine = qobject_cast<QLineEdit*>(focusedWidget);
    if (!currentLine) {
        return;
    }
    bool isQuestion = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (currentLine == myquestions[i]) {
            isQuestion = true;
            break;
        }
    }
    if (!isQuestion) {
        return;
    }
    QString text = myquestions[i]->text();
    int pos = myquestions[i]->cursorPosition();
    while (pos > 0 && symvols.contains(text[pos - 1])) {
        text.remove(pos - 1, 1);
        pos--;
    }
    while (pos < text.size() && symvols.contains(text[pos])) {
        text.remove(pos, 1);
    }
    if (pos > 0 && text[pos-1] != '(') {
        text.insert(pos, "△");
        pos++;
    }
    myquestions[i]->setText(text);
    myquestions[i]->setCursorPosition(pos);
    myquestions[i]->setFocus();
}

void MainWindow::universaladd() {
    string currentText = ui->value_of_u->text().toStdString();
    string cleanText = "";
    for (size_t i = 0; i < currentText.size(); i++) {
        char c = tolower(currentText[i]);
        bool isDuplicate = false;
        for (size_t j = 0; j < cleanText.size(); j++) {
            if (cleanText[j] == c) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cleanText += c;
        }
    }
    string baseU = Main.universal().value;
    for (size_t i = 0; i < baseU.size(); i++) {
        char c = baseU[i];
        if (cleanText.find(c) == string::npos) {
            cleanText += c;
        }
    }
    Main.U.value = cleanText;
    if (currentText != cleanText) {
        ui->value_of_u->blockSignals(true);
        ui->value_of_u->setText(QString::fromStdString(cleanText));
        ui->value_of_u->blockSignals(false);
    }
}
void MainWindow::qbox(int n) {
    int i;
    nofquestions = n;
    for (i = 1; i < 5;) {
        if (!myquestions[i]->isVisible()) {
            break;
        }
        i++;
    }
    int oldn = i;
    if (oldn > n) {
        myquestions[i-1]->setVisible(false);
        myquestions[i-1]->clear();
        myerrors[i-1]->hide();
        myerrors[i+4]->hide();
    }
    else {
        myquestions[n-1]->show();
    }
}
void MainWindow::nbox(int n) {
    int oldn = Main.v.size();
    if (oldn > n) {
        myvalues[oldn-1]->clear();
        mynames[oldn-1]->hide();
        myvalues[oldn-1]->hide();
        mybuttons[oldn-1]->hide();
        Main.v.erase(Main.v.begin() + oldn-1, Main.v.end());
    }
    else {
        mynames[n-1]->show();
        myvalues[n-1]->show();
        mybuttons[n-1]->show();
    }
    Main.v.resize(n);
    this->universaladd();
}
void MainWindow::invalue(string value, int n) {
    string name = mylitername.toStdString();
    Main.v[n].name = name[n];
    Main.v[n].value = value;
    for (int i = 0; i < Main.v[n].value.size(); i++) {
        Main.v[n].value[i] = tolower(Main.v[n].value[i]);
    }
    for (int i = 0; i < Main.v[n].value.size(); i++) {
        for (int j = 0; j < Main.v[n].value.size();) {
            if (Main.v[n].value[i] == Main.v[n].value[j]) {
                if (i != j) {
                    Main.v[n].value.erase(j, 1);
                }
                else {
                    j++;
                }
            }
            else {
                j++;
            }
        }
    }
    this->universaladd();
}
Array MainLogic::Or(Array &a, Array &b) {
    Array res;
    res.name = "res";
    res.value = a.value+b.value;
    for (int i = 0; i < res.value.size(); i++) {
        for (int j = i + 1; j < res.value.size(); ) {
            if (res.value[i] == res.value[j]) {
                res.value.erase(j, 1);
            } else {
                j++;
            }
        }
    }
    return res;
}
Array MainLogic::And(Array &a, Array &b) {
    Array res;
    res.name = "res";
    res.value = "";
    for (int i = 0; i < b.value.length(); i++) {
        for (int j = 0; j < a.value.length(); j++) {
            if (a.value[j] == b.value[i]) {
                res.value += b.value[i];
                break;
            }
        }
    }
    return res;
}
Array MainLogic::XOR(Array &a, Array &b) {
    Array res;
    res.name = "res";
    res.value = a.value+b.value;
    for (int i = 0; i < b.value.length(); i++) {
        for (int j = 0; j < a.value.length(); j++) {
            if (a.value[j] == b.value[i]) {
                int pos;
                while ((pos = res.value.find(a.value[j])) != string::npos) {
                    res.value.erase(pos, 1);
                }
            }
        }
    }
    return res;
}
Array MainLogic::universal() {
    Array tempU;
    tempU.name = "U";
    tempU.value = "";
    if (Main.v.empty()) {
        return tempU;
    }
    for (int i = 0; i < v.size(); i++) {
        if (!Main.v[i].value.empty()) {
            tempU.value = Or(tempU, v[i]).value;
        }
    }
    return tempU;
}
Array MainLogic::Not(Array &a) {
    Array res;
    res.name = "res";
    if (a.value.size() == U.value.size()) {
        res.value = "";
        return res;
    }
    for (int i = 0; i < U.value.length(); i++) {
        if (a.value.find(U.value[i]) == string::npos) {
            res.value += U.value[i];
        }
    }
    return res;
}
bool MainWindow::eventFilter(QObject *watched, QEvent *event) {
    if (event->type() == QEvent::KeyPress) {
        for (int i = 0; i < 5; i++) {
            if (watched == myquestions[i]) {
                QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
                if (keyEvent->key() == Qt::Key_Left || keyEvent->key() == Qt::Key_Right) {
                    return false;
                }
                return true;
            }
        }
    }
    return QMainWindow::eventFilter(watched, event);
}
MainWindow::~MainWindow()
{
    delete ui;
}
