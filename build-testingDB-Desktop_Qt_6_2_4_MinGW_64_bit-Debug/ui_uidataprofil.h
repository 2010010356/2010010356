/********************************************************************************
** Form generated from reading UI file 'uidataprofil.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIDATAPROFIL_H
#define UI_UIDATAPROFIL_H

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

class Ui_uidataprofil
{
public:
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idLabel;
    QLineEdit *editid;
    QLabel *namaLabel;
    QLineEdit *editnama;
    QLabel *alamatLabel;
    QLineEdit *editalamat;
    QLabel *jalanLabel;
    QLineEdit *editjalan;
    QLabel *provinsiLabel;
    QLineEdit *editprov;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *editcari;

    void setupUi(QDialog *uidataprofil)
    {
        if (uidataprofil->objectName().isEmpty())
            uidataprofil->setObjectName(QString::fromUtf8("uidataprofil"));
        uidataprofil->resize(667, 696);
        tableView = new QTableView(uidataprofil);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 260, 631, 291));
        formLayoutWidget = new QWidget(uidataprofil);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 0, 611, 201));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        idLabel = new QLabel(formLayoutWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, idLabel);

        editid = new QLineEdit(formLayoutWidget);
        editid->setObjectName(QString::fromUtf8("editid"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editid);

        namaLabel = new QLabel(formLayoutWidget);
        namaLabel->setObjectName(QString::fromUtf8("namaLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, namaLabel);

        editnama = new QLineEdit(formLayoutWidget);
        editnama->setObjectName(QString::fromUtf8("editnama"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editnama);

        alamatLabel = new QLabel(formLayoutWidget);
        alamatLabel->setObjectName(QString::fromUtf8("alamatLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, alamatLabel);

        editalamat = new QLineEdit(formLayoutWidget);
        editalamat->setObjectName(QString::fromUtf8("editalamat"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editalamat);

        jalanLabel = new QLabel(formLayoutWidget);
        jalanLabel->setObjectName(QString::fromUtf8("jalanLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, jalanLabel);

        editjalan = new QLineEdit(formLayoutWidget);
        editjalan->setObjectName(QString::fromUtf8("editjalan"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editjalan);

        provinsiLabel = new QLabel(formLayoutWidget);
        provinsiLabel->setObjectName(QString::fromUtf8("provinsiLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, provinsiLabel);

        editprov = new QLineEdit(formLayoutWidget);
        editprov->setObjectName(QString::fromUtf8("editprov"));

        formLayout->setWidget(4, QFormLayout::FieldRole, editprov);

        pushButton_2 = new QPushButton(uidataprofil);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 210, 93, 29));
        pushButton = new QPushButton(uidataprofil);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 210, 93, 29));
        pushButton_3 = new QPushButton(uidataprofil);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 210, 93, 29));
        pushButton_4 = new QPushButton(uidataprofil);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 210, 75, 24));
        editcari = new QLineEdit(uidataprofil);
        editcari->setObjectName(QString::fromUtf8("editcari"));
        editcari->setGeometry(QRect(430, 210, 113, 22));

        retranslateUi(uidataprofil);

        QMetaObject::connectSlotsByName(uidataprofil);
    } // setupUi

    void retranslateUi(QDialog *uidataprofil)
    {
        uidataprofil->setWindowTitle(QCoreApplication::translate("uidataprofil", "Dialog", nullptr));
        idLabel->setText(QCoreApplication::translate("uidataprofil", "id", nullptr));
        namaLabel->setText(QCoreApplication::translate("uidataprofil", "nama", nullptr));
        alamatLabel->setText(QCoreApplication::translate("uidataprofil", "alamat", nullptr));
        jalanLabel->setText(QCoreApplication::translate("uidataprofil", "jalan", nullptr));
        provinsiLabel->setText(QCoreApplication::translate("uidataprofil", "provinsi", nullptr));
        pushButton_2->setText(QCoreApplication::translate("uidataprofil", "edit", nullptr));
        pushButton->setText(QCoreApplication::translate("uidataprofil", "simpan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("uidataprofil", "hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("uidataprofil", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uidataprofil: public Ui_uidataprofil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIDATAPROFIL_H
