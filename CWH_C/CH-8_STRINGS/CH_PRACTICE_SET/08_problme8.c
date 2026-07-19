#include <stdio.h>
#include <string.h>

int main(){
    char c = 'E';
    int count = 0;
    char str[] = "COUNTING THE REPEATING NO. OF DIGITS";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
           count++;
        }

    }
    printf("%d", count);
    return 0;
}