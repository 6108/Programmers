//�ڸ��� ���ϱ�
#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    answer += solution(n % 10);
    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    cout << "Hello Cpp" << endl;

    return answer;
}