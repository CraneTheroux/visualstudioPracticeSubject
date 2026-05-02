#ifndef WIDGET_H
#define WIDGET_H
#include<QProcess>
#include <QWidget>
#include<QLineEdit>
#include<QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget() override;

private slots:


private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
