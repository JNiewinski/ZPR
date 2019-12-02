#define BOOST_TEST_NO_MAIN
#define BOOST_TEST_ALTERNATIVE_INIT_API

#include "ZPR.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include <boost/test/included/unit_test.hpp>



int main(int argc, char *argv[])
{
	extern bool init_unit_test();
	QApplication a(argc, argv);
	ZPR w;
	w.show();
	a.exec();
	return boost::unit_test::unit_test_main(init_unit_test, argc, argv);
}
