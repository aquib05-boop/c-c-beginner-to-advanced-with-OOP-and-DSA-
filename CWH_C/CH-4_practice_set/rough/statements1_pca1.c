#include <stdio.h>

int main(){
    int a,sum=0, n;
    printf("Enter the number of inputs 'i' \n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number: \n");
        scanf("%d",&a);
        if (a%2!=0 && a<=50 && a>=0)
        {
            sum+=a;
        }   
    }
    printf("The value of sum is %d", sum);
    return 0;
}
// take n input from the user, them print the sum of odd numbers entered by user
// exclude any odd no. which is not in the range 0-50