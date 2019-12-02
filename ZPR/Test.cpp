#include <boost/test/unit_test.hpp>


bool init_unit_test()
{
	std::cout << "using custom init" << std::endl;
	return true;
}

BOOST_AUTO_TEST_CASE(test1)
{
	BOOST_TEST(true);
}

BOOST_AUTO_TEST_CASE(test2)
{
  BOOST_TEST(1 == 1);
}