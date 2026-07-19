#include <stdio.h>

int main(){
   

    // USING WHILE LOOP
    int sum = 0;
    int i = 1;
    while(i <=10){
        sum = sum +(i*8);
        i++;
    }
    printf("%d",sum);
    return 0;
}
 // int sum =0;
    // for(int i=1;i<=10;i++){
    //     sum = sum + (8*i);
    // }
    // printf("The value of sum is %d", sum);
    // return 0;