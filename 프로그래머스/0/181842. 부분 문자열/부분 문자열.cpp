#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    auto answer = str2.find(str1);
    return answer == string::npos ? 0 : 1;
}