#include <iostream>
#include <unordered_set>
#include <string>

void Unordered_multiset() {
    std::unordered_multiset<std::string> myMultiset; // Создание пустого unordered_multiset

    myMultiset.insert("один"); // Добавление элементов в unordered_multiset
    myMultiset.insert("два");
    myMultiset.insert("два");
    myMultiset.insert("три");

    std::cout << "Количество элементов 'два' в unordered_multiset: " << myMultiset.count("два") << std::endl; // Получение количества элементов с указанным значением

// Итерация по unordered_multiset
    for (const auto& element : myMultiset) {
        std::cout << "Элемент: " << element << std::endl;
    }

    myMultiset.erase("два"); // Удаление всех элементов с указанным значением

    std::cout << "Количество элементов 'два' после удаления: " << myMultiset.count("два") << std::endl; // Проверка количества элементов после удаления

}
