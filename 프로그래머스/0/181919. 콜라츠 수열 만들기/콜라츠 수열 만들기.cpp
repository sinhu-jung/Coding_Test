#include <string>
#include <vector>

using namespace std;

void func(vector<int> &answer, int n) {
    int a = 0;
    if (n == 1) {
        a = 1;
    }
    else if(n % 2 == 0) {
        a = n / 2;
    }
    else {
        a = 3 * n + 1;
    }
    
    answer.push_back(a);
    if( a > 1 )
        func(answer, a);
    return;
}

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    func(answer, n);
    return answer;
}