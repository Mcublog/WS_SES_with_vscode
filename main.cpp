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
  printf("%d", dupa);
}

int main(void) {
  int i;

  for (i = 0; i < 100; i++) {
    printf("Hello World %d!\n", i);
    dupa_test(sraka);
  }
  do {
    i++;
  } while (1);
}

/*************************** End of file ****************************/
