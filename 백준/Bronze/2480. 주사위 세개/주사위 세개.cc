#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main(void){
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	
	int big = a > b ? a > c ? a : c : b > c ? b : c;
	
	if(a == b && b == c) {
		cout << 10000 + (a * 1000) << endl;
	}
	else if (a == b || a == c) {
		cout << 1000 + (a * 100) << endl;
	}
	else if (b == c) {
		cout << 1000 + (b * 100) << endl;
	}
	else {
		cout << 100 * big << endl;
	}
	return 0;
}