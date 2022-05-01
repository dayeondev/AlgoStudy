#include <iostream>
using namespace std;


int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  /*
  A. 모든 버튼을 사용했을 때의 결과
    1. 앞자리부터 없애야한다.
      ㄱ. (n + i), (n - i), i++, (n + i), (n - i)로 접근해야하는데.. 양수와 음수를 모두 구한 후 다음 자리의 수와 가까운 수를 선택
      ㄴ. 반복
    2. 나머지는 +버튼으로 수행
  
  B. 플마 버튼만 사용했을 때의 결과
    1. abs(100 - n)

  */

  int n, m;
  int tmp;
  int close_num[2];
  bool isAlive[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    cin >> tmp;
    isAlive[tmp] = 0;
  }
  char nums[6] = {0, };
  char length;

  // //check input
  // for(int i = 0; i < 10; i++){
  //   cout << isAlive[i];
  // }

  // 숫자 한 자리씩 분리하기
  tmp = n;
  for(int i = 0; i < 6; i++){
    nums[i] = tmp % 10;
    tmp /= 10;
    if(tmp == 0){
      length = i + 1;
    }
  }

  while(true){

  }




  return 0;
}