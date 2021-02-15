#include "Implementation/unity/unity.h"
#include "convertCelciusToFahrenheit.h" /* The unit to be tested. */
#include "test_convertCelciusToFahrenheit.h"

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_convertCelciusToFahrenheit_basic(void)
{
    int h01_arr[] = {0,0,0};
    int h01_n = sizeof(h01_arr)/sizeof(int);
    UnityAssertEqualNumber((UNITY_INT)((32)), (UNITY_INT)((convertCelciusToFahrenheit(h01_n, (int*)&h01_arr))), (((void *)0)), (UNITY_LINE_TYPE)(13), UNITY_DISPLAY_STYLE_INT);
   // UNITY_TEST_ASSERT_EQUAL_INT((32), (convertCelciusToFahrenheit(h01_n, (int*)&h01_arr)), __LINE__, NULL)
	//TEST_ASSERT_EQUAL( 32, convertCelciusToFahrenheit(h01_n, (int*)&h01_arr));
    
}

int test_convertCelciusToFahrenheit (void)
{
    UNITY_BEGIN();
    RUN_TEST(test_convertCelciusToFahrenheit_basic); /* Run the test. */
    return UNITY_END();
}  
	