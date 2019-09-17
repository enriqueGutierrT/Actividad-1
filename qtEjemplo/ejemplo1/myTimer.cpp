#include "myTimer.h"

myTimer::~myTimer(){}

void myTimer::startTimer(){
    QThread *timer = new QThread(this);
    timer->start();
}

void myTimer::stopTimer(){
    timer->terminate();
}

void myTimer::setTime(int seg){
    
}