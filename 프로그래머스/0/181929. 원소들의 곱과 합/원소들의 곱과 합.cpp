#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int square = 0;
    int multiply = 1;
    
    for(int a : num_list) {
        square += a;
        multiply *= a;
    } 
    
    return (square * square) > multiply ? 1 : 0;
}