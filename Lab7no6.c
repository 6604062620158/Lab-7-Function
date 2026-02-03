/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isDuplicate(int arr[20][20], int r, int c, int value) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (arr[i][j] == value)
                return 1; // ซ้ำ
        }
    }
    return 0; // ไม่ซ้ำ
}

int main() {
    int M, N;
    int arr[20][20];
    int i, j, num;

    scanf("%d %d", &M, &N);

    srand(time(NULL));

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            do {
                num = rand() % 101 + 100; // 100–200
            } while (isDuplicate(arr, M, N, num));

            arr[i][j] = num;
        }
    }

    // แสดงผล
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


