#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    //1´Ü°è
    for (int i = 0; i < new_id.length(); i++)
    {
        if (new_id[i] >= 65 && new_id[i] <= 90)
            new_id[i] += 32;
        if (!((new_id[i] >= 97 && new_id[i] <= 122) || (new_id[i] >= 48 && new_id[i] <= 57) || new_id[i] == '_' || new_id[i] == '-' || new_id[i] == '.'))
            new_id[i] = null;
    }   
    return new_id;
}