#include <stdio.h>
#include <string.h>

int main(){
    char c = 'Z';
    int contains = 0;
    char str[] = "COUNTING THE REPEATING NO. OF DIGITS";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
           contains = 1;
           break;
        }

    }
    if (contains)
    {
        printf("Yes it contains\n");
    }
    else{
        printf("Does Not contain \n");
    }
    
    return 0;
}