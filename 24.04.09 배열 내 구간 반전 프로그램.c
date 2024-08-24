#include<stdio.h>

int main() {
    int n, k[100], x;
    scanf("%d", &n); // 배열의 크기를 입력받음

    // 배열의 요소들을 입력받음
    for (int i = 0; i < n; i++) {
        scanf("%d", &k[i]);
    }

    scanf("%d", &x); // 바꿀 구간의 개수를 입력받음
    for (int i = 0; i < x; ++i) {
        int a, b;
        scanf("%d", &a); // 바꿀 구간의 시작 인덱스를 입력받음
        scanf("%d", &b); // 바꿀 구간의 끝 인덱스를 입력받음

        // 구간의 길이를 구함
        int num = b - a + 1;
        int nn = num / 2;

        // 구간의 중간을 기준으로 요소들을 교환
        for (int i = 0; i < nn; ++i) {
            int temp = 0;
            temp = k[b]; // k[b]와 k[a]를 교환하기 전에 임시 변수에 k[b]를 저장
            k[b] = k[a]; // k[b]에 k[a]를 할당
            k[a] = temp; // k[a]에 임시 변수 값을 할당
            b -= 1; // 구간의 오른쪽 끝 인덱스를 하나 줄임
            a += 1; // 구간의 왼쪽 끝 인덱스를 하나 증가시킴
        }
    }

    // 바뀐 배열을 출력
    for (int i = 0; i < n; i++) {
        printf(" %d", k[i]);
    }
    return 0;
}
