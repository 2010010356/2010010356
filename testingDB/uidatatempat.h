#ifndef UIDATATEMPAT_H
#define UIDATATEMPAT_H

#include <QDialog>
#include<QtSql>
#include<QSqlQuery>
#include<QSqlDatabase>

namespace Ui {
class uidatatempat;
}

class uidatatempat : public QDialog
{
    Q_OBJECT

public:
    explicit uidatatempat(QWidget *parent = nullptr);
    ~uidatatempat();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::uidatatempat *ui;
    QSqlQueryModel * qModel;
    QSqlDatabase mDatabase;
};

#endif // UIDATATEMPAT_H
