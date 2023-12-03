#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int maxPeople;
	cout << "�� ���� ���� �Է��϶�: ";
	cin >> maxPeople;

	vector<string> names;
	vector <int> ages;
	for (int i = 0; i < maxPeople; i++) {
		string name;
		int age;

		cout << "��� " << i + 1 << "�� �̸�: ";
		cin >> name;
		names.push_back(name); // push_back�Լ��� ����Ͽ� ���� �迭�� ũ�⸦ �ڵ����� ����

		cout << "��� " << i + 1 << "�� ����: ";
		cin >> age;
		ages.push_back(age); 
	}

	int ageThreshold;
	cout << "Ư�� ���� �̻��� ����� ã������ ���̸� �Է��ϼ���:";
	cin >> ageThreshold;
	cout << ageThreshold << "�� �̻��� ����:\n";
	int detectedPeople = 0;

	
	for (int j = 0; j < ages.size(); j++) // ages.size()�� ������ ���� ũ�⸦ ��ȯ�ϴ� �Լ�
	{
		// ageThreshold�� age���� �۰ų� ũ�Եȴٸ� ��µȴ�.
		//if (ageThreshold <= ages[j])
		if (j < names.size() && ageThreshold <= ages[j]) {
			cout << names[j] << " ("<<ages[j]<<"��)\n";
			detectedPeople ++;
		}

	}
	// ���� detectedPeople�� 0�� ���ٸ� ��µȴ�.
	if (detectedPeople == 0) {
		cout << ageThreshold << "�̻��� ���̸� ���� ���� �����ϴ�";

	}
	return 0;

	

	

}
