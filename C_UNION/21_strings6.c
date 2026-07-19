/* Write a function slice() to slice a string. It should change the original string such
 that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
 for */

#include <stdio.h>
#include <stdlib.h>
;
int len(char *arr) {
    int count = 0;
    while (arr[count] != '\0') {
        count++;
    }
    return count;
}

int no_space(char* arr){
    int count = 0;
    for (int i = 0; i < len(arr); i++)
    {
        if(arr[i]!= ' '){
            count++;
        }
    }
    return count;
}
void slice(char* arr, int m, int n){
    for (int i = m; i <= n; i++)
    {
        printf("%c", arr[i]);
    }
    arr[n+1]='\0';
}

int main(){
    char arr[] = "My name is Aquib";
    slice(arr, 5, 10);
    printf("%d",no_space(arr));
    return 0;
}

//the following creates a new string instead of modifying the old one

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* slice(const char *arr, int m, int n) {
    if (m > n || m < 0 || n >= strlen(arr)) {
        return NULL; // invalid slice
    }

    int len = n - m + 1;
    char *result = (char*) malloc((len + 1) * sizeof(char)); // +1 for '\0'

    for (int i = 0; i < len; i++) {
        result[i] = arr[m + i];
    }
    result[len] = '\0';
    return result;
}

int main() {
    char str[] = "My name is Aquib";
    
    char *sub = slice(str, 3, 10);  // slice "name is"
    if (sub != NULL) {
        printf("Original string: %s\n", str);
        printf("Sliced string: %s\n", sub);
        free(sub); // free allocated memory
    }
    return 0;
}
*/


// the following prints only non_space characters b/w m and n

/*#include <stdio.h>

// Function to slice string by skipping spaces
void slice(char *arr, int m, int n) {
    int count = 0;  // counts only non-space characters
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] != ' ') {
            count++;
            if (count >= m && count <= n) {
                printf("%c", arr[i]);
            }
        }
    }
    printf("\n");
}

int main() {
    char arr[] = "My name is Aquib";

    // Example: 3rd to 6th non-space characters
    slice(arr, 3, 6);  

    return 0;
}
*/