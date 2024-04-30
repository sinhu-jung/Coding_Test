#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int b = 0, max = 0, index = 0;
	
	for(int i = 0; i < 9; i++) {
		cin >> b;
		if(max < b) {
			max = b;
			index = i + 1;
		}
	}
	
	cout << max << endl;
	cout << index << endl;

	return 0;
}