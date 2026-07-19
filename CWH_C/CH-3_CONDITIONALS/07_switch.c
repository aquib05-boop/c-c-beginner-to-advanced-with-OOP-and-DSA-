#include <stdio.h>

int main(){
    int a ;
    printf("Enter a; ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You entered 1\n");
            break;
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        case 4:
            printf("You entered 4\n");
            break;
    }
    // upon entering 2, you entered 2,3,4 is printied!
    // using "break;" to avoid printing other cases
    return 0;
}