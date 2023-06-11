# [Контейнеры](../readme.md)
## unordered_map и unordered_multimap

Контейнер "unordered_map" в языке C++ является частью стандартной библиотеки и представляет собой ассоциативный
контейнер, который хранит пары ключ-значение. Ключи в "unordered_map" уникальны, и доступ к значениям осуществляется по
ключу. Он реализован как хеш-таблица, что обеспечивает эффективный доступ к данным.

Контейнер "unordered_multimap" отличается от "unordered_map" тем, что по одному ключу может находиться несколько значений

### Хэш-таблица

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/d/d0/Hash_table_5_0_1_1_1_1_1_LL.svg/380px-Hash_table_5_0_1_1_1_1_1_LL.svg.png" alt="Хэш-таблица" style="background: aliceblue">

### Методы

* `operator[] (key)` Возвращает значение по указанному ключу. Если ключ не существует, создает новый элемент с этим
  ключом и возвращает ссылку на его значение. (Этот оператор не определен для `unordered_multimap`)
* `insert(pair)` Вставляет пару ключ-значение в unordered_map.
* `erase(key)` Удаляет элемент с указанным ключом из unordered_map.
* `size()` Возвращает текущий размер unordered_map (количество элементов).
* `count(key)` Проверяет, существует ли элемент с указанным ключом в unordered_map. Возвращает количество элементов с
  данным ключом (0 или 1 для `unordered_map`).
* `empty()` Проверяет, является ли unordered_map пустым. Возвращает true, если unordered_map пуст, и false в противном
  случае.

Важно отметить, что порядок элементов в "unordered_map" и "unordered_multimap" не гарантирован. Это означает, что элементы могут быть
возвращены в произвольном порядке при итерации.


### Пример unordered_map
```c++
#include <unordered_map>
...
std::unordered_map<int, std::string> myMap; // Создание пустого unordered_map

myMap[1] = "один"; // Добавление элементов в unordered_map
myMap[2] = "два";
myMap[3] = "три";

std::cout << "Значение для ключа 2: " << myMap[2] << std::endl; // Получение значения по ключу

myMap.erase(3); // Удаление элемента по ключу

std::cout << "Количество элементов в unordered_map: " << myMap.size() << std::endl; // Получение текущего размера unordered_map

std::cout << "Ключ 1 существует? " << (myMap.count(1) > 0 ? "Да" : "Нет") << std::endl; // Проверка наличия ключа
```

### Пример unordered_multimap
```c++
#include <unordered_map>
...
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
```
