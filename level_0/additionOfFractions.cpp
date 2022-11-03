//ºĞ¼öÀÇ µ¡¼À
#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b) {
    int c = a % b;
    while (c)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    int denominator = denum1 * num2 + denum2 * num1;
    int numerator = num1 * num2;         
    return gcd(denominator, numerator);
}

