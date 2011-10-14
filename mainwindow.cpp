#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dialogabout.h"
#include <QMessageBox>
#include <QCloseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); // Deve ser chamada antes de conectar as Actions!!!
    setupActions();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupActions()
{
    connect( ui->actionSobre_o_Qt,SIGNAL(triggered()), qApp,SLOT(aboutQt()) );
    connect( ui->actionSobre_o_App, SIGNAL(triggered()), this, SLOT(showAboutDialog()));
}

void MainWindow::showAboutDialog()
{
    DialogAbout about(this);
    about.exec();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(okToContinue())
    {
        event->accept();
    }
    else
    {
        event->ignore();
    }
}

bool MainWindow::okToContinue()
{
    int r = QMessageBox::warning(this,"Programinha Mixuruca", "Tem certeza que quer sair?", QMessageBox::Yes | QMessageBox::No);
    if (r == QMessageBox::Yes)
        return true;
    return false;
}
