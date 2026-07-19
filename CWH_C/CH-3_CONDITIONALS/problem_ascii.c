#include <stdio.h>

int main(){ 
    char ch ;

    printf("Please enter an alphabet\n");
    scanf("%c", &ch);
    printf("the character is %c\n", ch);
    printf("The value of the character is %d\n", ch);

    if(ch>=97 && ch<=122){
        printf("The character is in LOWER CASE");
    }
    else{
        printf("The given character is not LOWER CASE");
    }
    return 0;
}
//The scii value of small case is form 97 - 122
//The scii value of big case is form 65 - 90low