#include <stdio.h>

int main(){

    int age ;

    printf("Enter your age\n");
    scanf("%d", &age);

    if(age>60){
        printf("you can drive and you're a senior citizen");
    }
// if the above condition is true,then it won't take teh else if statements ahead
     else if (age>40){
        printf("You can drive and you are an elder");
    }
    else if(age>=18){
        printf("You can drive");
    }
// the above is called else if ladder
    else{
        printf("you cannot drive");
    }

// last else is executed iff all conditions fail

// without using else if,
// if(age>=60){
//    printf("\n you're a senior citizen")
// }
    return 0;
}