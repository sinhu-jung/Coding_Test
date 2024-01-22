#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> result = num_list;
    int length = num_list.size() - 1;
    result.push_back(num_list[length] > num_list[length - 1] ? num_list[length] - num_list[length - 1] : num_list[length] * 2);
    return result;
}