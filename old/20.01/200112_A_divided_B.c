// https://www.acmicpc.net/problem/1008

#include <stdio.h>

int a, b;

void input(){
    scanf("%d %d", &a, &b);
}

void solution(int a, int b){
    printf("%.9f", (double)a / b);
}

int main(){
    input();
    solution(a, b);

    return 0;
}