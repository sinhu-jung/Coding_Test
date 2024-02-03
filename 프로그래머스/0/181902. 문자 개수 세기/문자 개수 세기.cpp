#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(char i = 65; i <= 122; i++) {
        int count = 0;
        for(int j = 0; j < my_string.size(); j++) {
            if(i == my_string[j])
                ++count;
        }
        answer.push_back(count);
        if(i == 90) {
            i += 6;
        }
    }
    return answer;
}