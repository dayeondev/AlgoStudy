// https://www.acmicpc.net/problem/10869

#include <stdio.h>

int a, b;

void input(){
    scanf("%d %d", &a, &b);
}

void solution(int a, int b){
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
}

int main(){
    input();
    solution(a, b);

    return 0;
}