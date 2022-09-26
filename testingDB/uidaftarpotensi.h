#ifndef UIDAFTARPOTENSI_H
#define UIDAFTARPOTENSI_H

#include <QDialog>
#include<QtSql>
#include<QSqlQuery>
#include<QSqlDatabase>

namespace Ui {
class uidaftarpotensi;
}

class uidaftarpotensi : public QDialog
{
    Q_OBJECT

public:
    explicit uidaftarpotensi(QWidget *parent = nullptr);
    ~uidaftarpotensi();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::uidaftarpotensi *ui;
    QSqlQueryModel * qModel;
    QSqlDatabase mDatabase;
};

#endif // UIDAFTARPOTENSI_H
