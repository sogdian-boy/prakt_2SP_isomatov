//8. Поменяйте порядок элементов в одномерном массиве на противоположный (переверните массив).
#include <iostream>

int main() {
    int MAX_SIZE = 100;
    char arr[100];
    int lenght = 0;

    std::cout << "Введите строку(массив без пробелов): ";
    std::cin>>arr;
    while (arr[lenght] != '\0')
    {
        lenght++;
    }
    std::cout << "Исходная строка: " << arr << std::endl;
    std::cout << "Длина: " << lenght << std::endl;

    for (int i=0;i<lenght/2;i++)
    {
        char temp = arr[i];
        arr[i] = arr[lenght - i - 1];
        arr[lenght - 1 - i] = temp;
    }
    std::cout << "Перевернутый массив" << arr << std::endl;
    return 0;
}

