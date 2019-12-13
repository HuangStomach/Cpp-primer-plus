#include <iostream>

int main(int argc, char const *argv[]) {
    char ch;
    std::cout << "Type." << std::endl;
    std::cin.get(ch);

    while (ch != '.') {
        if (ch == '\n') std::cout << ch;
        else std::cout << ++ch;
        std::cin.get(ch);
    }
    std::cout << "\nPlease excuse the slight confusion" << std::endl;

    return 0;
}
