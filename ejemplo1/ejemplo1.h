#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include "ui_counterDlg.h"
#include <QTimer>

class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT
public:
    ejemplo1();
    QTimer *timer=new QTimer(this);
    int x=0;
    virtual ~ejemplo1();
    
public slots:
	void doButton();
    void StartButton();
    void StopButton();
};

#endif // ejemplo1_H
