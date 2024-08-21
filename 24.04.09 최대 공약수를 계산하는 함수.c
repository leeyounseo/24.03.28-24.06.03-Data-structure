#include <stdio.h>
#include <stdlib.h>

// 최대 공약수를 계산하는 함수
int gcd(int a, int b) {
    // 두 수 중 하나가 0인 경우, 다른 수가 최대 공약수가 됨
    if (b == 0 || a == 0) {
        if (b == 0)
            return a;
        else
            return b;
    }
    else {
        // 유클리드 호제법을 이용하여 최대 공약수 계산
        // a와 b의 크기를 서로 교환하면서 계속해서 나머지를 구함
        // a가 b보다 큰 경우: a를 b로 나눈 나머지로 a를 갱신
        // b가 a보다 큰 경우: b를 a로 나눈 나머지로 b를 갱신
        if (a == b)
            return a; // 두 수가 같으면 최대 공약수는 자기 자신
        else if (a > b)
            return gcd(b, a % b);
        else if (a < b)
            return gcd(a, b % a);
    }
}

int main() {
    int a, b;
    // 두 정수를 입력받음
    scanf("%d %d", &a, &b);

    // 최대 공약수를 계산하여 출력
    printf("%d", gcd(a, b));

    return 0;
}
