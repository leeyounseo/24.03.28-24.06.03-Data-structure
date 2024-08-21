#include <stdio.h>
#include <stdlib.h>

// 재귀적으로 합을 계산하는 함수
int sum(int n) {
    // 기저 조건: n이 1이면 1을 반환하고 재귀를 멈춤
    if (n == 1)
        return 1;
    else {
        // n과 n-1까지의 합을 재귀적으로 호출하여 반환
        return (n + sum(n - 1));
    }
}

int main() {
    int n;
    // 사용자로부터 정수 입력을 받음
    scanf("%d", &n);
    // sum 함수를 호출하여 1부터 n까지의 합을 계산하고 출력
    printf("%d", sum(n));
    return 0;
}