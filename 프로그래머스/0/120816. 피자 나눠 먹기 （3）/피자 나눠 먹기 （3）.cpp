#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    if (slice >= n) {
        return 1;
    }
    int add = n % slice > 0  ? 1 : 0;
    
    return n / slice + add;
}