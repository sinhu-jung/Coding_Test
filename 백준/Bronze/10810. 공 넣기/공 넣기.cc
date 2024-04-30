#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int N = 0, M = 0;
	int arr[101] = { 0 };
	int a = 0, b = 0, c = 0;
	
	cin >> N >> M;
	
	for(int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		for(int j = a; j <= b; j++) {
			arr[j] = c;
		}
	}
	
	for(int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}
	

	return 0;
}