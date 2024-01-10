#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int c = stoi(to_string(a) + to_string(b));
    int d = stoi(to_string(b) + to_string(a));
    return c >= d ? c : d;
}