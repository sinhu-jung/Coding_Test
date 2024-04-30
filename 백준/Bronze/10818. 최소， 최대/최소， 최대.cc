#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int a = 0, b = 0, min = 1000000, max = -1000000;
	
	cin >> a;
	
	for(int i = 0; i < a; i++) {
		cin >> b;
		if(min > b) {
			min = b;
		}
		
		if( max < b) {
			max = b;	
		}
	}
	
	cout << min << " " << max;

	return 0;
}