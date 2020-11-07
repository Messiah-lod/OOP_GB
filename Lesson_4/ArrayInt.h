#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert> //для assert


class ArrayInt {
private:
	int m_lenght;
	int* m_data;
	void merge(int *arr, int first, int mid, int last);//слияние разделенных элементов в один массив для sort
	void mergeSort(int *arr, int first, int last);
public:
	ArrayInt() : m_lenght(0), m_data(nullptr) {};
	ArrayInt(int lenght);
	~ArrayInt();
	void erase();
	int getLenght() const;
	int &operator[](int index);//возврат по ссылке, чтобы работать именно с элементом массива, а не с его копией
	void resize(int newLenght);
	void insertBefore(int value, int index);
	void push_back(int value);
	void pop_back(); // для удаления последнего элемента массива(аналог функции в векторах)
	void pop_front(); //для удаления первого элемента массива(аналог  в векторах)
	void sort();	//	для сортировки массива
	void print() const; //	для вывода на экран элементов.

};