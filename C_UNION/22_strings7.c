// Write a program to encrypt a string by adding 1 to the ascii value of its
// characters.

#include <stdio.h>
#include <string.h>

void encrypt(char* str){
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%d",str[i]+1);
    }
}

int main(){
    char str[] = "My name is Aquib";
    encrypt(str);
    return 0;
}