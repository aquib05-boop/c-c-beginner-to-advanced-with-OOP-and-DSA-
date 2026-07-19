#include <stdio.h>
        //do-while loop executes atleast 1
int main(){
    int i = 0;
    do{
        printf("The value of i is %d\n", i);
        ++i;
    }while (i<4);  // ';' is imp.
    //  'while' checks the condition and then executes the code
    // 'do-while' executes the code & then checks the condition
    return 0;
}