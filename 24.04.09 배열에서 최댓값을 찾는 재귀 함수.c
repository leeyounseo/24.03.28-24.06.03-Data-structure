#include <stdio.h>
#include <stdlib.h>

// 배열에서 최댓값을 찾는 재귀 함수
int maxFuc(int* arr, int n) {
    // 배열의 크기가 1이면 배열의 유일한 요소가 최댓값
    if (n == 1)
        return arr[0];
    else {
        // 이전 요소들 중 최댓값보다 현재 요소가 더 크면 현재 요소를 반환
        if (maxFuc(arr, n - 1) <= arr[n])
            return arr[n];
        // 그렇지 않으면 이전 요소들 중 최댓값을 반환
        else
            return maxFuc(arr, n - 1);
    }
}

int main() {
    int n, arr[20];
    // 사용자로부터 배열의 크기 입력받음
    scanf("%d", &n);

    // 배열 요소들을 입력받음
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 배열의 크기가 1이면 유일한 요소가 최댓값이므로 바로 출력
    if (n == 1)
        printf("%d", maxFuc(arr, n));
    // 그렇지 않으면 배열에서 최댓값을 찾아 출력
    else
        printf("%d", maxFuc(arr, n - 1));

    return 0;
}
