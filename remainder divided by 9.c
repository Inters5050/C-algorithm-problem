int solution(const char* number) {
    int len = 0;
    len = strlen(number);
    int result = 0;
    for (int i = 0; i < len; i++){
        result += number[i] - '0';
    }
    return result % 9;
}