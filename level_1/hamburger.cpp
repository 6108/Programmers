//�ܹ��� �����
//�ð� �ʰ� �ʹ� �� ��
//�� �����ϰ� �� �� ���� �� ����(�ƴ�)
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string s;
    for (int i = 0; i < ingredient.size(); i++)
    {
        if (ingredient[i] == 1)
        {
            s ="";
            for (int j = i; j < i + 4; j++)
                s += to_string(ingredient[j]);
            if (s == "1231")
            {
                for (int j = i; j < i + 4; j++)
                    ingredient.erase(ingredient.begin() + i);
                answer++;
                i -= 4;
                if (i < 0)
                    i = -1;
            }
        }
    }  
    return answer;
}