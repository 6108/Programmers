//두 수의 나눗셈
//(float)형변환으로 소수점까지 나오게 함
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    float div = (float)num1 / (float)num2;
    int answer = div * 1000;
    return answer;
}