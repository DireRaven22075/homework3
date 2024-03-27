#include <stdio.h>
void print_one(int *ptr, int rows);
int main(void) {
    int one[] = {0, 1, 2, 3, 4};
    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5);
    return 0;
}
/* print out a one-dimensional array using a pointer */
void print_one(int *ptr, int rows) {
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}