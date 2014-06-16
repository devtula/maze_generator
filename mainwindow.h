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
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

const int BMP_SIZE = 512, CELL_SIZE = 8;

//--------------------------------------------------------------------------------------------------
enum directions { NONE, NOR = 1, EAS = 2, SOU = 4, WES = 8 };


#endif // MAINWINDOW_H
