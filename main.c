#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t t; //CREATE STRUCT FOR TIME
    time(&t); //CALL TIME FUNCTION

    srand((unsigned int)t);              /* INIT RANDOM GENERATOR */

    for ( int i=0; i<1; i++ )
        printf("%d ", rand() % 6 + 1);     //PRINT OUT AN ROLL CUBE
    printf("\n");
}
