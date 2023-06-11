#include <iostream>
#include <stack>

void Stack() {
    std::stack<int> myStack; // Создание пустого стека

    myStack.push(10); // Добавление элемента в стек
    myStack.push(20);
    myStack.push(30);

    std::cout << "Верхний элемент стека: " << myStack.top() << std::endl; // Получение верхнего элемента стека

    myStack.pop(); // Удаление верхнего элемента стека

    std::cout << "Размер стека: " << myStack.size() << std::endl; // Получение текущего размера стека

    std::cout << "Стек пустой? " << (myStack.empty() ? "Да" : "Нет") << std::endl; // Проверка, является ли стек пустым

}
