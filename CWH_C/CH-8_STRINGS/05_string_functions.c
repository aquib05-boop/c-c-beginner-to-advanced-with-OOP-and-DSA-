#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "Aquib";
    char a1[56] = "Aquib";
    char a2[] = "bhai";

    // printf("%d", strlen(st)); 
//strlen func is used to count the number of characters in teh string excluding the null character('\0')
    char target[30];
    strcpy(target,st);
    strcat(a1,a2);
    puts(strcat);
    return 0;
}