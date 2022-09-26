/********************************************************************************
** Form generated from reading UI file 'uidatatempat.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIDATATEMPAT_H
#define UI_UIDATATEMPAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uidatatempat
{
public:
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idtempat;
    QLineEdit *editid;
    QLineEdit *editnama;
    QLabel *tbm;
    QLineEdit *editalamat;
    QLabel *tm;
    QLineEdit *editjalan;
    QLineEdit *editprov;
    QLabel *kecamatan;
    QLabel *tr;
    QLabel *tahun;
    QLineEdit *tahunLineEdit;
    QLabel *semester;
    QLineEdit *semesterLineEdit;
    QLabel *provinsi;
    QLineEdit *provinsiLineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;

    void setupUi(QDialog *uidatatempat)
    {
        if (uidatatempat->objectName().isEmpty())
            uidatatempat->setObjectName(QString::fromUtf8("uidatatempat"));
        uidatatempat->resize(647, 459);
        tableView = new QTableView(uidatatempat);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 320, 621, 231));
        formLayoutWidget = new QWidget(uidatatempat);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 0, 601, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        idtempat = new QLabel(formLayoutWidget);
        idtempat->setObjectName(QString::fromUtf8("idtempat"));

        formLayout->setWidget(0, QFormLayout::LabelRole, idtempat);

        editid = new QLineEdit(formLayoutWidget);
        editid->setObjectName(QString::fromUtf8("editid"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editid);

        editnama = new QLineEdit(formLayoutWidget);
        editnama->setObjectName(QString::fromUtf8("editnama"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editnama);

        tbm = new QLabel(formLayoutWidget);
        tbm->setObjectName(QString::fromUtf8("tbm"));

        formLayout->setWidget(2, QFormLayout::LabelRole, tbm);

        editalamat = new QLineEdit(formLayoutWidget);
        editalamat->setObjectName(QString::fromUtf8("editalamat"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editalamat);

        tm = new QLabel(formLayoutWidget);
        tm->setObjectName(QString::fromUtf8("tm"));

        formLayout->setWidget(3, QFormLayout::LabelRole, tm);

        editjalan = new QLineEdit(formLayoutWidget);
        editjalan->setObjectName(QString::fromUtf8("editjalan"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editjalan);

        editprov = new QLineEdit(formLayoutWidget);
        editprov->setObjectName(QString::fromUtf8("editprov"));

        formLayout->setWidget(4, QFormLayout::FieldRole, editprov);

        kecamatan = new QLabel(formLayoutWidget);
        kecamatan->setObjectName(QString::fromUtf8("kecamatan"));

        formLayout->setWidget(1, QFormLayout::LabelRole, kecamatan);

        tr = new QLabel(formLayoutWidget);
        tr->setObjectName(QString::fromUtf8("tr"));

        formLayout->setWidget(4, QFormLayout::LabelRole, tr);

        tahun = new QLabel(formLayoutWidget);
        tahun->setObjectName(QString::fromUtf8("tahun"));

        formLayout->setWidget(5, QFormLayout::LabelRole, tahun);

        tahunLineEdit = new QLineEdit(formLayoutWidget);
        tahunLineEdit->setObjectName(QString::fromUtf8("tahunLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, tahunLineEdit);

        semester = new QLabel(formLayoutWidget);
        semester->setObjectName(QString::fromUtf8("semester"));

        formLayout->setWidget(6, QFormLayout::LabelRole, semester);

        semesterLineEdit = new QLineEdit(formLayoutWidget);
        semesterLineEdit->setObjectName(QString::fromUtf8("semesterLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, semesterLineEdit);

        provinsi = new QLabel(formLayoutWidget);
        provinsi->setObjectName(QString::fromUtf8("provinsi"));

        formLayout->setWidget(7, QFormLayout::LabelRole, provinsi);

        provinsiLineEdit = new QLineEdit(formLayoutWidget);
        provinsiLineEdit->setObjectName(QString::fromUtf8("provinsiLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, provinsiLineEdit);

        pushButton_2 = new QPushButton(uidatatempat);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 250, 93, 29));
        pushButton = new QPushButton(uidatatempat);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 250, 93, 29));
        pushButton_3 = new QPushButton(uidatatempat);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 250, 93, 29));
        pushButton_4 = new QPushButton(uidatatempat);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 250, 75, 24));
        lineEdit = new QLineEdit(uidatatempat);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(480, 250, 113, 22));

        retranslateUi(uidatatempat);

        QMetaObject::connectSlotsByName(uidatatempat);
    } // setupUi

    void retranslateUi(QDialog *uidatatempat)
    {
        uidatatempat->setWindowTitle(QCoreApplication::translate("uidatatempat", "Dialog", nullptr));
        idtempat->setText(QCoreApplication::translate("uidatatempat", "id", nullptr));
        tbm->setText(QCoreApplication::translate("uidatatempat", "tbm", nullptr));
        tm->setText(QCoreApplication::translate("uidatatempat", "tm", nullptr));
        kecamatan->setText(QCoreApplication::translate("uidatatempat", "kecamatan", nullptr));
        tr->setText(QCoreApplication::translate("uidatatempat", "tr_ttm", nullptr));
        tahun->setText(QCoreApplication::translate("uidatatempat", "tahun", nullptr));
        semester->setText(QCoreApplication::translate("uidatatempat", "semester", nullptr));
        provinsi->setText(QCoreApplication::translate("uidatatempat", "provinsi", nullptr));
        pushButton_2->setText(QCoreApplication::translate("uidatatempat", "edit", nullptr));
        pushButton->setText(QCoreApplication::translate("uidatatempat", "simpan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("uidatatempat", "hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("uidatatempat", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uidatatempat: public Ui_uidatatempat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIDATATEMPAT_H
