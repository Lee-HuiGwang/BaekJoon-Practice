#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter numbers (0 to stop):" << endl; // ����ڿ��� �ȳ� �޽���

    while (cin >> n) { // cin�� ���������� �۵��ϴ��� Ȯ��
        if (n == 0) break; // 0�� �ԷµǸ� ���� ����
        cout << "You entered: " << n << endl; // �Էµ� �� ���
    }

    cout << "Program finished." << endl; // ���α׷� ���� �޽���
    return 0;
}