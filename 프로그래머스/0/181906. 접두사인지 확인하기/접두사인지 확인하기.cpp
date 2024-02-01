#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    string a = "";
    for (int i = 0; i < my_string.size(); i++) {
        a += my_string[i];
        if(a.compare(is_prefix) == 0) {
            answer = 1;
        }
    }
    return answer;
}