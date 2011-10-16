#include <QtGui/QApplication>
#include "mainwindow.h"

#include <QSplashScreen>
#include <QThread>

#include <hellomodel.h>

class I : public QThread
{
    public:
        static void sleep(unsigned long secs)
        {
            QThread::sleep(secs);
        }
};

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    HelloModel modelo;
    QString soma;
    soma.setNum( modelo.soma_dinamica(2,5) );


    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":imagens/splash-screen.jpg"));
    Qt::Alignment topRight = Qt::AlignRight | Qt::AlignTop;
    splash->showMessage("Carregando o app ..." + soma, topRight, Qt::white);
    splash->show();

    I::sleep(3);

    MainWindow w;
    w.show();
    splash->finish(&w);
    delete splash;



    return a.exec();
}
