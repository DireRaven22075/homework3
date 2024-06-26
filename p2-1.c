//제작자 : 한윤수
//학번 : 2023041004
//작성일 : 2023년 3월 27일
//저장소 : https://github.com/DireRaven22075/homework3
#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer;
int i;
int main(void) {
    printf("[---------2023041004 - 한윤수----------]\n\n");
    for (i = 0; i < MAX_SIZE; i++) input[i] = i;
    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum1(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum2(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum3(MAX_SIZE, input);
    printf("The sum is: %f\n\n", answer);
    return 0;
}
//매개변수를 배열로 받는 함수
float sum1(float list[], int n) {
    printf("list\t= %p\n", list); //list의 값 출력 (input의 주소와 같음)
    printf("&list\t= %p\n\n", &list); //list의 주소 출력 (input의 주소와 다름)
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}
//매개변수를 포인터로 받는 함수
float sum2(float *list, int n) {
    printf("list\t= %p\n", list); //list의 값 출력 (input의 주소와 같음)
    printf("&list\t= %p\n\n", &list); //list의 주소 출력 (input의 주소와 다름)
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    return tempsum;
}
//매개변수를 배열의 포인터로 받는 함수
float sum3(int n, float *list) {
    printf("list\t= %p\n", list); //list의 값 출력 (input의 주소와 같음)
    printf("&list\t= %p\n\n", &list); //list의 주소 출력 (input의 주소와 다름)
    float tempsum = 0;
    for(i = 0; i < n; i++) 
        tempsum += *(list + i);
    return tempsum;
}