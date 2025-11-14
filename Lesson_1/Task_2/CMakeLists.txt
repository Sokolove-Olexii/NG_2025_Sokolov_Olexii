cmake_minimum_required(VERSION 3.16)

project(Lesson1_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lesson1_2 main.cpp)

include(GNUInstallDirs)
install(TARGETS Lesson1_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
