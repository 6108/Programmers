//�� ���� ������
//(float)����ȯ���� �Ҽ������� ������ ��
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    float div = (float)num1 / (float)num2;
    int answer = div * 1000;
    return answer;
}