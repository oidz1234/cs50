#include <stdio.h>
#include <cs50.h>

int n;
int height;


int main(void) {


    printf("enter the height of your pyramid:\n");   


do { 
      height = get_int();      
    
    if (height < 2 || height >28)       //if the user has entered the correct input
    
    printf("you number needs to be no smaller then 0 and no greater then 28 you have put %i!\n",height);      
   }

while (height < 2 || height >28);  //rerun get int until user gives a vaild number
  
  
        
         for(int i = 0; i <= height; i++) {
          
          
             for (n = 0; n <= (height-i); n++) {
             
                printf("a");
                
             }
                
         
              {
              
              
                for (int h = 0; h <= (height-n); h++) {
             
             
                    printf("#");
                   
                }
             {
                    printf("\n");
            
            
            
                
             
               
             }
                }
             }

}
            
           


          
      



