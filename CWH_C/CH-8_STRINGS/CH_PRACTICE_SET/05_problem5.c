#include <stdio.h>

int strlen(char str[]){
    int i = 0,count = 0;
    char c = str[i];
    while (c!='\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

void mystrcpy(char[] target, char[] source){
    for (int i = 0; i < mystrlen(source); i++)
    {
       target[i] = source[i];
    }
    
}
int main(){
    char source[]="harry";
    char target[30];
    strcpy(target, source);//target now contains harry
    return 0;
}