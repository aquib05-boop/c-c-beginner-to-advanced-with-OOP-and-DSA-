//CALL BY VALUE(copy of variable is passed,, the original remains unchanged)

#include <stdio.h> 

int multiply(int x){
    x = 10 * x;
    printf("%d\n", x);
    return 0;
}

int main(){
    int a = 9;
    multiply(a);
    printf("%d", a);
    return 0;
}



//CALL BY REFERENCE

// #include <stdio.h>

// int multiply(int* x){
//     *x = 10 * *x;
//     printf("%d\n", *x);
//     return 0;
// }

// int main(){
//     int a = 9;
//     multiply(&a);
//     printf("%d", a);
//     return 0;
// }