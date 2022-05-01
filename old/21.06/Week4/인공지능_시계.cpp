#include <iostream>
using namespace std;

int main(){
	int h, m, s;
	int time;
	cin >> h >> m >> s;
	cin >> time;
	time = time + h*60*60 + m * 60 + s;
	h = time / 60 / 60;
	time = time % (60*60);
	h = h % 24;

	m = time / 60;
	time = time % 60;

	s = time;

	cout << h << ' ' << m << ' ' << s;

}
