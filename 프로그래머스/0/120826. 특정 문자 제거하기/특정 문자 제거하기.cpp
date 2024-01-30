#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(int i = 0; i < my_string.size(); i++) {
        for(int j = 0; j < letter.size(); j++) {
            if(my_string[i] == letter[j]) {
                break;
            }
            answer += my_string[i];
        }
    }
    return answer;
}