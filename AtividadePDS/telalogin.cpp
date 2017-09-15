#include "telalogin.h"
#include "ui_telalogin.h"
#include <pqxx/pqxx>
#include <iostream>
#include <string>
#include <dialog.h>

using namespace pqxx;
using namespace std;

TelaLogin::TelaLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TelaLogin)
{
    ui->setupUi(this);
}

TelaLogin::~TelaLogin()
{
    delete ui;
}

void TelaLogin::on_pushButton_2_clicked()
{
    Dialog dialog;
    dialog.setModal(true);

    string sql;

    try{
        connection conexao("dbname=AtividadePDS user=postgres password=102495 hostaddr=127.0.0.1 port=5432");
        if (!conexao.is_open()) {
            cerr << "Banco não foi acessado!" << endl;
            exit(0);
        }

        work transacao(conexao);

        string email(ui->campoEmail->text().toStdString());
        string senha(ui->campoSenha->text().toStdString());

        sql = "SELECT email, senha FROM usuario";


        result resultado(transacao.exec( sql ));

        const int linhas = resultado.size();
        for (int i=0; i < linhas; ++i)
        {
          const pqxx::tuple linha = resultado[i];
          if((linha[0].as<string>() == email) && linha[1].as<string>() == senha){
              dialog.exec();
          }
        }
        conexao.disconnect ();
    }catch (const std::exception &e){
        cerr << e.what() << std::endl;
    }
}

void TelaLogin::on_pushButton_clicked()
{
    exit(0);
}
