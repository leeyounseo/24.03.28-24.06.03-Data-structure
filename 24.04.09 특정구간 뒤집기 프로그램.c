#include<stdio.h>

int main() {
    int n, k[100], x, kk[100], kkk[100];
    scanf("%d", &n); // 배열의 크기를 입력받음

    // 배열의 요소들을 입력받음
    for (int i = 0; i < n; i++) {
        scanf("%d", &k[i]);
    }

    scanf("%d", &x); // 바꿀 구간의 길이를 입력받음

    // 바꿀 구간의 인덱스들을 입력받음
    for (int i = 0; i < x; ++i) {
        scanf("%d", &kk[i]);
    }

    // 바꿀 구간의 요소를 새로운 배열에 복사
    for (int i = 0; i < x; ++i) {
        int a = kk[i]; // 바꿀 구간의 인덱스
        kkk[i] = k[a]; // 바꿀 구간의 요소를 새로운 배열에 복사
    }

    // 원래 배열에서 바꿀 구간을 새로운 배열의 값으로 대체
    for (int i = 0; i < x - 1; ++i) {
        int a = kk[i + 1]; // 바꿀 구간의 다음 인덱스
        int b = kkk[i]; // 새로운 배열의 값
        k[a] = b; // 원래 배열의 해당 인덱스에 새로운 배열의 값을 할당
    }

    // 결과 배열 출력
    for (int i = 0; i < n; ++i) {
        printf(" %d", k[i]);
    }
    return 0;
}
