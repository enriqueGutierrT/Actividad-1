#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include "ui_counterDlg.h"
#include "myTimer.h"

class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT
public:
    int cont = 0;
    myTimer *timer;
    ejemplo1();
    virtual ~ejemplo1();
    
public slots:
	void doButton();
    void increment();
    void stopButton();
};

#endif // ejemplo1_H
