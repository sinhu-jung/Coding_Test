#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    string data = "";
    int index = 0;
    
    for(int i = 0; i < str_list.size(); i++) {
        if(str_list[i] == "l" || str_list[i] == "r") {
            index = i;
            data = str_list[i];
            break;
        }
    }
    
    if(index > 0 && data == "l") {
        answer.insert(answer.end(), str_list.begin(), str_list.begin() + index);
    }
    else if (index < str_list.size() - 1 && data == "r" ) {
        answer.insert(answer.end(), str_list.begin() + index + 1, str_list.end());
    }
    
    return answer;
}