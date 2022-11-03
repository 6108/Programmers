//쿠키 구입
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> cookie) {
    int answer = -1;
    
    //총 합 구하기
    int sum = 0;
    for (int i = 0; i < cookie.size(); i++)
        sum += cookie[i];
    //더했을 때 중간에 가까운 값 구하기
    int median = 0;
    int index = 0;
    for (index = 0; index < cookie.size(); index++)
    {
        median += cookie[index];
        if (median >= sum / 2)
            break;
    }
    int older = 0;
    int younger = 0;
    for (int i = index + 1; i < cookie.size(); i++)
        younger += cookie[i];
    cout << sum << ", " << younger;
    for (index; index >= 0; index--)
    {
        older += cookie[index];
        if (younger == older)
            return older;
    }
    return 0;
}

int main()
{
    vector<int> c = {20, 1, 1, 2, 7};
    solution(c);
}