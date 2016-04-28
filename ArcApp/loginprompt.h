#ifndef LOGINPROMPT_H
#define LOGINPROMPT_H

#include <QDialog>

namespace Ui {
class LoginPrompt;
}

class LoginPrompt : public QDialog
{
    Q_OBJECT

public:
    explicit LoginPrompt(QWidget *parent = 0);
    ~LoginPrompt();

private slots:

    void on_pushButton_clicked();

private:
    Ui::LoginPrompt *ui;
};

#endif // LOGINPROMPT_H