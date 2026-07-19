#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "MY name is aquib and ia m a resident of adisaptagram";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1 ; //paste the ascii value obtained after this in the str, and change str[i] -1 ;
    }

    printf("%s", str);
    
    return 0;
}