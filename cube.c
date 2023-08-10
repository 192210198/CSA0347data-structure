#include <stdio.h>
int main() {
    int num,cube;
    printf("Enter a number to calculate cube: ");
    scanf("%d", &num);
    cube = num * num * num;
    printf("Cube of %d = %d",num, cube);
    return 0;
}
