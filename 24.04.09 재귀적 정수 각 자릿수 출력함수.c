#include <stdio.h>
#include <stdlib.h>


// 재귀적으로 정수의 각 자릿수를 출력하는 함수
void a(int n) {
    // 입력된 정수가 한 자리수인 경우
    if (n < 10) {
        printf("%d\n", n); // 해당 자릿수를 출력하고 함수 종료
    }
    else {
        a(n / 10); // 입력된 정수를 10으로 나누어 재귀 호출하여 다음 자릿수로 이동
        printf("%d\n", n % 10); // 마지막 자릿수를 출력
    }
}

int main() {
    int n;
    // 사용자로부터 정수 입력을 받음
    scanf("%d", &n);
    // 함수 a를 호출하여 입력된 정수의 각 자릿수를 출력
    a(n);
    return 0;
}
