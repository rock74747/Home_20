#include <iostream>
#include <algorithm> 
#include <ctime> 


void fill_arr(int arr[], const int lenght, int a, int b) {
    srand(time(NULL));
    for (int i = 0; i < lenght; i++) {
        arr[i] = rand() % (b - a) + a;
    }
}

void print_arr(int arr[], const int length) {
    for (int i = 0; i < length; i++)
        std::cout << arr[i] << ' ';
}

int search_index(int arr[], const int length, int key, int begin = 0) {
    for (int i = begin; i < length; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int search_last_index(int arr[], const int length, int key) {
    for (int i = length - 1; i >= 0; i--)
        if (arr[i] == key)
            return i;
    return -1;
}
int search_last_index(int  arr[], const int length, int  key, int begin) {
    for (int i = begin; i >= 0; i--)
        if (arr[i] == key)
            return i;
    return -1;
}
int arr_min(int arr[], const int length) {
    int min = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] < min)
        min = arr[i]; 
    }
   return min;
}
int arr_max (int arr[], const int length) {
    int max = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n,m;
    int left, right;
    std::cout << "Введите начало диапазона ->";
    std::cin >> left;
    std::cout << "Введите конец диапазона ->";
    std::cin >> right;
    const int size = 20;
    int arr [size]{};
    fill_arr (arr, size, left, right);
    
    print_arr (arr,size);
    

    std::cout << "Введите число для поиска -> ";
    std::cin >> n;
    int index1 = search_index(arr, size, n,6);
    if (index1 != -1)
        std::cout << "Позиция числа в массиве: " <<
        index1 << std::endl;
    else
        std::cout << "Числа нет в массиве! \n";

    
    
    int index2 = search_last_index(arr,size,n);
    if (index2 != -1)
        std::cout << "Позиция последнего вхождения числа в массив: " <<
        index2 << std::endl;
    else
        std::cout << "Числа нет в массиве! \n";

    std::cout << "Минимальное число в массиве: " << arr_min(arr, size) << std::endl;
    std::cout << "Максимальное число в массиве: " << arr_max(arr, size) << std::endl;
    return 0;
}
