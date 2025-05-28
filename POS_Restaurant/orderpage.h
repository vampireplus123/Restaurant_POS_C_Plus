#ifndef ORDERPAGE_H
#define ORDERPAGE_H

#include <QMainWindow>

namespace Ui {
class OrderPage;
}

class OrderPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit OrderPage(QWidget *parent = nullptr);
    ~OrderPage();

private:
    Ui::OrderPage *ui;
};

#endif // ORDERPAGE_H
