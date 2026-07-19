#include <stdio.h>

int main(){ 
    int age  ;
    printf("Please enter your age\n");
    scanf("%d",&age);

     if (age>10){
        printf("We are inside if\n");
        printf("your age is greater than 10\n\n"); 
     }
      else{
        printf("your age is not greater than 10\n");
     }
     // "=" single is a relational operator(used to assign)
     // "==" mans to check if its equal(equality check)
     if (age%5==0){
        printf("We are inside another if\n");
        printf("your age is divisible by 5");
     }
     //else block is not necessary but optional
    
     
   return 0;
}