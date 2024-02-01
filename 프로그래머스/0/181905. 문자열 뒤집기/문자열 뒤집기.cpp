#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    string a = "";
    
    for(int i = e; i >= s; i--) {
        a += my_string[i];
    }
    
    for (int i = 0; i < my_string.size(); i++) {
        if(i >= s && i <= e) {
            answer += a[0];
            a.erase(0, 1);
        }
        else 
            answer += my_string[i];
    }
    
    return answer;
}