#include <iostream>
#include <unordered_map>
#include <string>

void Unordered_multimap() {
    std::unordered_multimap<int, std::string> myMultimap; // Создание пустого unordered_multimap

    myMultimap.insert({1, "один"}); // Добавление элементов в unordered_multimap
    myMultimap.insert({2, "два"});
    myMultimap.insert({2, "двойка"});
    myMultimap.insert({3, "три"});

    std::cout << "Количество элементов с ключом 2: " << myMultimap.count(2) << std::endl; // Получение количества элементов с указанным ключом

// Итерация по unordered_multimap
    for (const auto& pair : myMultimap) {
        std::cout << "Ключ: " << pair.first << ", Значение: " << pair.second << std::endl;
    }

    myMultimap.erase(2); // Удаление всех элементов с указанным ключом

    std::cout << "Количество элементов с ключом 2 после удаления: " << myMultimap.count(2) << std::endl; // Проверка количества элементов после удаления

}
