#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string ageString = to_string(age);
    
    for(int i = 0; i < ageString.size(); i++) {
        answer += (ageString[i] + 49);
    }
    
    return answer;
}