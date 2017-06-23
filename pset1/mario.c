#include <stdio.h>
#include <cs50.h>

int n;
int height;

int main(void) {


    printf("enter the height of your pyramid:\n");   
do

{
    
       height = get_int();
    
    if (height < 2 || height >28)
    
    printf("you number needs to be no smaller then 0 and no greater then 28 you have put %i!\n",height);      
}

while (height < 2 || height >28);  //rerun get int until user gives a vaild number
  
  
     {
       for (n = 0; n < height; n++)  //run the loops n times
       
       {
           for(int i = 0; i < height-n-1; i++) //spaces n times
          
           
           printf(" ");
       }
       
       
       {
           for(int k = 0; k < n; k++) //# n times
           
           printf("#");
       }
         
         
         printf("\n");
        
    }
}
     

    
