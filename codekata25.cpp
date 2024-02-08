#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(auto num: arr) {
        if(num%divisor==0) {
            answer.push_back(num);
        }
    }
    
    sort(answer.begin(), answer.end());
    if(answer.size()==0) {
        answer.push_back(-1);
    }

    return answer;
}