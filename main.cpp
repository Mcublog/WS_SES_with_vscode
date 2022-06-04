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

/*********************************************************************
*
*       main()
*
*  Function description
*   Application entry point.
*/
volatile long sraka = 122;
void dupa_test(const int dupa)
{
  printf("%d\r\n", dupa);
  #pragma GCC warning "TODO: SetKeyRequiredFeedback"
}

int main(void) {
  int i;

  for (;;) {
    printf("Hello World %d!\r\n", i);
    dupa_test(sraka);
    for (volatile int i = 0; i < 100000; i++) {}
  }
  do {
    i++;
  } while (1);
}

/*************************** End of file ****************************/
