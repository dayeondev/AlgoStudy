// https://www.acmicpc.net/problem/2884

#include <stdio.h>

int hours, minutes;

void input(){
    scanf("%d %d", &hours, &minutes);
}

void solution(){
    int _hours, _minutes;
    _minutes = hours * 60 + minutes - 45;

    if(_minutes < 0){
        _minutes = _minutes + 24 * 
        60;
    }
    _hours = _minutes / 60;
    _minutes = _minutes % 60;
    
    printf("%d %d", _hours, _minutes);
}

int main(){
    input();
    solution();

    return 0;
}