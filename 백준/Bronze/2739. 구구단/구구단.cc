#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main(void){
	int a = 0;
	cin >> a;
	
	for(int i = 1; i < 10; i++) {
		cout << a << " * " << i << " = " << a * i << endl;
	}
	
	return 0;
}