cmake_minimum_required(VERSION 3.0.0)
project(decorator VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

include(CTest)
enable_testing()

add_library(decorator 
            component.cpp
            concreteComponent.cpp
            decorator.cpp
            concreteDecoratorA.cpp
            concreteDecoratorB.cpp
            concreteDecoratorC.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(GTest REQUIRED)

add_executable(test_decorator test_decorator.cpp)

# Tester includes
target_include_directories(
    test_decorator
    PUBLIC ${GTEST_INCLUDE_DIRS}
)

# Tester libraries
target_link_libraries(
    test_decorator
    decorator
    ${GTEST_LIBRARIES}
)

add_test(NAME test_decorator
    COMMAND test_decorator)
