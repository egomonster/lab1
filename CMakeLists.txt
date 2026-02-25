cmake_minimum_required(VERSION 3.5)

project(lab1 LANGUAGES C)

add_executable(lab1 main.c)

install(TARGETS lab1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
