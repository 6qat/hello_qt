#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void closeEvent(QCloseEvent *);

private:
    Ui::MainWindow *ui;
    void setupActions();
    bool okToContinue();

private slots:
    void showAboutDialog();

};

#endif // MAINWINDOW_H
