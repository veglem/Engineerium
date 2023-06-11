#include <iostream>
#include <unordered_set>
#include <string>

void Unordered_set() {
    std::unordered_set<std::string> mySet; // Создание пустого unordered_set

    mySet.insert("один"); // Добавление элементов в unordered_set
    mySet.insert("два");
    mySet.insert("три");

    std::cout << "Количество элементов в unordered_set: " << mySet.size() << std::endl; // Получение текущего размера unordered_set

    std::cout << "Элемент 'два' существует? " << (mySet.count("два") > 0 ? "Да" : "Нет") << std::endl; // Проверка наличия элемента

    auto it = mySet.find("два");

    std::cout << "Элемент 'два': " << *it << std::endl;

    mySet.erase("три"); // Удаление элемента из unordered_set

    std::cout << "Элемент 'три' существует? " << (mySet.count("три") > 0 ? "Да" : "Нет") << std::endl; // Проверка наличия элемента

}
