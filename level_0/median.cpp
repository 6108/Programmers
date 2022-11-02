//중앙값 구하기
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    vector<int> answer(0);
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array.size() - 1; j++)
        {
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);
        }
    }
    return array[array.size() / 2];
}