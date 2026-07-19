#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decrypt(const char* encrypted) {
    int num = 0;
    for (int i = 0; encrypted[i] != '\0'; i++) {
        // Build multi-digit numbers
        num = num * 10 + (encrypted[i] - '0');

        // If number is >= 32 (printable ASCII), treat as one character
        if (num >= 32 && num <= 126) {
            printf("%c", num - 1);  // subtract 1 for decryption
            num = 0; // reset for next number
        }
    }
    printf("\n");
}

int main() {
    char str[] = "78122331119811010233106116336611411810699";
    decrypt(str);
    return 0;
}


// #include <stdio.h>
// #include <string.h>

// void decrypt(int* ascii){
//     int ascii2[strlen(ascii)]; 
//    for (int i = 0; i < strlen(ascii); i++)
//    {
//      ascii2[i] = ascii[i]-1;
//    }
//    printf("%s",ascii2);
// }

// int main(){
//     int str[] = "78122331119811010233106116336611411810699";
//     decrypt(str);
//     return 0;
// }