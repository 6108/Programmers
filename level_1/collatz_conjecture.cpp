#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int count = 0;
    for (int i = 0; i < 500; i++)
    {
        if (i > 486)
            cout << i << ", " << num << '\n';
        if (num == 1)
            return count;
        if (num % 2 != 0)
            num = num * 3 + 1;
        else if (num % 2 == 0)
            num /= 2;
        count++;
    }
    return -1;
}

int main()
{
    solution(626331);
}