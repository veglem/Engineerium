#include <iostream>
#include <unordered_map>
#include <string>

void Unordered_map() {
    std::unordered_map<int, std::string> myMap; // Создание пустого unordered_map

    myMap[1] = "один"; // Добавление элементов в unordered_map
    myMap[2] = "два";
    myMap[3] = "три";

    std::cout << "Значение для ключа 2: " << myMap[2] << std::endl; // Получение значения по ключу

    myMap.erase(3); // Удаление элемента по ключу

    std::cout << "Количество элементов в unordered_map: " << myMap.size() << std::endl; // Получение текущего размера unordered_map

    std::cout << "Ключ 1 существует? " << (myMap.count(1) > 0 ? "Да" : "Нет") << std::endl; // Проверка наличия ключа
}
