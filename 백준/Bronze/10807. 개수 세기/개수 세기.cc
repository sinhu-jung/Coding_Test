#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int a = 0, b = 0;
	int arr[101];
	
	cin >> a;
	for(int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	cin >> b;
	
	int c = 0;
	for(int i = 0; i < a; i++) {
		if(b == arr[i]) ++c;
	}
	
	cout << c << endl;
	return 0;
}