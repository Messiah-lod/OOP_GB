#include "ArrayInt.h"


	ArrayInt::ArrayInt(int lenght) : m_lenght(lenght) {
		assert(lenght >= 0);//если так, то идем дальше

		if (lenght > 0) {
			m_data = new int[lenght];
			for (size_t i = 0; i < lenght; i++) m_data[i] = 0;
		}
		else m_data = nullptr;
	}

	ArrayInt::~ArrayInt() {
		delete[] m_data; 
	}

	void ArrayInt::erase() {
		delete[] m_data;
		m_data = nullptr;
		m_lenght = 0;
	}

	int ArrayInt::getLenght() const {
		return m_lenght;
	}

	int& ArrayInt::operator[](int index) {//возврат по ссылке, чтобы работать именно с элементом массива, а не с его копией
		assert(index >= 0 && index < m_lenght);
		return m_data[index];
	}

	void ArrayInt::resize(int newLenght) {
		if (newLenght == m_lenght) return;
		if (newLenght <= 0) {
			erase();
			return;
		}
		int* data = new int[newLenght];
		if (m_lenght > 0) {
			int elementsToCopy = (newLenght > m_lenght) ? m_lenght : newLenght;
			for (size_t i = 0; i < elementsToCopy; i++)
			{
				data[i] = m_data[i];
			}

			if (newLenght > m_lenght) {
				for (size_t i = elementsToCopy; i < newLenght; i++)
					data[i] = 0;
			}

			delete[] m_data;
			m_data = data;
			m_lenght = newLenght;
		}
	}

	void ArrayInt::insertBefore(int value, int index)
	{
		// Проверка корректности передаваемого индекса
		assert(index >= 0 && index <= m_lenght);

		// Создаем новый массив на один элемент больше старого массива
		int *data = new int[m_lenght + 1];

		// Копируем все элементы до index-а
		for (int before = 0; before < index; ++before)
			data[before] = m_data[before];

		// Вставляем новый элемент в новый массив
		data[index] = value;

		// Копируем все значения после вставляемого элемента
		for (int after = index; after < m_lenght; ++after)
			data[after + 1] = m_data[after];

		// Удаляем старый массив и используем вместо него новый 
		delete[] m_data;
		m_data = data;
		++m_lenght;
	}

	void ArrayInt::push_back(int value) { 
		insertBefore(value, m_lenght); 
	}

	void ArrayInt::pop_back()
	{
		// Создаем новый массив на один элемент меньше старого массива
		int *data = new int[m_lenght - 1];
		// Копируем все элементы до index-а
		for (int it = 0; it < m_lenght-1; ++it)
			data[it] = m_data[it];
		// Удаляем старый массив и используем вместо него новый 
		delete[] m_data;
		m_data = data;
		--m_lenght;
	}

	void ArrayInt::pop_front()
	{
		// Создаем новый массив на один элемент меньше старого массива
		int *data = new int[m_lenght - 1];
		// Копируем все элементы до index-а
		for (int it = 1; it < m_lenght; ++it)
			data[it-1] = m_data[it];
		// Удаляем старый массив и используем вместо него новый 
		delete[] m_data;
		m_data = data;
		--m_lenght;
	}

	void ArrayInt::sort()
	{
		mergeSort(m_data, 0, m_lenght-1);
	}

	void ArrayInt::print() const
	{
		for (size_t i = 0; i < m_lenght; i++)
			std::cout << "[" << m_data[i] << "] ";
		std::cout << std::endl;
	}

	void ArrayInt::merge(int* arr, int first, int mid, int last)//слияние разделенных элементов в один массив для mergeSort
	{
		int l = first;
		int r = mid + 1;
		int *tmp = (int*)malloc(last* sizeof(int));
		int step = 0;
		while (l <= mid && r <= last) {
			if (arr[l] < arr[r]) {
				tmp[step++] = arr[l++];
			}
			else {
				tmp[step++] = arr[r++];
			}
		}
		while (r <= last) {
			tmp[step++] = arr[r++];
		}
		while (l <= mid) {
			tmp[step++] = arr[l++];
		}
		for (int k = 0; k < last - first + 1; ++k)
			arr[first + k] = tmp[k];
	}

	void ArrayInt::mergeSort(int* arr, int first, int last)
	{
		int split;
		if (first < last) {
			split = (first + last) / 2;
			mergeSort(arr, first, split);
			mergeSort(arr, split + 1, last);
			merge(arr, first, split, last);
		}
	}
