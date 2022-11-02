#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int copy_x = x;
    int sum = 0;
    string s = to_string(x);
    for (int i = 0; i < s.length(); i++)
    {
        sum += copy_x % 10;
        copy_x /= 10;
    }
    return (x % sum) ? false : true;
}