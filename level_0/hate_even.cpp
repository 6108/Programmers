//Â¦¼ö´Â ½È¾î¿ä
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2)
            answer.push_back(i);
    }
    return answer;
}