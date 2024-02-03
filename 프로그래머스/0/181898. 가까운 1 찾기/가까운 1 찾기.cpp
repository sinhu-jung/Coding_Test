#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = 0;
    bool a = false;
    
    for(int i = 0; i < arr.size(); i++) {
        if(i < idx) {
            continue;
        }
        
        if(arr[i] == 1) {
            answer = i;
            a = true;
            break;
        }
    }
    
    if(!a) {
        answer = -1;
    }
    return answer;
}