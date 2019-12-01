#include "ZPR.h"
#include <QtWidgets/QApplication>
#include "toTest.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ZPR w;
	w.show();

	toTest s;
	cout << s.a << endl;
	return a.exec();
}
