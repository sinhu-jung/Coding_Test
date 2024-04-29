#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int b = 0, c = 0;
	
	
	while(1) {
		cin >> b >> c;
		if(b == 0 && c == 0) break;
		cout << b + c << "\n";
	}

	return 0;
}