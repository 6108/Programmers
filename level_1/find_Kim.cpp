#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer;
    for (int i = 0; i < seoul.size(); i++)
    {
        if ("Kim" == seoul.at(i))
            return  "�輭���� " + to_string(i) + "�� �ִ�";
    }
}