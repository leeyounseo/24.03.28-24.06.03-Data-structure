#include<stdio.h>

int main() {
    int n, a[100][100];
    scanf("%d", &n); // 배열의 크기를 입력받음
    int num = 0; // 초기화된 숫자

    // 배열을 채워넣음
    for (int i = 0; i < n; ++i) {
        // 홀수 번째 행
        if ((i + 1) % 2 != 0) {
            for (int j = 0; j < n; ++j) {
                ++num; // 숫자 증가
                a[i][j] = num; // 현재 위치에 숫자 할당
            }
        }
        // 짝수 번째 행
        else {
            for (int j = n - 1; j >= 0; --j) {
                ++num; // 숫자 증가
                a[i][j] = num; // 현재 위치에 숫자 할당
            }
        }
    }

    // 배열 출력
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf(" %d", a[i][j]); // 배열 요소 출력
        }
        printf("\n"); // 줄 바꿈
    }
    return 0;
}
