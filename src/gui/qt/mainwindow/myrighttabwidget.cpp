//
// C++ Implementation: MyRightTabWidget
//
// Description: 
//
//
// Author: FThauer FHammer <f.thauer@web.de>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "myrighttabwidget.h"

// using namespace std;

MyRightTabWidget::MyRightTabWidget(QGroupBox *parent)
 : QTabWidget(parent), myTabBar(0)
{
// 	fadeOutTimer = new QTimer;
// 	connect(flipCardsTimer, SIGNAL(timeout()), this, SLOT(nextFlipCardsFrame()));
	myTabBar = this->tabBar();

// 	chatBlinkTimer = new QTimer;
// 	connect(chatBlinkTimer, SIGNAL(timeout()), this, SLOT( blinkChatTab() ));

	this->setStyleSheet("QTabWidget::pane { border: 2px solid #286400; border-radius: 2px; background-color: #145300; }  QTabWidget::tab-bar { left: 5px; } ");

#ifdef _WIN32
	QString font1String("font-family: \"Arial\";");
	int padding = 1;
#else 
	QString font1String("font-family: \"Nimbus Sans L\";");
	int padding = 0;
#endif

	QTabBar *myTabBar = this->tabBar();

	myTabBar->setStyleSheet("QTabBar::tab{ "+ font1String +" font-size: 11px; color: white; background-color: #145300; border: 2px solid #286400; border-bottom-color: #286400; border-top-left-radius: 4px; border-top-right-radius: 4px; min-width: 8ex; padding: "+QString::number(padding,10)+"px;} QTabBar::tab:selected, QTabBar::tab:hover { background-color: #145300; } QTabBar::tab:selected { border-color: #286400; border-bottom-color: #145300; }  QTabBar::tab:!selected { margin-top: 2px; } QTabBar::tab:selected { margin-left: -4px; margin-right: -4px; } QTabBar::tab:first:selected { margin-left: 0; } QTabBar::tab:last:selected { margin-right: 0; } QTabBar::tab:only-one { margin: 0; } QTabBar::tab:disabled { font-size: 11px; font-weight: 900; color: #144D03; background-color: #144D03; border-left-color: #255704; border-right-color: #255704; border-top-color: #255704; }");

}


MyRightTabWidget::~MyRightTabWidget()
{
}

// // void MyRightTabWidget::startBlinkChatTab() { chatBlinkTimer->start(500); }
// void MyRightTabWidget::stopBlinkChatTab() { chatBlinkTimer->stop(); }
// void MyRightTabWidget::showDefaultChatTab() { myTabBar->setTabTextColor(1, QColor(240,240,240)); }

// void MyRightTabWidget::blinkChatTab() {
// 
// 	if(myTabBar->tabTextColor(1).red() == 240) myTabBar->setTabTextColor(1, QColor(113,162,0));
// 	else myTabBar->setTabTextColor(1, QColor(240,240,240));
// }

void MyRightTabWidget::paintEvent(QPaintEvent * event) {

	QTabWidget::paintEvent(event);
	
}



