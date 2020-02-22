#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    double a=ui->lineEdit->text().toDouble();
    double b=ui->lineEdit_2->text().toDouble();
    double c=ui->lineEdit_3->text().toDouble();
    if(c<a+b&&a<b+c&&b<c+a){
        double p=(a+b+c)/2;
        double s=sqrt(p*(p-a)*(p-b)*(p-c));
        ui->label_6->setText(QString::number(p*2,'g',15));
        ui->label_7->setText(QString::number(s,'g',15));
    }else{
        ui->label_6->setText("Треугольник не сошёлся.");
        ui->label_7->setText("Площадь мнимая.");
    }
}
