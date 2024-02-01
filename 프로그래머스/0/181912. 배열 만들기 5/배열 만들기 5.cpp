#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    vector<int> intData;
    
    for(string str: intStrs) {
        string a = "";
        int b = 0;
        for(int i = s; i < s + l; i++) {
            a += str[i];
        }
        b = stoi(a);
        if(b > k) answer.push_back(b);
    }
    
    return answer;
}