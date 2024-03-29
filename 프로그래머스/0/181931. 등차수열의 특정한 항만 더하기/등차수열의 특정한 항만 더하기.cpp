#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int value = a;
    for (bool i : included) {
        if(i) {
            answer += value;
        }
        value += d;
    }
    return answer;
}