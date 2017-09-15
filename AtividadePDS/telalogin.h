#ifndef TELALOGIN_H
#define TELALOGIN_H

#include <QMainWindow>

namespace Ui {
class TelaLogin;
}

class TelaLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit TelaLogin(QWidget *parent = 0);
    ~TelaLogin();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::TelaLogin *ui;
};

#endif // TELALOGIN_H
