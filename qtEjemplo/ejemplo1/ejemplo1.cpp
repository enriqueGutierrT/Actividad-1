#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
	setupUi(this);
	show();
	connect(button, SIGNAL(clicked()), this, SLOT(doButton()) );
	connect(button_stop, SIGNAL(clicked()), this, SLOT(stopButton()) );

}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doButton()
{
	timer->startTimer();
	connect(timer,SIGNAL(timeout()),this,SLOT(increment()));
	qDebug() << "click on button";
}

void ejemplo1::increment(){
	lcdNumber->display(++cont);
}

void ejemplo1::stopButton(){
	timer->stopTimer();
}




