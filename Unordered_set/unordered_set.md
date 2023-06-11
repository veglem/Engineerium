# [Контейнеры](../readme.md)

## unordered_set и unordered_multiset

Контейнер "unordered_set" в языке C++ является частью стандартной библиотеки и представляет собой контейнер, который
хранит уникальные элементы в неупорядоченном виде. Он реализован как хеш-таблица, что обеспечивает эффективный доступ к
данным.

Контейнер "unordered_multiset" отличается от "unordered_set" тем, что его элементы не уникальны, т.е. может быть
несколько одинаковых элементов

### Множество

![Множество](https://upload.wikimedia.org/wikipedia/commons/3/37/Example_of_a_set.svg)

### Методы

* `insert(element)` Вставляет элемент в unordered_set.
* `erase(element)` Удаляет элемент из unordered_set.
* `size()` Возвращает текущий размер unordered_set (количество элементов).
* `count(element)` Проверяет, существует ли элемент в unordered_set. Возвращает количество элементов с данным
  значением (0 или 1).
* `find(element)` Ищет элемент в unordered_set. Возвращает итератор на найденый элемент или iterator.end() если элемент
  не найден.
* `empty()` Проверяет, является ли unordered_set пустым. Возвращает true, если unordered_set пуст, и false в противном
  случае.

Важно отметить, что порядок элементов в "unordered_set" не гарантирован. Это означает, что элементы могут быть
возвращены в произвольном порядке при итерации по unordered_set.

### Пример unordered_set
```c++
#include <unordered_set>
...
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
```

### Пример unordered_multiset
```c++
#include <unordered_set>
...
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
```