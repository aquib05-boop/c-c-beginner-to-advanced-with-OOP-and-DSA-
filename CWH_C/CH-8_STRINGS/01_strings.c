#include <stdio.h>

int main(){
    char st[] = {'a', 'b', 'c', '\0'};
//string is a character array terminated by a null character
//stored in contagious memory locations
    for (int i = 0; i < 4; i++)
    {
        printf("Character is %c \n", st[i]);
    }
    
    return 0;
}