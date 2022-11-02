#include<bits/stdc++.h>
#define MAX 1001

using namespace std;

int n;
int arr[MAX];
int dp[MAX];
int result = 1;

int main(void){
    cin >> n;
    for(int i = 1; i < n+1; i++){
        cin >> arr[i];
        dp[i] = 1;
    }

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < i; j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[j]+1, dp[i]);
            }
        }
        result = max(result, dp[i]);
    }
    cout << result << endl;
}




























// #include<bits/stdc++.h>
// #define MAX 1001

// using namespace std;

// int n;
// int arr[MAX];
// int dp[MAX];
// int result = 0;

// int main(void){
//     cin >> n;
//     for(int i = 1; i < n+1; i++){
//         cin >> arr[i];
//         dp[i] = 1;
//     }

//     for(int i = 1; i < n+1; i++){
//         for(int j = 1; j < i; j++){
//             if(arr[j]<arr[i]){
//                 dp[i] = max(dp[i], dp[j]+1);
//             }
//         }
//         result = max(result, dp[i]);
//     }
//     cout << result << endl;
// }#include<bits/stdc++.h>
// #define MAX 1001

// using namespace std;

// int n;
// int arr[MAX];
// int dp[MAX];
// int result = 0;

// int main(void){
//     cin >> n;
//     for(int i = 1; i < n+1; i++){
//         cin >> arr[i];
//         dp[i] = 1;
//     }

//     for(int i = 1; i < n+1; i++){
//         for(int j = 1; j < i; j++){
//             if(arr[j]<arr[i]){
//                 dp[i] = max(dp[i], dp[j]+1);
//             }
//         }
//         result = max(result, dp[i]);
//     }
//     cout << result << endl;
// }
