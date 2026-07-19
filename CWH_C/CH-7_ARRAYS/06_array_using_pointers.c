#include <stdio.h>

int main(){
    int marks[] = {43,46,35,53};

    int *ptr = marks;   //Same as int *ptr = &marks[0]
    // c language syntax
    for (int i = 0; i < 4; i++)
    {
        // printf("The marks at index %d is %d\n",i,marks[i]);
        printf("The marks at index %d is %d\n",i,*ptr);
        ptr++;
    }   
    return 0;
}