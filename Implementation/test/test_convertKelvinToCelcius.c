#include "unity.h"
#include "convertKelvinToCelcius.h" /* The unit to be tested. */
#include "test_convertKelvinToCelcius.h"

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_convertKelvinToCelcius(void)
{
   int h01_arr[] = {0,0,0};
    int h01_n = sizeof(h01_arr)/sizeof(int);
   TEST_ASSERT_EQUAL( 273.15, convertKelvinToCelcius(h01_n, (int*)&h01_arr));
}

int main (void)
{
   UNITY_BEGIN();
   RUN_TEST(test_convertKelvinToCelcius); /* Run the test. */
   return UNITY_END();
}