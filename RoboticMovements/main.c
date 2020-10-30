#include <stdio.h>
#include <stdlib.h>
#include "definitions.h"
#include "prototypes.h"

int main()
{
    // int ---> Symbol Note --> Number of 4 Bytes
    // x   ---> User Choice --> x
    // Number of 4 Bytes with user choice of X
    // 0xA2  ----> x (*0xA2)
    char A[10];
    printf("Please enter the movement \n");
    scanf("%s",A);
    printf("Message A which is : %s is sent ",A);
    Connect_ARMs();
    Connect_Legs();
    while(1){
    OS();
    Display_ARMs();
    }
    return 0;
}
