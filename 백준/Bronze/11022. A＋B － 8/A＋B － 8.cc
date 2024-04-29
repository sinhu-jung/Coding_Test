#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a = 0, b = 0, c = 0;
	
	cin >> a;
	
	for(int i = 0; i < a; i++) {
		cin >> b >> c;
		cout << "Case #" << i + 1  << ": " << b << " + " << c << " = " << b + c << "\n";
	}

	return 0;
}