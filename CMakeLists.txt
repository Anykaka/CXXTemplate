cmake_minimum_required(VERSION 3.25)
project(CXXTemplate)

include_directories(
        ${PROJECT_SOURCE_DIR}/Modules
)

set(CMAKE_CXX_STANDARD 14)

set(BASICS_SOURCE
        ${PROJECT_SOURCE_DIR}/Modules/basics/func_templates.cpp
        ${PROJECT_SOURCE_DIR}/Modules/basics/func_templates.h

        ${PROJECT_SOURCE_DIR}/Modules/basics/variable_parameter_templates.cpp
        ${PROJECT_SOURCE_DIR}/Modules/basics/variable_parameter_templates.h

        )

set(CXXTemplate_SOURCE
        ${PROJECT_SOURCE_DIR}/main.cpp
        ${BASICS_SOURCE}
        )

add_executable(CXXTemplate ${CXXTemplate_SOURCE})
