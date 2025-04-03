#include <ProjectName/MainModule/ModuleHead.hpp>

void Speak() {
    std::cout << "Hello, World!" << std::endl;
}

int main(int argc, char** argv, char** envMap) {
    Speak();
    return 0;
}