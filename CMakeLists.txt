cmake_minimum_required(VERSION 3.1.0)

project(WorkTestAndStudy)
message("This is a total cmake, please remember write a good comment style!")
message("PROJECT_NAME: "${PROJECT_NAME})
message("CMAKE_CURRENT_BINARY_DIR: "${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG "-g3")

# add asan lib
add_subdirectory(testSanitizer)
# add common
add_subdirectory(common)

#asan option
option(ASAN_SWITCH "if turn on asan" ON) 
if(ASAN_SWITCH)
    message("ASAN is defined,vlaue:${ASAN_SWITCH}")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=leak -fsanitize=address -fno-omit-frame-pointer -static-libasan")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak -fsanitize=address -fno-omit-frame-pointer -static-libasan") 
    add_executable(main_asan main.cpp)
    target_link_libraries(main_asan commonLib testAsanLib)
    # target_compile_definitions(main_asan PRIVATE_HEADER "-fsanitize=leak -fsanitize=address -fno-omit-frame-pointer -static-libasan")
else()
    message("ASAN is not defined")
ENDIF()


# no asan option
add_executable(main main.cpp)
target_link_libraries(main commonLib testAsanLib)

