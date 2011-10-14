#include <QtGui/QApplication>
#include "mainwindow.h"

#include <QSplashScreen>
#include <QThread>

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

    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":imagens/splash-screen.jpg"));
    splash->show();
    I::sleep(3);

    MainWindow w;
    w.show();
    splash->finish(&w);
    delete splash;

    return a.exec();
}
