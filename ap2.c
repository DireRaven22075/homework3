//제작자 : 한윤수
//학번 : 2023041004
//작성일 : 2023년 3월 27일
//저장소 : https://github.com/DireRaven22075/homework3
#include <stdio.h>
#include <stdlib.h>

void main(void) {
    printf("[---------2023041004 - 한윤수----------]\n\n");
    int list[5];
    int *plist[5];
    list[0] = 10;
    list[1] = 11;
    plist[0] = (int*)malloc(sizeof(int));
    printf("list[0] \t= %d\n", list[0]);
    printf("list \t\t= %p\n", list);
    printf("&list[0] \t= %p\n", &list[0]);
    printf("list + 0 \t= %p\n", list+0);
    printf("list + 1 \t= %p\n", list+1);
    printf("list + 2 \t= %p\n", list+2);
    printf("list + 3 \t= %p\n", list+3);
    printf("list + 4 \t= %p\n", list+4);
    printf("&list[4] \t= %p\n", &list[4]);
    free(plist[0]);
    return 0;
}