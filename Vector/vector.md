# [Контейнеры](../readme.md)

## Stack

Контейнер "vector" в языке C++ является частью стандартной библиотеки и представляет собой динамический массив, который
может изменять свой размер во время выполнения программы. Он предоставляет удобный способ хранения и управления
последовательностью элементов.

### Структура vector

![vector](https://cdn.mycplus.com/mycplus/wp-content/uploads/2018/03/vectors-850x445.jpg)

### Методы

* `push_back(element)` Добавляет элемент в конец vector.
* `pop_back()` Удаляет последний элемент из vector.
* `size()` Возвращает текущий размер vector (количество элементов).
* `empty()` Проверяет, является ли vector пустым. Возвращает true, если vector пуст, и false в противном случае.
* `operator[]` Позволяет получить доступ к элементу vector по его индексу. Обратите внимание, что индексация начинается
  с 0.

Важно отметить, что вектор "vector" предоставляет быстрый доступ к элементам по индексу и поддерживает динамическое
изменение размера. Это позволяет эффективно работать с последовательностью элементов и управлять ее размером в процессе
выполнения программы.

```c++
#include <vector>
...
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
```

### Задание

Реализуйте аналог std::vector.

```c++

template <class T>
class vector {
 private:
  int _size;
  int _capacity;
  T* _arr;

 public:
  explicit vector(int s = 0) {
    
  }

  ~vector() { 
      
  }

  vector(const vector& V) { 
      
  }

  vector& operator=(const vector& V) {
    
  }

  T& front() {
      
  }

  T& back() { 
      
  }

  T& at(int index) { 
      
  }

  T* data() {
      
  }

  void reserve(int newCap) {
    
  }

  T& operator[](int index) const {
      
  }

  void push_back(T t) {
    
  }

  void pop_back() {
      
  }

  void clear() {
    
  }

  void insert(int index, T element) {
    
  }

  int Size() {
      
  }

  int capacity() {
      
  }

  void swap(vector& a) {
    
  }
  
};
```