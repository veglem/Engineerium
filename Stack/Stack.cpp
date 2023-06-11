#include <iostream>
#include <stack>

void Stack() {
    std::stack<int> myStack; // �������� ������� �����

    myStack.push(10); // ���������� �������� � ����
    myStack.push(20);
    myStack.push(30);

    std::cout << "������� ������� �����: " << myStack.top() << std::endl; // ��������� �������� �������� �����

    myStack.pop(); // �������� �������� �������� �����

    std::cout << "������ �����: " << myStack.size() << std::endl; // ��������� �������� ������� �����

    std::cout << "���� ������? " << (myStack.empty() ? "��" : "���") << std::endl; // ��������, �������� �� ���� ������

}
