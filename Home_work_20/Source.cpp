#include <iostream>
#include <cstdlib>
#include <ctime>


// Задача 1.
template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}
// Задача 2.
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}
// Задача 3.
template <typename T>
int search_index(T arr[], const int length, T key, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
}
// Задача 4.
template <typename T>
int search_last_index(T arr[], const int length, T key) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}
// Задача 5.
void arr_min(int arr[], const int length) {
	int min = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < min)
			min = arr[i];
	std::cout << " Минимальный элемент: " << min << std::endl;
}
// Задача 6.
void arr_max(int arr[], const int length) {
	int max = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] > max)
			max = arr[i];
	std::cout << " Максимальный элемент: " << max << std::endl;
}
// Задача 7.
void mean_value(int arr[], const int length) {
	double res = 0;
	double sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	res = sum / length;
	std::cout << "Cреднее арифметическое всех элементов массива = " << res << std::endl;
}
// Задача 8.
template <typename T>
void range(T arr[], const int length, int left, int right) {
	std::cout << "{ ";
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % (right - left) + left;
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b }\n";
}
// Задача 9.
template <typename T>
void count(T arr[], const int length, T key, int counter = 0) {
	for (int i = 0; i < length; i++)
		if (arr[i] == key)
			counter++;
	std::cout << "\n Количество вхождений переданного элемента в массив: " << counter << std::endl;
}
// Задача 10.
void buble_sort(int arr[], const int length) {
	for (int i = length - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
			}
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	const int size1 = 20;
	int arr1[size1];

	// Задача 1, 2
	fill_arr(arr1, size1, -50, 50);
	print_arr(arr1, size1);

	// Задача 3, 4
	std::cout << " Изначальный массив:\n";
	fill_arr(arr1, size1, -50, 50);
	print_arr(arr1, size1);

	std::cout << "Введите число для поиска -> ";
	std::cin >> n;
	int index = search_index(arr1, size1, n);
	if (index != -1)
		std::cout << " Позиция числа: " << index << std::endl;
	else
		std::cout << " Числа нет в массиве.\n";

	int last_index = search_last_index(arr1, size1, n);
	if (last_index != -1)
		std::cout << " Позиция числа: " << last_index << std::endl;
	else
		std::cout << " Числа нет в массиве. \n";

	// Задача 5, 6
	std::cout << " Изначальный массив:\n";
	fill_arr(arr1, size1, -50, 50);
	print_arr(arr1, size1);

	arr_min(arr1, size1);
	print_arr(arr1, size1);
	arr_max(arr1, size1);
	print_arr(arr1, size1);

	// Задача 7.
	std::cout << " Изначальный массив:\n";
	fill_arr(arr1, size1, -50, 50);
	print_arr(arr1, size1);

	mean_value(arr1, size1);
	print_arr(arr1, size1);


	//Задача 8.
	std::cout << " Введите начало диапазона массива - > ";
	std::cin >> n;
	std::cout << " Введите конец диапазона массива - > ";
	std::cin >> m;
	range(arr1, size1, n, m);

	// Задача 9.
	std::cout << "\n Изначальный массив:\n ";
	fill_arr(arr1, size1, -50, 50);
	print_arr(arr1, size1);
	std::cout << "\n Введите элемент для определения количество вхождений в массив - > ";
	std::cin >> n;
	count(arr1, size1, n);
	print_arr(arr1, size1);

	// Задача 10.
	std::cout << " Изначальный массив:\n";
	fill_arr(arr1, size1, -50, 50);
	print_arr(arr1, size1);
	std::cout << " Отсортированный массив:\n";
	buble_sort(arr1, size1);
	print_arr(arr1, size1);

	return 0;
}