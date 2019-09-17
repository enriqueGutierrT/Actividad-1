#ifndef myTimer_H
#define myTimer_H

#include <QThread>

class myTimer: public QThread{
    Q_OBJECT
    public:
        myTimer();
        virtual ~myTimer();
    public slots:
        void startTimer(){};
        void stopTimer(){};
        void setTime(int seg){};
};

#endif