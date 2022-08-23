#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int n, result = 0, zero = 0;
vector<int> v;

int main(void){
    cin >> n;

    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(tmp == 0){
            zero++;
        }
        else{
            v.push_back(tmp);
        }
    }
    sort(v.begin(), v.end());

    int i = 0;
    while(true){
        if(i>=n-zero){
            break;
        }
        // cout << "i: " << i << ", v[i]: " << v[i] << ", result: " << result << endl;

        if(v[i] < 0){   // 값이 음수라면
            if(((n-zero-i) >= 2) && (v[i+1] < 0)){ // 다음 수가 존재하고, 음수라면
                result += v[i]*v[i+1];
                i += 2;
                continue;
            }
            else{
                if(zero > 0){
                    i++;
                    continue;
                }
                else{
                    result += v[i];
                    i++;
                    continue;
                }
            }
        }
        else{
            if(v[i] == 1){
                result += v[i];
                i++;
                continue;
            }
            else if((n-zero-i)%2==1){ // 뒤에 남은 수가 홀수개라면, 작은 수를 더해주고 짝수를 맞춰주자.
                result += v[i];
                i++;
                continue;
            }
            else{
                result += v[i]*v[i+1];
                i += 2;
                continue;
            }

        }
    }
    cout << result;
}
