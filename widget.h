#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void setTeeet();

private slots:
    void on_coffee_button_clicked();

    void on_Tea_button_clicked();

    void on_Milk_button_clicked();

    void on__10_button_clicked();

    void on__50_button_clicked();

    void on__100_button_clicked();

    void on__500_button_clicked();

    void on_Reset_button_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
