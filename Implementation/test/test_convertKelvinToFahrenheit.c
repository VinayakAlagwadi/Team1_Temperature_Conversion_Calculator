#include "unity.h"
#include "convertKelvinToFahrenheit.h" /* The unit to be tested. */

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_convertKelvinToFahrenheit(void)
{
   int h01_arr[] = {255.928,0,0};
    int h01_n = sizeof(h01_arr)/sizeof(int);
    UNITY_TEST_ASSERT_EQUAL_INT((1), (convertKelvinToFahrenheit(h01_n, (int*)&h01_arr)), __LINE__, NULL)
	//TEST_ASSERT_EQUAL( 1, convertKelvinToFahrenheit(h01_n, (int*)&h01_arr));
}

int main (void)
{
   UNITY_BEGIN();
   RUN_TEST(test_convertKelvinToFahrenheit); /* Run the test. */
   return UNITY_END();
}