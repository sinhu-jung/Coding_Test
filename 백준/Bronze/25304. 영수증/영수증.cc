#include<iostream>

using namespace std;

int main(void){
	int a = 0, b = 0, result = 0;
	cin >> a >> b;
	
	for(int i = 0; i < b; i++) {
		int c = 0, d = 0;
		cin >> c >> d;
		result += c * d;
	}
	
	if(a == result) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}