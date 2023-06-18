#include <bits/stdc++.h>

using namespace std;

/**
 * factorial 과 같이 for 문으로 사용 가능한 경우는 
 * for 문을 사용하고 for 문이 사용 안 될 경우 재귀를 사용
*/
int fact_rec(int n) {
    if(n == 1 || n == 0) return 1;
    return n * fact_rec(n - 1);
}

int fact_for(int n) {
    int ret = 1;
    for(int i = 1; i <= n; i++) {
        ret *= i;
    }
    return ret;
}

int fibo(int n) {
    cout << "fibo : " << n << "\n";
    if(n == 0 || n == 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int n = 5;
int main() {
    cout << fact_for(n) << "\n";
    cout << fact_rec(n) << "\n";
    cout << fibo(n) << "\n";
}
