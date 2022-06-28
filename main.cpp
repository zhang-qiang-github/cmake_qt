#include <qapplication.h>
#include <qdebug.h>
#include <qpushbutton.h>
#include "export_dll/SWidgets.h"
int main(int argc, char* argv[])
{

	QApplication a(argc, argv);
	SWidgets* w = new SWidgets;
	w->show();

	return a.exec();
}