#include "uidatatempat.h"
#include "ui_uidatatempat.h"
#include <QMessageBox>

uidatatempat::uidatatempat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uidatatempat)
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
    qModel->setQuery("SELECT * FROM data_tempat");
    qModel-> setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    qModel-> setHeaderData(1,Qt::Horizontal,QObject::tr("kecamatan"));
    qModel-> setHeaderData(2,Qt::Horizontal,QObject::tr("tbm"));
    qModel-> setHeaderData(3,Qt::Horizontal,QObject::tr("tm"));
    qModel-> setHeaderData(4,Qt::Horizontal,QObject::tr("tr_ttm"));
    qModel-> setHeaderData(5,Qt::Horizontal,QObject::tr("tahun"));
    qModel-> setHeaderData(6,Qt::Horizontal,QObject::tr("semester"));
    qModel-> setHeaderData(7,Qt::Horizontal,QObject::tr("provinsi"));
    ui->tableView->setModel(qModel);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,300);
    ui->tableView->setColumnWidth(2,100);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->setColumnWidth(4,200);
    ui->tableView->setColumnWidth(5,200);
    ui->tableView->setColumnWidth(6,200);
    ui->tableView->setColumnWidth(7,200);
    ui->tableView->show();

}

uidatatempat::~uidatatempat()
{
    delete ui;
}

void uidatatempat::on_pushButton_clicked()
{
    if (ui->editid->text().isEmpty()) {
        QMessageBox::information(this,"Warning","id Belum diisi");
        ui->editid->setFocus();
    } else if (ui->editnama->text().isEmpty()) {
        QMessageBox::information(this,"Warning","kecamatan Belum diisi");
        ui->editnama->setFocus();
    } else if (ui->editalamat->text().isEmpty()) {
        QMessageBox::information(this,"Warning","tbm Belum diisi");
        ui->editalamat->setFocus();
    } else if (ui->editjalan->text().isEmpty()) {
        QMessageBox::information(this,"Warning","tm Belum diisi");
        ui->editjalan->setFocus();
    } else if (ui->editprov->text().isEmpty()) {
        QMessageBox::information(this,"Warning","tr_ttm Belum diisi");
        ui->editprov->setFocus();
    } else if (ui->tahunLineEdit->text().isEmpty()) {
        QMessageBox::information(this,"Warning","tahun Belum diisi");
        ui->tahunLineEdit->setFocus();
    } else if (ui->semesterLineEdit->text().isEmpty()) {
                    QMessageBox::information(this,"Warning","semester Belum diisi");
                    ui->semesterLineEdit->setFocus();
    } else if (ui->provinsiLineEdit->text().isEmpty()) {
                    QMessageBox::information(this,"Warning","provinsi Belum diisi");
                    ui->provinsiLineEdit->setFocus();
    } else {

        QSqlQuery duplikat;

        duplikat.prepare("SELECT*FROM uidatatempat WHERE id='"+ui->editid->text()+"'");
        duplikat.exec();
        if (duplikat.next()){
            QMessageBox::information(this,"WARNING","KODE ini Sudah terdaftar");
            ui->editid->setText(duplikat.value(0).toString());
            ui->editnama->setText(duplikat.value(1).toString());
            ui->editalamat->setText(duplikat.value(2).toString());
            ui->editjalan->setText(duplikat.value(3).toString());
            ui->editprov->setText(duplikat.value(4).toString());
            ui->tahunLineEdit->setText(duplikat.value(5).toString());
            ui->semesterLineEdit->setText(duplikat.value(6).toString());
            ui->provinsiLineEdit->setText(duplikat.value(7).toString());
        } else {

    QSqlQuery perintah;
    perintah.prepare("INSERT INTO data_tempat (id, kecamatan, tbm, tm, tr_ttm, tahun, semester, provinsi) VALUES (:pid, :pkecamatan, :ptbm, :ptm, :ptr_ttm, :ptahun, :psemester, :pprovinnsi)");

    perintah.bindValue(":pid",ui->editid->text());
    perintah.bindValue(":pkecamatan",ui->editnama->text());
    perintah.bindValue(":ptbm",ui->editalamat->text());
    perintah.bindValue(":ptm",ui->editjalan->text());
    perintah.bindValue(":ptr_ttm",ui->editprov->text());
    perintah.bindValue(":ptahun",ui->tahunLineEdit->text());
    perintah.bindValue(":psemester",ui->semesterLineEdit->text());
    perintah.bindValue(":pprovinsi",ui->provinsiLineEdit->text());
    perintah.exec();

    qModel = new QSqlQueryModel(this);
    qModel->setQuery("SELECT * FROM data_tempat");
    qModel-> setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    qModel-> setHeaderData(1,Qt::Horizontal,QObject::tr("kecamatan"));
    qModel-> setHeaderData(2,Qt::Horizontal,QObject::tr("tbm"));
    qModel-> setHeaderData(3,Qt::Horizontal,QObject::tr("tm"));
    qModel-> setHeaderData(4,Qt::Horizontal,QObject::tr("tr_ttm"));
    qModel-> setHeaderData(5,Qt::Horizontal,QObject::tr("tahun"));
    qModel-> setHeaderData(6,Qt::Horizontal,QObject::tr("semester"));
    qModel-> setHeaderData(7,Qt::Horizontal,QObject::tr("provinsi"));
    ui->tableView->setModel(qModel);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,300);
    ui->tableView->setColumnWidth(2,100);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->setColumnWidth(4,200);
    ui->tableView->setColumnWidth(5,200);
    ui->tableView->setColumnWidth(6,200);
    ui->tableView->setColumnWidth(7,200);
    ui->tableView->show();
}
}
}



void uidatatempat::on_pushButton_2_clicked()
{
    if (ui->editid->text().isEmpty() || ui->editnama->text().isEmpty() || ui->editalamat->text().isEmpty() || ui->editjalan->text().isEmpty() || ui->editprov->text().isEmpty() || ui->tahunLineEdit->text().isEmpty() ||  ui->semesterLineEdit->text().isEmpty() || ui->provinsiLineEdit->text().isEmpty()){
            QMessageBox::information(this,"Warning", "silahkan isi data yang kosong");
        } else {
    QSqlQuery edit;
    edit.prepare("UPDATE data_tempat SET kecamatan = :pkecamatan, tbm = :ptbm, tm = :ptm, tr_ttm = :ptr_ttm, tahun = :ptahun, semester = :psemester, provinsi = :pprovinsi WHERE id = :pid");

    edit.bindValue(":pid",ui->editid->text());
    edit.bindValue(":pkecamatan",ui->editnama->text());
    edit.bindValue(":ptbm",ui->editalamat->text());
    edit.bindValue(":ptm",ui->editjalan->text());
    edit.bindValue(":ptr_ttm",ui->editprov->text());
    edit.bindValue(":ptahun",ui->tahunLineEdit->text());
    edit.bindValue(":psemester",ui->semesterLineEdit->text());
    edit.bindValue(":pprovinsi",ui->provinsiLineEdit->text());
    edit.exec();

    qModel = new QSqlQueryModel(this);
    qModel->setQuery("SELECT * FROM data_tempat");
    qModel-> setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    qModel-> setHeaderData(1,Qt::Horizontal,QObject::tr("kecamatan"));
    qModel-> setHeaderData(2,Qt::Horizontal,QObject::tr("tbm"));
    qModel-> setHeaderData(3,Qt::Horizontal,QObject::tr("tm"));
    qModel-> setHeaderData(4,Qt::Horizontal,QObject::tr("tr_ttm"));
    qModel-> setHeaderData(5,Qt::Horizontal,QObject::tr("tahun"));
    qModel-> setHeaderData(6,Qt::Horizontal,QObject::tr("semester"));
    qModel-> setHeaderData(7,Qt::Horizontal,QObject::tr("provinsi"));
    ui->tableView->setModel(qModel);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,300);
    ui->tableView->setColumnWidth(2,100);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->setColumnWidth(4,200);
    ui->tableView->setColumnWidth(5,200);
    ui->tableView->setColumnWidth(6,200);
    ui->tableView->setColumnWidth(7,200);
    ui->tableView->show();
}
}

void uidatatempat::on_pushButton_3_clicked()
{
    if (ui->editid->text().isEmpty() || ui->editnama->text().isEmpty() || ui->editalamat->text().isEmpty() || ui->editjalan->text().isEmpty() || ui->editprov->text().isEmpty() || ui->tahunLineEdit->text().isEmpty() ||  ui->semesterLineEdit->text().isEmpty() || ui->provinsiLineEdit->text().isEmpty()){
            QMessageBox::information(this,"Warning", "pilih data yang dihapus");
    QSqlQuery hapus;
         hapus.prepare("DELETE FROM data_tempat WHERE id = :pid");
         hapus.bindValue(":pid",ui->editid->text());
         hapus.exec();
         qModel = new QSqlQueryModel(this);
         qModel->setQuery("SELECT * FROM data_tempat");
         qModel-> setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
         qModel-> setHeaderData(1,Qt::Horizontal,QObject::tr("kecamatan"));
         qModel-> setHeaderData(2,Qt::Horizontal,QObject::tr("tbm"));
         qModel-> setHeaderData(3,Qt::Horizontal,QObject::tr("tm"));
         qModel-> setHeaderData(4,Qt::Horizontal,QObject::tr("tr_ttm"));
         qModel-> setHeaderData(5,Qt::Horizontal,QObject::tr("tahun"));
         qModel-> setHeaderData(6,Qt::Horizontal,QObject::tr("semester"));
         qModel-> setHeaderData(7,Qt::Horizontal,QObject::tr("provinsi"));
         ui->tableView->setModel(qModel);
         ui->tableView->setColumnWidth(0,100);
         ui->tableView->setColumnWidth(1,300);
         ui->tableView->setColumnWidth(2,100);
         ui->tableView->setColumnWidth(3,200);
         ui->tableView->setColumnWidth(4,200);
         ui->tableView->setColumnWidth(5,200);
         ui->tableView->setColumnWidth(6,200);
         ui->tableView->setColumnWidth(7,200);
         ui->tableView->show();
}
}

void uidatatempat::on_pushButton_4_clicked()
{
    ui->editid->setText("");
    ui->editnama->setText("");
    ui->editalamat->setText("");
    ui->editjalan->setText("");
    ui->editprov->setText("");
    ui->tahunLineEdit->setText("");
    ui->semesterLineEdit->setText("");
    ui->provinsiLineEdit->setText("");
}


void uidatatempat::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    qModel = new QSqlQueryModel(this);
     qModel->setQuery("SELECT * FROM data_tempat WHERE nama LIKE '%"+ui->lineEdit->text()+"%'");
    qModel-> setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    qModel-> setHeaderData(1,Qt::Horizontal,QObject::tr("kecamatan"));
    qModel-> setHeaderData(2,Qt::Horizontal,QObject::tr("tbm"));
    qModel-> setHeaderData(3,Qt::Horizontal,QObject::tr("tm"));
    qModel-> setHeaderData(4,Qt::Horizontal,QObject::tr("tr_ttm"));
    qModel-> setHeaderData(5,Qt::Horizontal,QObject::tr("tahun"));
    qModel-> setHeaderData(6,Qt::Horizontal,QObject::tr("semester"));
    qModel-> setHeaderData(7,Qt::Horizontal,QObject::tr("provinsi"));
    ui->tableView->setModel(qModel);
    ui->tableView->setColumnWidth(0,100);
    ui->tableView->setColumnWidth(1,300);
    ui->tableView->setColumnWidth(2,100);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->setColumnWidth(4,200);
    ui->tableView->setColumnWidth(5,200);
    ui->tableView->setColumnWidth(6,200);
    ui->tableView->setColumnWidth(7,200);
    ui->tableView->show();
}

