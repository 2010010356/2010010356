#include "uidataprofil.h"
#include "ui_uidataprofil.h"
#include <QMessageBox>

uidataprofil::uidataprofil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uidataprofil)
{
    ui->setupUi(this);

    mDatabase=QSqlDatabase::addDatabase("QODBC");
    mDatabase.setDatabaseName("Driver={MySQL ODBC 8.0 UNICODE Driver};Database=2010010356_pertanian");
    mDatabase.setHostName("localhost");
    mDatabase.setUserName("root");
    mDatabase.setPassword("");
    mDatabase.setPort(3306);


    if (!mDatabase.open()){
        QMessageBox::information(this,"Error",mDatabase.lastError().text());
        return;
    }



    qModel = new QSqlQueryModel(this);
    qModel->setQuery("SELECT * FROM data_profil");
    qModel-> setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    qModel-> setHeaderData(1,Qt::Horizontal,QObject::tr("nama"));
    qModel-> setHeaderData(2,Qt::Horizontal,QObject::tr("alamat"));
    qModel-> setHeaderData(3,Qt::Horizontal,QObject::tr("jalan"));
     qModel-> setHeaderData(4,Qt::Horizontal,QObject::tr("provinsi"));
    ui->tableView->setModel(qModel);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,300);
    ui->tableView->setColumnWidth(2,100);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->show();


}

uidataprofil::~uidataprofil()
{
    delete ui;
}

void uidataprofil::on_pushButton_clicked()
{
    if (ui->editid->text().isEmpty()) {
        QMessageBox::information(this,"Warning","id Belum diisi");
        ui->editid->setFocus();
    } else if (ui->editnama->text().isEmpty()) {
        QMessageBox::information(this,"Warning","nama Belum diisi");
        ui->editnama->setFocus();
    } else if (ui->editalamat->text().isEmpty()) {
        QMessageBox::information(this,"Warning","alamat Belum diisi");
        ui->editalamat->setFocus();
    } else if (ui->editjalan->text().isEmpty()) {
        QMessageBox::information(this,"Warning","jalan Belum diisi");
        ui->editjalan->setFocus();
    } else if (ui->editprov->text().isEmpty()) {
        QMessageBox::information(this,"Warning","provinsi Belum diisi");
        ui->editprov->setFocus();

 } else {

        QSqlQuery duplikat;

        duplikat.prepare("SELECT*FROM uidataprofil WHERE id='"+ui->editid->text()+"'");
        duplikat.exec();
        if (duplikat.next()){
            QMessageBox::information(this,"WARNING","id ini Sudah terdaftar");
            ui->editid->setText(duplikat.value(0).toString());
            ui->editnama->setText(duplikat.value(1).toString());
            ui->editalamat->setText(duplikat.value(2).toString());
            ui->editjalan->setText(duplikat.value(3).toString());
            ui->editprov->setText(duplikat.value(4).toString());

        } else {
    QSqlQuery perintah;
    perintah.prepare("INSERT INTO data_profil (id, nama, alamat, jalan, provinsi) VALUES (:pid, :pnama, :palamat, :pjalan, :pprov)");

    perintah.bindValue(":pid",ui->editid->text());
    perintah.bindValue(":pnama",ui->editnama->text());
    perintah.bindValue(":palamat",ui->editalamat->text());
    perintah.bindValue(":pjalan",ui->editjalan->text());
    perintah.bindValue(":pprov",ui->editprov->text());
    perintah.exec();

    qModel = new QSqlQueryModel(this);
    qModel->setQuery("SELECT * FROM data_profil");
    qModel-> setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    qModel-> setHeaderData(1,Qt::Horizontal,QObject::tr("nama"));
    qModel-> setHeaderData(2,Qt::Horizontal,QObject::tr("alamat"));
    qModel-> setHeaderData(3,Qt::Horizontal,QObject::tr("jalan"));
    qModel-> setHeaderData(4,Qt::Horizontal,QObject::tr("provinsi"));
    ui->tableView->setModel(qModel);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,300);
    ui->tableView->setColumnWidth(2,100);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->show();
}
}
}
void uidataprofil::on_pushButton_2_clicked()
{
    if (ui->editid->text().isEmpty() || ui->editnama->text().isEmpty() || ui->editalamat->text().isEmpty() || ui->editjalan->text().isEmpty() || ui->editprov->text().isEmpty()){
            QMessageBox::information(this,"Warning", "silahkan isi data yang kosong");
        } else {
    QSqlQuery edit;
    edit.prepare("UPDATE data_profil SET nama = :pnama, alamat = :palamat, jalan = :pjalan, provinsi = :pprov WHERE id = :pid");
    edit.bindValue(":pid",ui->editid->text());
    edit.bindValue(":pnama",ui->editnama->text());
    edit.bindValue(":palamat",ui->editalamat->text());
    edit.bindValue(":pjalan",ui->editjalan->text());
    edit.bindValue(":pprov",ui->editprov->text());
    edit.exec();

    qModel = new QSqlQueryModel(this);
    qModel->setQuery("SELECT * FROM data_profil");
    qModel-> setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    qModel-> setHeaderData(1,Qt::Horizontal,QObject::tr("nama"));
    qModel-> setHeaderData(2,Qt::Horizontal,QObject::tr("alamat"));
    qModel-> setHeaderData(3,Qt::Horizontal,QObject::tr("jalan"));
    qModel-> setHeaderData(4,Qt::Horizontal,QObject::tr("provinsi"));
    ui->tableView->setModel(qModel);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,300);
    ui->tableView->setColumnWidth(2,100);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->show();
}
}


void uidataprofil::on_pushButton_3_clicked()
{
    if (ui->editid->text().isEmpty() || ui->editnama->text().isEmpty() || ui->editalamat->text().isEmpty() || ui->editjalan->text().isEmpty() || ui->editprov->text().isEmpty()){
        QMessageBox::information(this,"Warning", "pilih data yang dihapus");
    } else {

 QSqlQuery hapus;
     hapus.prepare("DELETE FROM data_profil WHERE id = :pid");
     hapus.bindValue(":pid",ui->editid->text());
     hapus.exec();
    qModel = new QSqlQueryModel(this);
    qModel->setQuery("SELECT * FROM data_profil");
    qModel-> setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    qModel-> setHeaderData(1,Qt::Horizontal,QObject::tr("nama"));
    qModel-> setHeaderData(2,Qt::Horizontal,QObject::tr("alamat"));
    qModel-> setHeaderData(3,Qt::Horizontal,QObject::tr("jalan"));
    qModel-> setHeaderData(4,Qt::Horizontal,QObject::tr("provinsi"));
    ui->tableView->setModel(qModel);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,300);
    ui->tableView->setColumnWidth(2,100);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->show();
}
}

void uidataprofil::on_pushButton_4_clicked()
{
    ui->editid->setText("");
    ui->editnama->setText("");
    ui->editalamat->setText("");
    ui->editjalan->setText("");
    ui->editprov->setText("");

}


void uidataprofil::on_editcari_cursorPositionChanged(int arg1, int arg2)
{
    qModel = new QSqlQueryModel(this);
    qModel->setQuery("SELECT * FROM data_profil WHERE nama LIKE '%"+ui->editcari->text()+"%'");
    qModel-> setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    qModel-> setHeaderData(1,Qt::Horizontal,QObject::tr("nama"));
    qModel-> setHeaderData(2,Qt::Horizontal,QObject::tr("alamat"));
    qModel-> setHeaderData(3,Qt::Horizontal,QObject::tr("jalan"));
    qModel-> setHeaderData(4,Qt::Horizontal,QObject::tr("provinsi"));
    ui->tableView->setModel(qModel);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,300);
    ui->tableView->setColumnWidth(2,100);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->show();
}

