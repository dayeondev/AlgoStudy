// https://www.acmicpc.net/problem/2588

#include <stdio.h>

int a, b;
int i, j, k;

void input(){
    scanf("%d %d", &a, &b);
}

void solution(int a, int b){
    i = b % 10 * a;
    j = b / 10 % 10 * a;
    k = b / 100 * a;

    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    printf("%d\n", i + j * 10 + k * 100);
}

int main(){
    input();
    solution(a, b);

    return 0;
}