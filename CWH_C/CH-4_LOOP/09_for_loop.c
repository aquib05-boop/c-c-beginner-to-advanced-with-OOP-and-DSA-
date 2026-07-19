#include <stdio.h>

int main(){
    int n = 6;
    for(int i = 0; i<n; i++){
        printf("The value of i is %d\n", i);
    }

    return 0;
// for loop, executes from left to right, like if 'i<n'(it always return to this again after executing 
// if true) is true, then the block executes, then repeaets
// int i = 0,runs only once
// i is iteration
}
// for loop is used to iterate the statements or a part of the program several times.
// It is used to traverse the structure like theb arrays and linked lists.
// It has a little different syntax than while and do while loops

// for(exp1 ; exp 2; exp3){
// code to be run
// }
