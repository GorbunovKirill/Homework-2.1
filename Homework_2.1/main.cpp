#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::string number;
    std::ifstream read("in.txt");
    read >> number;
    int size_massive_1 = stoi(number);
    int* massive_1 = new int[size_massive_1];
    for (int i = 0; i < size_massive_1; i++) {
        read >> number;
        massive_1[i] = stoi(number);
    }

    read >> number;
    int size_massive_2 = stoi(number);
    int* massive_2 = new int[size_massive_2];
    for (int i = 0; i < size_massive_2; i++) {
        read >> number;
        massive_2[i] = stoi(number);
    }

    std::cout << size_massive_1 << std::endl;

    for (int i = 0; i < size_massive_1; i++) {
        std::cout << massive_1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << size_massive_2 << std::endl;

    for (int i = 0; i < size_massive_2; i++) {
        std::cout << massive_2[i] << " ";
    }

    std::ofstream write("out.txt");
    write << size_massive_2 << std::endl;
    write << massive_2[size_massive_2 - 1] << " ";
    for (int i = 0; i < size_massive_2 - 1; i++) {
        write << massive_2[i] << " ";
    }

    write << std::endl;

    write << size_massive_1 << std::endl;
    for (int i = 1; i < size_massive_1; i++) {
        write << massive_1[i] << " ";
    }
    write << massive_1[0] << " ";


    delete[] massive_1;
    delete[] massive_2;

    write.close();
    read.close();

    std::cout << std::endl;
    system("pause");

    return 0;
}