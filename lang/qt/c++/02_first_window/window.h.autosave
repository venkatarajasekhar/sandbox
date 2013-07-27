#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;                  // QPushButton is a class defined someother place!
class QVBoxLayout;                  // Another class defined some other place!

class Window : public QWidget
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = 0);

private:
    int a_counter;
    QPushButton *a_button;
    QPushButton *b_button;
    QVBoxLayout *mainLayout;

signals:
    void counterReached();

public slots:

private slots:
    void slotButtonClicked(bool checked);

};

#endif // WINDOW_H
