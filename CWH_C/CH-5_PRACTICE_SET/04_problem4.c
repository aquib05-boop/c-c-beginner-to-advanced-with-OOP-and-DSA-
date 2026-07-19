// fiboncacci series        //0,1,1,2,3,5,8,13,21,34.....
// fibonacci(n) =fibanacci(n-1)+fibonacci(n-2)
#include <stdio.h>
int fibonacci(int);

int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}
    
int main(){
    printf("The series is as follows %d",fibonacci(9));
    return 0;
}