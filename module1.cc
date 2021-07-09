module;

#include <iostream>

export module module1;

export void foo(int argc, char** argv) {
    std::cout << "argc=" << argc << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << "argv[" << i << "]=" << argv[i] << std::endl;
    }
}
