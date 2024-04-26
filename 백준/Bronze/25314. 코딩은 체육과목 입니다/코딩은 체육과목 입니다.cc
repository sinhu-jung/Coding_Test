#include<iostream>

using namespace std;

int main(void){
	int a = 0;
	cin >> a;
	
	a /= 4;
	
	for(int i = 0; i < a; i++) {
		cout << "long ";
	}
	
	cout << "int" << endl;

	return 0;
}