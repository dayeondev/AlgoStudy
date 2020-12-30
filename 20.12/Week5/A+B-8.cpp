#include <iostream>
using namespace std;

int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int T, A, B;
  cin >> T;

  for(int i = 0; i < T; i++){
    cin >> A >> B;
    cout << "Case #" << i+1 << ": " << A << " + " << B << " = " << A + B << '\n';
  }

  return 0;
}