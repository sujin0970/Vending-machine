#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->coffee_button->setDisabled(true);
    ui->Tea_button->setDisabled(true);
    ui->Milk_button->setDisabled(true);
}

Widget::~Widget()
{
    delete ui;
}

int money =0;

void Widget::setTeeet()
{
   QString s = QString::number(money);
   ui->money_print->setPlainText(s);
   if(money<100){ui->coffee_button->setDisabled(true);ui->Tea_button->setDisabled(true);ui->Milk_button->setDisabled(true);}
   else if(money<150){ui->coffee_button->setEnabled(true);ui->Tea_button->setDisabled(true);ui->Milk_button->setDisabled(true);}
   else if(money<200){ui->coffee_button->setEnabled(true);ui->Tea_button->setEnabled(true);ui->Milk_button->setDisabled(true);}
   else {ui->coffee_button->setEnabled(true);ui->Tea_button->setEnabled(true);ui->Milk_button->setEnabled(true);}
}

void Widget::on_coffee_button_clicked()
{
    money -= 100;
    setTeeet();
}

void Widget::on_Tea_button_clicked()
{
    money -= 150;
    setTeeet();
}

void Widget::on_Milk_button_clicked()
{
    money -= 200;
    setTeeet();
}

void Widget::on__10_button_clicked()
{
    money += 10;
    setTeeet();
}

void Widget::on__50_button_clicked()
{
    money += 50;
    setTeeet();
}

void Widget::on__100_button_clicked()
{
    money += 100;
    setTeeet();
}

void Widget::on__500_button_clicked()
{
    money += 500;
    setTeeet();
}

void Widget::on_Reset_button_clicked()
{
    money = 0;
    setTeeet();
}
