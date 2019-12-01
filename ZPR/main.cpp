#include "ZPR.h"
#include <QtWidgets/QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ZPR w;
	w.show();
	return a.exec();
}
