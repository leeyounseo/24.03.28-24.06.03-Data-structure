#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

//느린버전의 누적평균계산함수
int* prefixAverages1(int* x, int n) {
	float sum;
	int* a;
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < i + 1; j++) {
			sum += x[j];
		}
		a[i] = (int)(sum / (i + 1) + 0.5);

	}
	return a;

}

//빠른버전의 누적평균계산함수
int* prefixAverages2(int* x, int n) {
	float sum = 0;
	int* a;
	srand(time(NULL));
	a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		sum += x[i];
		float k = sum / (i + 1);
		k += 0.5;
		a[i] = (int)k;
	}
	return a;
}
int main() {
	//시간측정함수에 필요한 변수들 선언
	LARGE_INTEGER ticksPerSec1, ticksPerSec2;
	LARGE_INTEGER start1, start2, end1, end2, diff1, diff2;

	int n;
	scanf("%d", &n); //배열 X의 크기값 받기
	int* x, * a, * b, k;
	x = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		k = rand() % 10001; //난수발생함수로 배열값 설정
		x[i] = k;
	}
	//두 함수의 시간측정
	QueryPerformanceFrequency(&ticksPerSec1);
	QueryPerformanceCounter(&start1);
	a = prefixAverages1(x, n);
	QueryPerformanceCounter(&end1);
	
	QueryPerformanceFrequency(&ticksPerSec2);
	QueryPerformanceCounter(&start2);
	b = prefixAverages2(x, n);
	QueryPerformanceCounter(&end2);

	//측정값으로부터 실행시간 계산
	diff1.QuadPart = end1.QuadPart - start1.QuadPart;
	double result1 = ((double)diff1.QuadPart / (double)ticksPerSec1.QuadPart)*1000;
	printf("%.9fms\n", result1);
	diff2.QuadPart = end2.QuadPart - start2.QuadPart;
	double result2 = ((double)diff2.QuadPart / (double)ticksPerSec2.QuadPart)*1000;
	printf("%.9fms\n", result2);

	return 0;

}