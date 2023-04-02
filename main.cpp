#include <cstdlib>
#include "basics/func_templates.h"
#include "basics/variable_parameter_templates.h"

int main(int argc, char **argv) {
    VariableParameterTemplate::test(argc, (const char **) argv);
    return EXIT_SUCCESS;
}