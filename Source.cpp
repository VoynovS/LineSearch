//Персональный шаблон проекта С++
#include <iostream> // Главная библиотека
#include <stdlib.h>
#include <time.h>
using namespace std; //Подключение пространства имен

template <typename T> int searchIndex(T array[], int lenght, T key, int begin = 0) { //Функция ПЕРВОГО вхождения key в массиве.
	for (int i = begin; i < lenght; i++)
		if (array[i] == key)
			return i;
	return -1; //Во всех функциях, которые занимаются поиском элемента
}

template <typename T> int LastSearchIndex(T array[], int lenght, T key, int begin = -1) {//Фукнция последнего вхождения key в массиве.
	if (begin == -1)//Чтобы фукнция не поределяла сама элемент, то делаем условие, которое определяет, что будет происходить, если данного элемента нет.
		begin = lenght - 1;
	for (int i = begin; i >= 0; i--)
		if (array[i] == key)
			return i;
	return -1;
}

void subWord(char array[], int lenght, char symbol) { //Если ввести символ которого нет, программа определяет сама элемент под индексом -1 (M)
	int symIndex = searchIndex(array, lenght, symbol); 
	if (symIndex == -1)//Чтобы фукнция не поределяла сама элемент, то делаем условие, которое определяет, что будет происходить, если данного элемента нет.
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
	cout << "Изначальный массив:\n[";
	for (int i = 0; i < 10; i++) {
		line[i] = rand() % 10 + 1;
		cout << line[i] << ", ";
	}
	cout << "\b\b]\n";

	cout << "Введите искомое значение: ";
	cin >> n;
	cout << "Индекс введенного числа, начиная с начала массива: " << searchIndex(line, 10, n) << endl; //Если не придать 4 аргумент, то сработает 0, т.к. оно прописано по умолчанию.
	cout << "Индекс введенного числа, начиная с конца: " << LastSearchIndex(line, 10, n) << endl; //Если не придать 4 аргумент, то сработает 9, т.к. оно прописано по умолчанию.*/

	//Задание подслово
	/*char word[8] = {'f', 'u', 'n', 'c', 't', 'i', 'o', 'n'};
	cout << "Изначальный массив:\n";
	for (int i = 0; i < 8; i++)
		cout << word[i];
	cout << endl;
	char mySim;
	cin >> mySim;
	cout << "Подслово: ";
	subWord(word, 8, mySim);
	cout << endl;*/

	return 0;
}