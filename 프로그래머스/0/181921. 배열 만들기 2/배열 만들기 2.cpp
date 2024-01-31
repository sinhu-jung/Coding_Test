#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i = l; i <= r; i++) {
        string a = to_string(i);
        bool b = true;
        for(int j = 0; j < a.size(); j++) {
            if(a[j] != '5' && a[j] != '0') {
                b = false;
            }
        }
        
        if(b) {
            answer.push_back(i);
        }
    }
    
    if(answer.size() == 0) {
        answer.push_back(-1);
    }
    return answer;
}