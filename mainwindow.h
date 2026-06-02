#ifndef INC_1KYRSOVAYA_MAINWINDOW_H
#define INC_1KYRSOVAYA_MAINWINDOW_H
#include <QMainWindow>
#include <string>
#include <vector>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <QTextCursor>
#include <QLabel>
#include <QKeyEvent>
using namespace std;
struct Array {
    string name;
    string value;
};
struct MainLogic {
    vector<Array> v;
    Array U;
    Array Empty;
    MainLogic() {
        U.name = "U";
        U.value = "";
        Empty.name = "∅";
        Empty.value = "";
    }
    void input(int n);
    Array Or(Array &a, Array &b);
    Array And(Array &a, Array &b);
    Array XOR(Array &a, Array &b);
    Array universal();
    Array Not(Array &a);
};
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow :public QMainWindow {
    vector<QLabel*> mynames;
    vector<QLineEdit*> myvalues;
    vector<QLineEdit*> myquestions;
    vector<QPushButton*> mybuttons;
    QString symvols;
    QString Arrays;
    QString mylitername;
    int nofquestions;
    vector<QLabel*> myerrors;
    Q_OBJECT
protected:
    bool eventFilter(QObject *watched, QEvent *event) override;
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
void qbox(int n);
void nbox(int n);
void invalue(string value, int n);
void universaladd();
void btn_or();
void btn_and();
void btn_xor();
void btn_universal();
void btn_emptyarray();
void btn_X();
void btn_Not();
void btn_equal();
void btn_result();
void btn_array(int i);
void btn_backspace();
void btn_bracket();
void btn_left();
void btn_right();
void btn_instruction();
private:
    Ui::MainWindow *ui; // Вказівник на ваш згенерований UI
};
#endif //INC_1KYRSOVAYA_MAINWINDOW_H
