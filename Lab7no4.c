/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void printHead(int w);
void printBody(int w, int h);

int main() {
    int width, height;
    scanf("%d %d", &width, &height);

    printHead(width);
    printBody(width, height);
    printHead(width);

    return 0;
}

void printHead(int w) {
    int i;
    for (i = 0; i < w; i++)
        printf("* ");
    printf("\n");
}

void printBody(int w, int h) {
    int i, j;

    if (h < 2) return;

    for (i = 0; i < h - 2; i++) {
        printf("* ");              

        for (j = 0; j < w - 2; j++)
            printf("  ");          

        printf("*\n");          
    }
}


