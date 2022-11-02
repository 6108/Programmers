//최빈값 구하기
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int mode = -1;
    int index = 0;
    if (array.size() == 1)
        return array[0];
    for (int i = 0; i < array.size(); i++)
    {
        mode = count(array.begin(), array.end(), array[i]);
        if (answer <= mode)
        {
            index = i;
            answer = mode;
            mode = 0;
        }
    }
    return (answer == mode) ? -1 : array[index];
}

int main()
{
    vector<int> a = {1, 1, 2, 3, 3, 3};
    cout << solution(a);
}