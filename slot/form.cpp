#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}
//обработчик функции из слота который принимает сигнал и выводит на экран
void Form::slot(QString a)
{
    ui->label->setText(a);
}

