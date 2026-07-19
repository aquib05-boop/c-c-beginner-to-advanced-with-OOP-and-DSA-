#include <stdio.h>

int main() {
    int score;
    printf("Enter the score (0-100):\n");
    scanf("%d", &score);

    float points = score / 10.0;  

    if (points >= 9 && points <= 10) {
        printf("GRADE: O\n");
    }
    else if (points >= 8 && points < 9) {
        printf("GRADE: E\n");
    }
    else if (points >= 7 && points < 8) {
        printf("GRADE: A\n");
    }
    else if (points >= 6 && points < 7) {
        printf("GRADE: B\n");
    }
    else if (points >= 5 && points < 6) {
        printf("GRADE: C\n");
    }
    else if (points >= 4 && points < 5) {
        printf("GRADE: D\n");
    }
    else {
        printf("GRADE: F\n");}
    return 0;
}