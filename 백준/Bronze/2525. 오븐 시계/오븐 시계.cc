#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main(void){
	int a = 0, b = 0, m = 0, h = 0;
	cin >> a >> b >> m;
	
	h = m / 60;
	m %= 60;
	
	a += h;
	b += m;
	
	if(b > 59) {
		++a;
		b -= 60;
	}
	
	if (a > 23) {
		a -= 24;
	}
	
	cout << a << " " << b << endl;
	return 0;
}