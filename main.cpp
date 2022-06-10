/*********************************************************************
*                    SEGGER Microcontroller GmbH                     *
*                        The Embedded Experts                        *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------

File    : main.c
Purpose : Generic application start

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*********************************************************************
*
*       main()
*
*  Function description
*   Application entry point.
*/
volatile long variable = 122;
void test_func(const int dupa)
{
  printf("%s\r\n", __func__);
  #pragma GCC warning "TODO: SetKeyRequiredFeedback"
}

int main(void) {
  int d;
  char input_buf[256] = {0};

  for (;;) {
    putchar('a');
    int d = scanf("%s", input_buf);
    printf("RX[%d]: %s", d, input_buf);
    printf("\r\n");
    test_func(variable);
    for (volatile int i = 0; i < 100000; i++) {}
  }
  do {
    d++;
  } while (1);
}

/*************************** End of file ****************************/
