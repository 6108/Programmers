#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    vector <char> mate_number(0);
    int x_num_count;
    int y_num_count;
    for (int i = 9; i >= 0; i--)
    {
        x_num_count = count(X.begin(), X.end(), to_string(i));
        y_num_count = count(Y.begin(), Y.end(), to_string(i));
        if (x_num_count >= y_num_count)
        {
            for (int j = 0; j < y_num_count; j++)
                mate_number.push_back(i);
        }
        else if (x_num_count < y_num_count)
        {
            for (int j = 0; j < x_num_count; j++)
                mate_number.push_back(i);
        }
    }
    string answer(mate_number.begin(), mate_number.end());
    cout << answer;
    return answer;
    //return (mate_number.size() > 0) ? answer : "-1";
}

int main()
{
    solution("12321", "42531");
}