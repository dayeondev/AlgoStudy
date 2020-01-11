// https://www.acmicpc.net/problem/2588

#include <stdio.h>

int a, b;
long i, j, k;

void input(){
    scanf("%d %d", &a, &b);
}

void solution(int a, int b){
    i = a * (b % 10);
    j = a * ((b % 100 - b % 10) / 10);
    k = a * ((b - (b % 100 - b % 10) / 10) / 100);

    printf("%ld\n", i);
    printf("%ld\n", j);
    printf("%ld\n", k);
    printf("%ld\n", i + j * 10 + k * 100);
}

int main(){
    input();
    solution(a, b);

    return 0;
}