#include <iostream>
using namespace std;

int main(){
	int n;
	int a, b;
	int tmp;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		tmp = 1;
		for(int i = 0; i < b; i++){
			tmp %= 10;
			tmp *= a;
		}
		tmp = (tmp - 1) % 10;
		cout << tmp + 1 << '\n';		
	}
}
