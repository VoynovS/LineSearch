//������������ ������ ������� �++
#include <iostream> // ������� ����������
#include <stdlib.h>
#include <time.h>
using namespace std; //����������� ������������ ����

template <typename T> int searchIndex(T array[], int lenght, T key, int begin = 0) { //������� ������� ��������� key � �������.
	for (int i = begin; i < lenght; i++)
		if (array[i] == key)
			return i;
	return -1; //�� ���� ��������, ������� ���������� ������� ��������
}

template <typename T> int LastSearchIndex(T array[], int lenght, T key, int begin = -1) {//������� ���������� ��������� key � �������.
	if (begin == -1)//����� ������� �� ���������� ���� �������, �� ������ �������, ������� ����������, ��� ����� �����������, ���� ������� �������� ���.
		begin = lenght - 1;
	for (int i = begin; i >= 0; i--)
		if (array[i] == key)
			return i;
	return -1;
}

void subWord(char array[], int lenght, char symbol) { //���� ������ ������ �������� ���, ��������� ���������� ���� ������� ��� �������� -1 (M)
	int symIndex = searchIndex(array, lenght, symbol); 
	if (symIndex == -1)//����� ������� �� ���������� ���� �������, �� ������ �������, ������� ����������, ��� ����� �����������, ���� ������� �������� ���.
		cout << "ERROR";
	else
		for (int i = symIndex; i < lenght; i++)
			cout << array[i];
}

int main() {

	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n;

	/*int line[10];
	cout << "����������� ������:\n[";
	for (int i = 0; i < 10; i++) {
		line[i] = rand() % 10 + 1;
		cout << line[i] << ", ";
	}
	cout << "\b\b]\n";

	cout << "������� ������� ��������: ";
	cin >> n;
	cout << "������ ���������� �����, ������� � ������ �������: " << searchIndex(line, 10, n) << endl; //���� �� ������� 4 ��������, �� ��������� 0, �.�. ��� ��������� �� ���������.
	cout << "������ ���������� �����, ������� � �����: " << LastSearchIndex(line, 10, n) << endl; //���� �� ������� 4 ��������, �� ��������� 9, �.�. ��� ��������� �� ���������.*/

	//������� ��������
	/*char word[8] = {'f', 'u', 'n', 'c', 't', 'i', 'o', 'n'};
	cout << "����������� ������:\n";
	for (int i = 0; i < 8; i++)
		cout << word[i];
	cout << endl;
	char mySim;
	cin >> mySim;
	cout << "��������: ";
	subWord(word, 8, mySim);
	cout << endl;*/

	return 0;
}