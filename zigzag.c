#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    int len = strlen(s);
    
    if (numRows == 1 || numRows >= len)
        return s;

   
    char** rows = (char**)malloc(numRows * sizeof(char*));
    int* rowLen = (int*)calloc(numRows, sizeof(int));

    for (int i = 0; i < numRows; i++) {
        rows[i] = (char*)malloc((len + 1) * sizeof(char));
    }

    int currentRow = 0;
    int direction = 1; // 1 = down, -1 = up

   
    for (int i = 0; i < len; i++) {
        rows[currentRow][rowLen[currentRow]++] = s[i];

        if (currentRow == 0)
            direction = 1;
        else if (currentRow == numRows - 1)
            direction = -1;

        currentRow += direction;
    }

    
    char* result = (char*)malloc((len + 1) * sizeof(char));
    int index = 0;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < rowLen[i]; j++) {
            result[index++] = rows[i][j];
        }
    }

    result[index] = '\0';

    return result;
}
