//제작자 : 한윤수
//학번 : 2023041004
//작성일 : 2023년 3월 27일
//저장소 : https://github.com/DireRaven22075/homework3
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("[---------2023041004 - 한윤수----------]\n\n");
    //일반 리스트 선언
    int list[5];
    //포인터 리스트 선언
    int *plist[5];
    //리스트에 각각 값을 대입
    list[0] = 10;
    list[1] = 11;
    plist[0] = (int*)malloc(sizeof(int)); //포인터 리스트의 0번째 원소에 메모리 할당
    printf("list[0] \t= %d\n", list[0]); //list[0]의 값 출력 (10이 출력됨)
    printf("list \t\t= %p\n", list); //list의 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소 출력
    printf("list + 0 \t= %p\n", list+0); //list + 0의 주소 출력
    //위 3개의 출력값이 같음 (list[0] == list == list + 0는 동일한 주소를 가르킴)
    printf("list + 1 \t= %p\n", list+1); //list + 1의 주소 출력 (4바이트 증가)
    printf("list + 2 \t= %p\n", list+2); //list + 2의 주소 출력 (8바이트 증가)
    printf("list + 3 \t= %p\n", list+3); //list + 3의 주소 출력 (12바이트 증가)
    printf("list + 4 \t= %p\n", list+4); //list + 4의 주소 출력 (16바이트 증가)
    printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소 출력
    free(plist[0]); //메모리 해제
    return 0; //프로그램 종료
}