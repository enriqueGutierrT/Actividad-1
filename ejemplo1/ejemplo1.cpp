#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
	setupUi(this);
	show();
	connect(button, SIGNAL(clicked()), this, SLOT(StartButton()) );
	connect(button_stop,SIGNAL(clicked()),this , SLOT(StopButton()) );

}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doButton()
{
	qDebug() << "click on button";
	lcdNumber->display(++x);
	
}
void ejemplo1::StartButton()
{    
	timer=new QTimer(this);
	timer->start(1000);
	connect(timer,SIGNAL(timeout()),this,SLOT(doButton()));
}
void ejemplo1::StopButton(){
	timer->stop();
}





