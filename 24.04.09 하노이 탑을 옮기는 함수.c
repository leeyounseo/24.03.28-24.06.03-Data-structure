#include <stdio.h>
#include <stdlib.h>

// 하노이 탑을 옮기는 함수
// n: 옮길 원반의 개수, A: 출발 기둥, B: 보조 기둥, C: 목적 기둥
void hanoi(int n, char A, char B, char C) {
    // 원반이 하나인 경우에는 그냥 출발 기둥에서 목적 기둥으로 옮기면 됨
    if (n == 1) {
        printf("%c %c\n", A, C);
        return;
    }

    // n-1개의 원반을 보조 기둥으로 옮긴 후,
    // 가장 큰 원반을 목적 기둥으로 옮긴 후,
    // 보조 기둥에 있는 원반을 목적 기둥으로 옮김
    hanoi(n - 1, A, C, B); // A에서 B로 n-1개 원반 이동
    printf("%c %c\n", A, C); // A에 있는 가장 큰 원반을 C로 이동
    hanoi(n - 1, B, A, C); // B에 있는 n-1개 원반을 C로 이동

    return;
}

int main() {
    int n;
    // 사용자로부터 옮길 원반의 개수 입력 받음
    scanf("%d", &n);

    // 기둥의 이름 설정
    char A = 'A', B = 'B', C = 'C';

    // 하노이 탑을 옮기는 함수 호출
    hanoi(n, A, B, C);

    return 0;
}
