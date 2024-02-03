#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    bool a = false;
    for(int i = 0; i < num_list.size(); i++) {
        if(num_list[i] < 0){
            answer = i;
            a = true;
            break;
        }
    }
    
    if (!a)
        answer = -1;
    return answer;
}