#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE goblet
#include <boost/test/unit_test.hpp>
#include "goblet.h"
using namespace std;





BOOST_AUTO_TEST_CASE(universeInOrder)
{
	goblet first;
	first.setName("chris");
    BOOST_CHECK(first.getName() == "bob");
}
