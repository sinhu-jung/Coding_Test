#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main(void){
	int a = 0, b = 0;
	cin >> a >> b;
	
	b -= 45;
	if(b < 0) {
		--a;
		b += 60;
		if (a == -1) {
			a = 23;
		}
	}
	
	cout << a << " " << b << endl;
	return 0;
}