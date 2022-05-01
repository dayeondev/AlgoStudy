// https://www.acmicpc.net/problem/1330

#include <stdio.h>

int a, b;

void input(){
    scanf("%d %d", &a, &b);
}

void solution(){
    if(a < b){
        printf("<");
    }
    else if(a > b){
        printf(">");
    }
    else{
        printf("==");
    }
}

int main(){
    input();
    solution();

    return 0;
}