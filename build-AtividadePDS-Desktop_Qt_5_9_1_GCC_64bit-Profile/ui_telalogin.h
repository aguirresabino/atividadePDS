/********************************************************************************
** Form generated from reading UI file 'telalogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALOGIN_H
#define UI_TELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaLogin
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *campoEmail;
    QLabel *label_3;
    QLineEdit *campoSenha;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TelaLogin)
    {
        if (TelaLogin->objectName().isEmpty())
            TelaLogin->setObjectName(QStringLiteral("TelaLogin"));
        TelaLogin->setWindowModality(Qt::WindowModal);
        TelaLogin->resize(338, 337);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(40);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TelaLogin->sizePolicy().hasHeightForWidth());
        TelaLogin->setSizePolicy(sizePolicy);
        TelaLogin->setMinimumSize(QSize(338, 337));
        TelaLogin->setMaximumSize(QSize(338, 337));
        centralWidget = new QWidget(TelaLogin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        campoEmail = new QLineEdit(centralWidget);
        campoEmail->setObjectName(QStringLiteral("campoEmail"));

        verticalLayout->addWidget(campoEmail);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        campoSenha = new QLineEdit(centralWidget);
        campoSenha->setObjectName(QStringLiteral("campoSenha"));
        campoSenha->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(campoSenha);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(320, 25));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        TelaLogin->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TelaLogin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TelaLogin->setStatusBar(statusBar);

        retranslateUi(TelaLogin);

        QMetaObject::connectSlotsByName(TelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *TelaLogin)
    {
        TelaLogin->setWindowTitle(QApplication::translate("TelaLogin", "TelaLogin", Q_NULLPTR));
        label->setText(QApplication::translate("TelaLogin", "Login", Q_NULLPTR));
        label_2->setText(QApplication::translate("TelaLogin", "Email:", Q_NULLPTR));
        label_3->setText(QApplication::translate("TelaLogin", "Senha:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        campoSenha->setToolTip(QApplication::translate("TelaLogin", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        campoSenha->setWhatsThis(QApplication::translate("TelaLogin", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButton_2->setText(QApplication::translate("TelaLogin", "Entrar", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TelaLogin", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TelaLogin: public Ui_TelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGIN_H
