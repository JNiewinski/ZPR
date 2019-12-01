#define BOOST_TEST_MODULE mytests
#include <boost/test/unit_test.hpp>
#include "toTest.h"

BOOST_AUTO_TEST_CASE(myTestCase)
{
	toTest x;
  BOOST_TEST(x.a==2);
  BOOST_TEST(true);
}