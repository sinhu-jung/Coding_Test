#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    istringstream iss(my_string);
    string buffer;
    
    while (getline(iss, buffer, ' ')) {
        answer.push_back(buffer);               
    }
    return answer;
}