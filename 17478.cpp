#include <iostream>

using namespace std;
int recNum;

void recursive(int num){
	for(int i=0; i<num; ++i){
		cout << "____";
	}
	cout << "\"����Լ��� ������?\"\n";

	if (num==recNum){
		for(int i=0; i<num; ++i){
			cout << "____";
		}
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";			
		for(int i=0; i<num; ++i){
			cout << "____";
		}
		cout << "��� �亯�Ͽ���.\n";
		
	}else{
		for(int i=0; i<num; ++i){
			cout << "____";
		}
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		for(int i=0; i<num; ++i){
			cout << "____";
		}
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		for(int i=0; i<num; ++i){
			cout << "____";
		}
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";		
			
		recursive(num+1);
		for(int i=0; i<num; ++i){
			cout << "____";
		}
		cout << "��� �亯�Ͽ���.\n";
	}	
}

int main(){
	cin >> recNum;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recursive(0);
	return 0;
}
