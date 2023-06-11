#include <iostream>
#include <unordered_set>
#include <string>

void Unordered_set() {
    std::unordered_set<std::string> mySet; // �������� ������� unordered_set

    mySet.insert("����"); // ���������� ��������� � unordered_set
    mySet.insert("���");
    mySet.insert("���");

    std::cout << "���������� ��������� � unordered_set: " << mySet.size() << std::endl; // ��������� �������� ������� unordered_set

    std::cout << "������� '���' ����������? " << (mySet.count("���") > 0 ? "��" : "���") << std::endl; // �������� ������� ��������

    auto it = mySet.find("���");

    std::cout << "������� '���': " << *it << std::endl;

    mySet.erase("���"); // �������� �������� �� unordered_set

    std::cout << "������� '���' ����������? " << (mySet.count("���") > 0 ? "��" : "���") << std::endl; // �������� ������� ��������

}
