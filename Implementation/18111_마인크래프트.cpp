#include<bits/stdc++.h>
#define MAX 500

using namespace std;

int n, m, b;
int land[MAX][MAX];
int maximum = 0;
pair<long long, int> result;

int main(void){
    cin >> n >> m >> b;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> land[i][j];
            maximum = max(maximum, land[i][j]);
        }
    }

    int volume, over;
    long long time;
    result.first = 500*500*2*256;
    result.second = 0;
    for(int i = maximum; i > -1; i--){
        volume = 0;
        over = 0;
        time = 0;

        // volume, over 구하기
        for(int _i = 0; _i < n; _i++){
            for(int _j = 0; _j < m; _j++){
                if(land[_i][_j]==i){
                    // pass
                }
                else if(land[_i][_j] > i){
                    over += land[_i][_j] - i;
                }
                else if(land[_i][_j] < i){
                    volume += i - land[_i][_j];
                }
            }
        }

        if (volume <= b+over){
            time = over * 2 + volume;
            if(result.first > time){
                result.first = time;
                result.second = i;
            }
            else{
                // pass
            }
        }
    }

    cout << result.first << " " << result.second << '\n';
}
