#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //создание формы
    form =new Form;
    form->show();
    //усонавливаем связь между signal и slot через объекты MainWindow и Form
    connect(this, &MainWindow::signal, form,&Form::slot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//обработчик событии при нажатии на кнопку
void MainWindow::on_pushButton_clicked()
{
    emit signal(ui->lineEdit->text());  //обращаемся к сигналу и выводи значение в Edit
}


