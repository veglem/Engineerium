#include <iostream>
#include <unordered_set>
#include <string>

void Unordered_multiset() {
    std::unordered_multiset<std::string> myMultiset; // �������� ������� unordered_multiset

    myMultiset.insert("����"); // ���������� ��������� � unordered_multiset
    myMultiset.insert("���");
    myMultiset.insert("���");
    myMultiset.insert("���");

    std::cout << "���������� ��������� '���' � unordered_multiset: " << myMultiset.count("���") << std::endl; // ��������� ���������� ��������� � ��������� ���������

// �������� �� unordered_multiset
    for (const auto& element : myMultiset) {
        std::cout << "�������: " << element << std::endl;
    }

    myMultiset.erase("���"); // �������� ���� ��������� � ��������� ���������

    std::cout << "���������� ��������� '���' ����� ��������: " << myMultiset.count("���") << std::endl; // �������� ���������� ��������� ����� ��������

}
