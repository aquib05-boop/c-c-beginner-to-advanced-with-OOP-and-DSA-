#include <stdio.h>
int sumn(int n){
    while (n>0)
    {
        return n + sumn(n-1);
    }
    
}

int main(){
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    printf("The sum till %d terms of natural numbers is %d \n", num, sumn(num));
    return 0;
}
// int sumn(int n){
//     int sum = 0;
//     for (int i = 0; i <= n ; i++)
//     {
//         sum+=i;
//     }
//     return sum;
// }