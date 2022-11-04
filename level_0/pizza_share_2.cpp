//ÇÇÀÚ ³ª´² ¸Ô±â (2)
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    while (answer * 6 % n)
        answer++;
    return answer;
}