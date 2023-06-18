#include <bits/stdc++.h>

using namespace std;

// 시간복잡도는 O(n) 의 시간복잡도를 가진다.
vector<string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main() {
    string s = "가나다라 마바사 아자차카 타파하", d = " ";
    vector<string> a = split(s, d);
    for(string b : a) cout << b << "\n";
}