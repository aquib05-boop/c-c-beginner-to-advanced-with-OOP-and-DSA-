#include <stdio.h>

int main() {
    int score;

    printf("Enter the score:\n ");
    scanf("%d", &score);

    switch (score / 10) {
        case 10:
        case 9:
            printf("GRADE O\n");
            break;
        case 8:
            printf("GRADE E\n");
            break;
        case 7:
            printf("GRADE A\n");
            break;
        case 6:
            printf("GRADE B\n");
            break;
        case 5:
            printf("GRADE C\n");
            break;
        case 4:
            printf("GRADE D\n");
            break;
        default:
            if (score >= 0 && score < 40) {
                printf("GRADE F\n");
            } else {
                printf("Invalid score! Please enter a score between 0 and 100.\n");
            }
            break;
    }
    
    return 0;
}