#include <stdio.h>

int main() {
    int scores[2][4] = {{65, 92, 35, 70}, {84, 72, 59, 67}};

    // Loop through rows
    for (int i = 0; i < 2; i++) {
        // Loop through columns
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}