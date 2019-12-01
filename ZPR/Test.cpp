#define BOOST_TEST_MODULE MyTest
#include <boost/test/unit_test.hpp>

using namespace boost::unit_test;

BOOST_AUTO_TEST_CASE(SimpleTestTools)
{
	BOOST_CHECK(2 + 2 == 4);
	BOOST_REQUIRE(true);
}