#include "unity.h"
#include "convertCelciusToKelvin.h"
#include "test_convertCelsiusToKelvin.h"


void test_convertCelciusToKelvin_basic(void)
{
    // H_01
    int h01_arr[] = {10};
    int h01_n = sizeof(h01_arr)/sizeof(int);
	TEST_ASSERT_EQUAL( 300  , convertCelciusToKelvin(h01_n, (int*)&h01_arr));
}

int test_convertCelciusToKelvin(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_convertCelciusToKelvin_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}