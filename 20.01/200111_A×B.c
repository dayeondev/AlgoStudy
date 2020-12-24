// https://www.acmicpc.net/problem/10998

#include <stdio.h>

int a, b;

void input(){
    scanf("%d %d", &a, &b);
}

void solution(){
    printf("%d", a*b);
}

int main(){
    input();
    solution();

    return 0;
}