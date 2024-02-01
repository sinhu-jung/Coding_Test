#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    for(vector<int> query : queries) {
        string ans = "";
        for(int i = 0; i < query[0]; i++) {
            ans += answer[i];
        }
        
        for(int i = query[1]; i >= query[0]; i--){
            ans += answer[i];
        }
        
        for(int i = query[1] + 1; i < my_string.size(); i++) {
            ans += answer[i];
        }
        answer = ans;
    }
    
    return answer;
}