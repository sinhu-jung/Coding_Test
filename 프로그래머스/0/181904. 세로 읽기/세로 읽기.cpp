#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    vector<vector<char>> a(m);
    int b = 0;
    
    for(int i = 0; i < my_string.size(); i++) {
        a[b].push_back(my_string[i]);
        
        ++b;
        if(b == m) {
            b = 0;
        }
    }
    
    for(int i = 0; i < a[c - 1].size(); i++) {
        answer += a[c - 1][i];
    }
    return answer;
}