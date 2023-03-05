set(CMAKE_C_COMPILER)


add_executable(lab2
        main.cpp
        src/parent.cpp
        include/parent.h
        )

target_include_directories(lab2 PRIVATE include)

add_executable(child1
        src/child1.cpp)

target_include_directories(child1 PRIVATE include)

add_executable(child2
        src/child2.cpp)

target_include_directories(child2 PRIVATE include)