// https://www.acmicpc.net/problem/2753
#include <stdio.h>

int year;

void input(){
    scanf("%d", &year);
}

void solution(){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("1");
    }
    else{
        printf("0");
    }
}

int main(){
    input();
    solution();

    return 0;
}