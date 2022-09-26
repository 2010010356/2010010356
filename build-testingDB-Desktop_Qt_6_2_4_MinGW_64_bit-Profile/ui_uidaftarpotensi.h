/********************************************************************************
** Form generated from reading UI file 'uidaftarpotensi.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIDAFTARPOTENSI_H
#define UI_UIDAFTARPOTENSI_H

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

class Ui_uidaftarpotensi
{
public:
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *iddaftar;
    QLineEdit *editid;
    QLabel *komoditiLabel;
    QLineEdit *editnama;
    QLabel *tbmLabel;
    QLineEdit *editalamat;
    QLineEdit *editjalan;
    QLabel *trLabel;
    QLineEdit *editprov;
    QLabel *tmLabel;
    QLabel *tahunLabel;
    QLineEdit *tahunLineEdit;
    QLabel *semesterLabel;
    QLineEdit *semesterLineEdit;
    QLabel *provinsiLabel2;
    QLineEdit *provinsiLineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;

    void setupUi(QDialog *uidaftarpotensi)
    {
        if (uidaftarpotensi->objectName().isEmpty())
            uidaftarpotensi->setObjectName(QString::fromUtf8("uidaftarpotensi"));
        uidaftarpotensi->resize(641, 478);
        tableView = new QTableView(uidaftarpotensi);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 320, 631, 241));
        formLayoutWidget = new QWidget(uidaftarpotensi);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 611, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        iddaftar = new QLabel(formLayoutWidget);
        iddaftar->setObjectName(QString::fromUtf8("iddaftar"));

        formLayout->setWidget(0, QFormLayout::LabelRole, iddaftar);

        editid = new QLineEdit(formLayoutWidget);
        editid->setObjectName(QString::fromUtf8("editid"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editid);

        komoditiLabel = new QLabel(formLayoutWidget);
        komoditiLabel->setObjectName(QString::fromUtf8("komoditiLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, komoditiLabel);

        editnama = new QLineEdit(formLayoutWidget);
        editnama->setObjectName(QString::fromUtf8("editnama"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editnama);

        tbmLabel = new QLabel(formLayoutWidget);
        tbmLabel->setObjectName(QString::fromUtf8("tbmLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, tbmLabel);

        editalamat = new QLineEdit(formLayoutWidget);
        editalamat->setObjectName(QString::fromUtf8("editalamat"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editalamat);

        editjalan = new QLineEdit(formLayoutWidget);
        editjalan->setObjectName(QString::fromUtf8("editjalan"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editjalan);

        trLabel = new QLabel(formLayoutWidget);
        trLabel->setObjectName(QString::fromUtf8("trLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, trLabel);

        editprov = new QLineEdit(formLayoutWidget);
        editprov->setObjectName(QString::fromUtf8("editprov"));

        formLayout->setWidget(4, QFormLayout::FieldRole, editprov);

        tmLabel = new QLabel(formLayoutWidget);
        tmLabel->setObjectName(QString::fromUtf8("tmLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, tmLabel);

        tahunLabel = new QLabel(formLayoutWidget);
        tahunLabel->setObjectName(QString::fromUtf8("tahunLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, tahunLabel);

        tahunLineEdit = new QLineEdit(formLayoutWidget);
        tahunLineEdit->setObjectName(QString::fromUtf8("tahunLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, tahunLineEdit);

        semesterLabel = new QLabel(formLayoutWidget);
        semesterLabel->setObjectName(QString::fromUtf8("semesterLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, semesterLabel);

        semesterLineEdit = new QLineEdit(formLayoutWidget);
        semesterLineEdit->setObjectName(QString::fromUtf8("semesterLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, semesterLineEdit);

        provinsiLabel2 = new QLabel(formLayoutWidget);
        provinsiLabel2->setObjectName(QString::fromUtf8("provinsiLabel2"));

        formLayout->setWidget(7, QFormLayout::LabelRole, provinsiLabel2);

        provinsiLineEdit = new QLineEdit(formLayoutWidget);
        provinsiLineEdit->setObjectName(QString::fromUtf8("provinsiLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, provinsiLineEdit);

        pushButton_2 = new QPushButton(uidaftarpotensi);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 260, 93, 29));
        pushButton = new QPushButton(uidaftarpotensi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 260, 93, 29));
        pushButton_3 = new QPushButton(uidaftarpotensi);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 260, 93, 29));
        lineEdit = new QLineEdit(uidaftarpotensi);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(500, 270, 113, 22));
        pushButton_4 = new QPushButton(uidaftarpotensi);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 260, 75, 24));

        retranslateUi(uidaftarpotensi);

        QMetaObject::connectSlotsByName(uidaftarpotensi);
    } // setupUi

    void retranslateUi(QDialog *uidaftarpotensi)
    {
        uidaftarpotensi->setWindowTitle(QCoreApplication::translate("uidaftarpotensi", "Dialog", nullptr));
        iddaftar->setText(QCoreApplication::translate("uidaftarpotensi", "id", nullptr));
        komoditiLabel->setText(QCoreApplication::translate("uidaftarpotensi", "komoditi", nullptr));
        tbmLabel->setText(QCoreApplication::translate("uidaftarpotensi", "tbm", nullptr));
        trLabel->setText(QCoreApplication::translate("uidaftarpotensi", "tr_ttm", nullptr));
        tmLabel->setText(QCoreApplication::translate("uidaftarpotensi", "tm", nullptr));
        tahunLabel->setText(QCoreApplication::translate("uidaftarpotensi", "tahun", nullptr));
        semesterLabel->setText(QCoreApplication::translate("uidaftarpotensi", "semester", nullptr));
        provinsiLabel2->setText(QCoreApplication::translate("uidaftarpotensi", "provinsi", nullptr));
        pushButton_2->setText(QCoreApplication::translate("uidaftarpotensi", "edit", nullptr));
        pushButton->setText(QCoreApplication::translate("uidaftarpotensi", "simpan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("uidaftarpotensi", "hapus", nullptr));
        pushButton_4->setText(QCoreApplication::translate("uidaftarpotensi", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uidaftarpotensi: public Ui_uidaftarpotensi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIDAFTARPOTENSI_H
