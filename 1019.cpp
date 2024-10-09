#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numVector;
    vector<long long> result(10, 0);
    int num = n;
    while(num>0) {
        numVector.push_back(num%10);
        num/=10;
    }

    for(int i=0; i<numVector.size(); i++) {
        long long prev = 10;
        for(int j=0; j<i; j++) prev *= 10;
        long long subs = prev/10;
        prev = n/prev;

        if(prev>0) {
            long long baseSum = prev * subs;
            // 0~prev-1   [0~9]   0~�Ʒ� �ִ�
            for(int j=0; j<10; j++) {
                result[j] += baseSum;
            }
            //���ڸ� 0���� ä������, ���� �ڸ��� 0�� ��� 
            result[0] -= subs;
        }


        //prev  [0~�ڸ��� ��ġ�� �� -1]  0~�Ʒ� �ִ�
        for(int j=0; j<numVector[i]; j++) {
            result[j] += subs;
        }
        if(i==numVector.size()-1) {
            //Ž�� ���� �ڸ��� ���� ���ڸ��� �� 0 ���� ī��Ʈ x
            result[0] -= subs;
        }

        // prev [�ڸ� ��ġ ��] 0~�Ʒ� �ִ�
        result[numVector[i]] += n%subs+1;
    }

    for(int res: result) {
        cout << res << " ";
    }

}