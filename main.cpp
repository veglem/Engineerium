#include <filesystem>
#include <iostream>
#include <fstream>

int main(){
    std::filesystem::path folder("../test");
    for( const auto& i : std::filesystem::directory_iterator(folder)){
        std::fstream file(i.path().string());
        std::string temp = file.re
        std::cout << i.path().string() << '\n';
    }
}
