#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(vector<int> query : queries) {
        int check = 0, min = 1000001;
        for(int i = query[0]; i <= query[1]; i++) {
            if(arr[i] > query[2] && min > arr[i]) {
                min = arr[i];
                check = 1;
            }
        } 
        if(check == 1) answer.push_back(min);
        else answer.push_back(-1);
    }
    return answer;
}