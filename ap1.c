//제작자 : 한윤수
//학번 : 2023041004
//작성일 : 2023년 3월 27일
//저장소 : https://github.com/DireRaven22075/homework3
#include <stdio.h>
#include <stdlib.h>

void main(void) {
    printf("[---------2023041004 - 한윤수----------]\n\n");
    //평범한 배열과 포인터 배열의 차이를 알아보기 위한 코드
    //일반 정수 배열 선언
    int list[5];
    //포인터 배열 선언
    int *plist[5] = {NULL,};
    //포인터 배열의 첫번째 원소에 동적할당
    plist[0] = (int *)malloc(sizeof(int));
    //각각의 배열에 값을 넣음
    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;
    //0번 인덱스 값 출력
    printf("list[0] = %d\n", list[0]); //list[0]의 값 출력 (1이 출력됨)
    //각각의 배열의 주소를 출력
    printf("&list[0] = %p\n", &list[0]); //list[0]의 주소 출력
    printf("list = %p\n", list); //list의 주소 출력
    printf("&list = %p\n", &list);  //주소연산자를 통한 list의 주소 출력
    //list[0]의 주소값과 list의 주소값이 같음
    printf("----------------------------------------\n\n");
    //1번 인덱스 값 출력
    printf("list[1] = %d\n", list[1]); //list[1]의 값 출력 (100이 출력됨)
    //각각의 배열의 주소를 출력
    printf("&list[1] = %p\n", &list[1]); //list[1]의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); //list + 1의 값 출력
    printf("list+1 = %p\n", list+1); //list + 1의 주소 출력
    //list[1]의 주소값과 list + 1의 주소값이 같음
    printf("----------------------------------------\n\n");
    //포인터 배열의 0번 인덱스 값 출력
    printf("*plist[0] = %d\n", *plist[0]);
    //각각의 배열의 주소를 출력
    printf("&plist[0] = %p\n", &plist[0]); //주소연산자를 통한 plist[0]의 주소 출력
    printf("&plist = %p\n", &plist); //주소연산자를 통한 plist의 주소 출력
    printf("plist = %p\n", plist); //plist의 주소 출력
    //plist[0]의 주소값과 plist의 주소값이 같음

    //포인터 배열에 저장되어 있는 값 출력
    printf("plist[0] = %p\n", plist[0]); //200의 숫자가 저장되어 있는 주소 출력
    printf("plist[1] = %p\n", plist[1]); //NULL이 저장되어 있는 주소 출력
    printf("plist[2] = %p\n", plist[2]); //NULL이 저장되어 있는 주소 출력
    printf("plist[3] = %p\n", plist[3]); //NULL이 저장되어 있는 주소 출력
    printf("plist[4] = %p\n", plist[4]); //NULL이 저장되어 있는 주소 출력
    free(plist[0]); //메모리 해제
}