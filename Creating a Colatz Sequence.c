#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*10000);
    answer[0] = n;
    for(int i = 1; i < 1000;i++){
        if(n == 1){
            break;
        }else if(n%2 == 1){
            n = 3*n+1;
            answer[i] = n;
        }else if(n%2 == 0){
            n = n/2;
            answer[i] = n;
        }
    }
    return answer;
}