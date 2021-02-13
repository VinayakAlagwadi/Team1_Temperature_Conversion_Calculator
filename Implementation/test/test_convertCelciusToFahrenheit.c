#include "unity.h"
#include "convertCelciusToFahrenheit.h"

void test_convertCelciusToFahrenheit_basic(void)
{
    // H_01
    int h01_arr[] = {34};
    int h01_n = sizeof(h01_arr)/sizeof(int);
	TEST_ASSERT_EQUAL( 93.20  , convertCelciusToFahrenheit(h01_n, (int*)&h01_arr));
}

int test_convertCelciusToFahrenheit(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_convertCelciusToFahrenheit_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}

