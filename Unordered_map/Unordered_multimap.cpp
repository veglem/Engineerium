#include <iostream>
#include <unordered_map>
#include <string>

void Unordered_multimap() {
    std::unordered_multimap<int, std::string> myMultimap; // �������� ������� unordered_multimap

    myMultimap.insert({1, "����"}); // ���������� ��������� � unordered_multimap
    myMultimap.insert({2, "���"});
    myMultimap.insert({2, "������"});
    myMultimap.insert({3, "���"});

    std::cout << "���������� ��������� � ������ 2: " << myMultimap.count(2) << std::endl; // ��������� ���������� ��������� � ��������� ������

// �������� �� unordered_multimap
    for (const auto& pair : myMultimap) {
        std::cout << "����: " << pair.first << ", ��������: " << pair.second << std::endl;
    }

    myMultimap.erase(2); // �������� ���� ��������� � ��������� ������

    std::cout << "���������� ��������� � ������ 2 ����� ��������: " << myMultimap.count(2) << std::endl; // �������� ���������� ��������� ����� ��������

}
