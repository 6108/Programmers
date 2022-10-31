#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i * i <= n; i++)
    {
        // '약수'와 'n을 약수로 나눈 값'이 같으면 둘 중 하나만 더함
        if (i * i == n)
            answer += i;
        // '약수'와 'n을 약수로 나눈 값'을 모두 더함
        else if (n % i == 0)
            answer += i + n / i;
    }
    return answer;
}