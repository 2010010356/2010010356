#ifndef UIDATAPROFIL_H
#define UIDATAPROFIL_H

#include <QDialog>
#include<QtSql>
#include<QSqlQuery>
#include<QSqlDatabase>

namespace Ui {
class uidataprofil;
}

class uidataprofil : public QDialog
{
    Q_OBJECT

public:
    explicit uidataprofil(QWidget *parent = nullptr);
    ~uidataprofil();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_editcari_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::uidataprofil *ui;
    QSqlQueryModel * qModel;
    QSqlDatabase mDatabase;
};

#endif // UIDATAPROFIL_H
