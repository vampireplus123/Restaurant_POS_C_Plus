#include "orderpage.h"
#include "ui_orderpage.h"

OrderPage::OrderPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OrderPage)
{
    ui->setupUi(this);
}

OrderPage::~OrderPage()
{
    delete ui;
}
