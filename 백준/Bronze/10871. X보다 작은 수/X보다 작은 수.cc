#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int a = 0, b = 0, c = 0;
	
	cin >> a >> b;
	
	for(int i = 0; i < a; i++) {
		cin >> c;
		if(c < b) {
			cout << c << " ";
		}
	}
	

	return 0;
}