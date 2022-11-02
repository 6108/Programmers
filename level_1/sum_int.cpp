//두 정수 사이의 합
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (a <= b)
    {
        for (int i = a; i <= b; i++)
            answer += a;
    }
    else
    {
        for (int i = a; i >= b; i--)
            answer += a;
    }
    return answer;
}