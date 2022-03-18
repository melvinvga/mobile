#include "connexion.h"
#include "ui_connexion.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
}

Connexion::~Connexion()
{
    delete ui;
}
