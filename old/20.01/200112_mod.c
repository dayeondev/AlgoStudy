// https://www.acmicpc.net/problem/10430

#include <stdio.h>

int a, b, c;

void input(){
    scanf("%d %d %d", &a, &b, &c);
}

void solution(int a, int b, int c){
    printf("%d\n", (a + b) % c);
    printf("%d\n", (a % c + b % c) % c);
    printf("%d\n", (a * b) % c);
    printf("%d\n", (a % c * b % c) % c);
}

int main(){
    input();
    solution(a, b, c);

    return 0;
}