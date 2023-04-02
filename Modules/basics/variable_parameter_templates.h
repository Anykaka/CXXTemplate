//
// Created by lz on 2023/4/2.
//

#ifndef CXXTEMPLATE_VARIABLE_PARAMETER_TEMPLATES_H
#define CXXTEMPLATE_VARIABLE_PARAMETER_TEMPLATES_H

#include <cstdlib>
#include <iostream>

class VariableParameterTemplate {
public:
    static int test(const int argc, const char **argv) {
        if (argc != 2) {
            std::cout << "Input parameters error." << std::endl;
            return EXIT_FAILURE;
        }
        std::cout << "Input parameters is " << argv[1] << std::endl;
        return EXIT_SUCCESS;
    }
};


#endif //CXXTEMPLATE_VARIABLE_PARAMETER_TEMPLATES_H
