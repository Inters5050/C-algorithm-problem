#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* number) {
    int len = 0;
    len = strlen(number);
    int result = 0;
    for (int i = 0; i < len; i++){
        result += number[i] - '0';
    }
    return result % 9;
}