#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    string a = my_string;
    for(int i = 0; i < my_string.size(); i++){
        if(a.compare(is_suffix) == 0) {
            answer = 1;
        }
        a.erase(0, 1);
    }
    return answer;
}