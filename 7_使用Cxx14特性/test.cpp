#include <string>
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<std::string> str = std::make_unique<std::string>("CMake高级教程");

    std::cout << str->c_str();

    return 0;
}
