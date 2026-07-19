#include <stdio.h>

int main(){
    int n,d = 1,input,sum;
    printf("enter total numbers of entries\n");
    scanf("%d",&input);
    while(d==1 && n<=input){
        printf("Enter a numbeer!\n");
        scanf("%d",&n);

        while(sum =0 && n<=input){
    
        if(n%2 !=0 && n<=50 && n>=0){
            sum+=n;
        }
        }
    }
    printf("The total is %d\n",sum);
    
    return 0;
}
// take n input from the user, them print the sum of odd numbers entered by user
// exclude any odd no. which is not in the range 0-50