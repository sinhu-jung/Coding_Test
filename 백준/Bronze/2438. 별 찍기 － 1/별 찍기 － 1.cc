#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int a = 0;
	cin >> a;
	for(int i = 0; i < a; i++) {
		for (int j = 0; j < i + 1; j++ ) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}