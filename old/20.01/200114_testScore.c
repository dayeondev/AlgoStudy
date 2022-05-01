//https://www.acmicpc.net/problem/9498

int score;

void input(){
    scanf("%d", &score);
}

void solution(){
    if(score > 89){
        printf("A");
    }
    else if(score > 79){
        printf("B");
    }
    else if(score > 69){
        printf("C");
    }
    else if(score > 59){
        printf("D");
    }
    else{
        printf("F");
    }
    
}

int main(){
    input();
    solution();
    
    return 0;
}