#include <stdio.h>
// // function prototype
// int sum(int, int);

// // function definition
// int sum(int x, int y){
//     // printf("the sum is %d\n",x+y);
//     return x+y;
// }
int change(int a){
    a=77; //Misnomer
    return 0;
}

int main(){
    
    int b=22;
    change(b); //the value of b remains 22      //the value of b goes to change funcn,i.e,22
    printf("b is %d\n",b);
    return 0;
}