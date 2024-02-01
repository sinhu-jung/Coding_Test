#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string a = my_string;
    for(int i = my_string.size() - 1; i >= 0; i--) {
        answer.push_back(a);
        a.erase(0, 1);
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}