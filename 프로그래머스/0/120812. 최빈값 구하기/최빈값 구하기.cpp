#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int arr[1001] = { 0 };
    
    for(int i : array) {
        arr[i]++;
    }
    
    int max = 0;
    int max_index = 0;
    for(int i = 0; i < 1001; i++) {
        if(max < arr[i]) {
            max = arr[i];
            max_index = i;
        }
    }
    
    int count = 0;
    for(int i = 0; i < 1001; i++) {
        if(max == arr[i]) {
            count++;
        }
    }
    
    return count > 1 ? -1 : max_index;
}