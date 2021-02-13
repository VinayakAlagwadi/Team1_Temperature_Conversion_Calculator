
#include "unity.h"
#include "convertCelciusToFahrenheit.h" /* The unit to be tested. */

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_convertCelciusToFahrenheit(void)
{
    TEST_IGNORE_MESSAGE("Hello world!"); /* Ignore this test but print a message. */
}

int main (void)
{
    UNITY_BEGIN();
    RUN_TEST(test_convertCelciusToFahrenheit); /* Run the test. */
    return UNITY_END();
}  
	