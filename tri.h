#ifndef TRI_H
#define TRI_H
#include "accuse.h"
#include <QDialog>

namespace Ui {
class tri;
}

class tri : public QDialog
{
    Q_OBJECT

public:
    explicit tri(QWidget *parent = nullptr);
    ~tri();

private:
    Ui::tri *ui;
    Accuse A;
};

#endif 
