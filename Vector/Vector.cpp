#include <iostream>
#include <vector>

void Vector() {
    std::vector<int> myVector; // Создание пустого vector

    myVector.push_back(10); // Добавление элементов в конец vector
    myVector.push_back(20);
    myVector.push_back(30);

    std::cout << "Размер vector: " << myVector.size() << std::endl; // Получение текущего размера vector

    std::cout << "Элемент с индексом 1: " << myVector[1] << std::endl; // Доступ к элементу по индексу

    myVector[2] = 40; // Изменение значения элемента

    myVector.pop_back(); // Удаление последнего элемента из vector

    std::cout << "Размер vector после удаления: " << myVector.size() << std::endl; // Получение текущего размера vector

    std::cout << "Vector пустой? " << (myVector.empty() ? "Да" : "Нет") << std::endl; // Проверка, является ли vector пустым
}
