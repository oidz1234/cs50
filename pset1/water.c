/* the formula is compltly wrong and there
   are some spelling mistakes but IDGAF */




#include <stdio.h>
#include <cs50.h>

int main(void)
{
 
 int Minutes;
 

/* do the following code and if the user has not entered
   a number above 0 then promt them again */

do              
{
    
    printf("how many minuites was your shower ?!");
     Minutes = get_int();
    int Bottles = Minutes * 16;
    
    printf ("wow you have wasted %i bottles of water\n", Bottles);
    
    
}
while (Minutes <0);

}