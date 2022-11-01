//이상한 문자 만들기
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int index = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            index = 1;
        if (index++ % 2)
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
    }
    return s;
}