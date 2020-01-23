// https://www.acmicpc.net/problem/10817

#include <stdio.h>

int a, b, c;
int n;

void input(){
    scanf("%d %d %d", &a, &b, &c);
}

void solution(){
    if(a > b){
        if(a > c){
            if(b > c){
                printf("%d", b);
            }
            else{
                printf("%d", c);
            }
        }
        else{
            printf("%d", a);
        }
    }
    else if(b > c){
        if(a > c){
            printf("%d", a);
        }
        else{
            printf("%d", c);
        }
    }
    else{
        printf("%d", b);
    }
}


int main(){
    input();
    solution();

    return 0;
}