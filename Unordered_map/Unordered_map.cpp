#include <iostream>
#include <unordered_map>
#include <string>

void Unordered_map() {
    std::unordered_map<int, std::string> myMap; // �������� ������� unordered_map

    myMap[1] = "����"; // ���������� ��������� � unordered_map
    myMap[2] = "���";
    myMap[3] = "���";

    std::cout << "�������� ��� ����� 2: " << myMap[2] << std::endl; // ��������� �������� �� �����

    myMap.erase(3); // �������� �������� �� �����

    std::cout << "���������� ��������� � unordered_map: " << myMap.size() << std::endl; // ��������� �������� ������� unordered_map

    std::cout << "���� 1 ����������? " << (myMap.count(1) > 0 ? "��" : "���") << std::endl; // �������� ������� �����
}
