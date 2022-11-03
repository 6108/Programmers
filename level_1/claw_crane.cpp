//크레인 인형 뽑기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    //보드 재정렬
    int n = board.size();
    vector<vector<int>> board_2(n, vector<int>(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[n - 1 - j][i] == 0)
                board_2[i].insert(board_2[i].begin(), 0);
            else
                board_2[i].push_back(board[n - 1 - j][i]);
        }
    }
    //상품 뽑고, 2개 붙어있는 애들 개수 세기
    vector<int> prize(0);
    for (int i = 0; i < moves.size(); i++)
    {
        int m = moves[i] - 1;
        prize.push_back(board_2[m].back());
        board_2[m].pop_back();
        cout << ":: " << i << ", " << prize.back() << '\n';
        
        if (prize.back() != 0 && prize.back() == prize[prize.size() - 2])
        {
            answer += 2;
            prize.pop_back();
            prize.pop_back();
        }

    }
    cout << "답" << answer;
    return answer;
}

int main()
{
    vector<vector<int>> b = {{0,0,0,0,0}, 
                            {0,0,1,0,3}, 
                            {0,2,5,0,1}, 
                            {4,2,4,4,2}, 
                            {3,5,1,3,1} };
    vector<int> m = {1,5,3,5,1,2,1,4};
    solution(b , m);
}