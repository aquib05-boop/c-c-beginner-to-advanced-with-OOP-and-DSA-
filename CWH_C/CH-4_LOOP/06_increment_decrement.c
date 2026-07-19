#include <stdio.h>

int main(){
    int i = 5;
   
    printf("The value of is is %d\n", i);

    i = i + 5; //10
    printf("The value of i is %d\n", i);
    //++i; //11
    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", i);
    
    i +=2; //same as i+2
    printf("The value of i is %d", i); //i = 13
// i++ prints first and then increments(post increment operator)
// ++i increments first and then prints(increment operator)
    
// tell me some more operators like *= , %=, etc
    return 0;
}