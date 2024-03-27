//제작자 : 한윤수
//학번 : 2023041004
//작성일 : 2023년 3월 27일
//저장소 : https://github.com/DireRaven22075/homework3
#include <stdio.h>
void print_one(int *ptr, int rows);
int main(void) {
    printf("[---------2023041004 - 한윤수----------]\n\n");
    int one[] = {0, 1, 2, 3, 4};
    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //포인터 매개변수에 배열의 0번 인덱스의 주소를 넣어줌
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); //포인터 매개변수에 배열의 이름을 넣어줌
    return 0;
    //출력결과 둘다 동일한 값과 주소를 출력함
    //즉 배열의 이름은 배열의 0번 인덱스의 주소와 같다
}
/* print out a one-dimensional array using a pointer */
void print_one(int *ptr, int rows) {
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}