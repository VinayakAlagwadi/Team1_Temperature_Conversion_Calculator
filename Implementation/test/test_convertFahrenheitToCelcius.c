#include "unity.h"
#include "convertFahrenheitToCelsius.h"
#include "test_convertFahrenheitToCelsius.h"


void test_convertFahrenheitToCelsius_basic(void)
{
    // H_01
    int h01_arr[] = {10};
    int h01_n = sizeof(h01_arr)/sizeof(int);
	TEST_ASSERT_EQUAL( 283.15  , convertFahrenheitToCelsius(h01_n, (int*)&h01_arr));
}

int test_convertFahrenheitToCelsius(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_convertFahrenheitToCelsius_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}