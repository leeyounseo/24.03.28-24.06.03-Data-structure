#include <stdio.h>
#include <stdlib.h>

// 문자열에서 특정 문자의 개수를 세는 함수
// arr: 문자열 배열, a: 찾고자 하는 문자, n: 배열의 인덱스
int countChar(char* arr, char a, int n) {
    // 재귀 호출의 종료 조건: n이 0인 경우
    if (n == 0) {
        // 배열의 첫 번째 요소가 찾고자 하는 문자와 같으면 1을 반환
        if (arr[0] == a) {
            int k = 1;
            return k;
        }
        // 배열의 첫 번째 요소가 찾고자 하는 문자와 다르면 0을 반환
        else {
            int k = 0;
            return k;
        }
    }
    else {
        // 배열의 마지막 요소부터 거꾸로 검사하면서 찾고자 하는 문자의 개수를 계산
        if (arr[n] == a)
            return (countChar(arr, a, n - 1) + 1); // 현재 요소가 찾고자 하는 문자와 같으면 1을 추가하여 다음 요소로 이동
        else
            return (countChar(arr, a, n - 1)); // 현재 요소가 찾고자 하는 문자와 다르면 다음 요소로 이동
    }
}

int main() {
    char arr[101] = { 0 }, a;
    // 문자열 입력
    scanf("%s", &arr);
    getchar(); // 버퍼 비우기

    // 찾고자 하는 문자 입력
    scanf("%c", &a);

    int n = strlen(arr); // 문자열의 길이 계산
    // 문자열에서 특정 문자의 개수를 출력
    printf("%d", countChar(arr, a, n - 1));

    return 0;
}
