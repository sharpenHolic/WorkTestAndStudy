# ./testSanitizer/CMakeLists.txt
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=leak -fsanitize=address -fno-omit-frame-pointer -static-libasan")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak -fsanitize=address -fno-omit-frame-pointer -static-libasan") 
aux_source_directory(.  testAsanLib)
include_directories(${PROJECT_SOURCE_DIR}/testSanitizer)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# ------ dynamic-link-library ------
add_library(testAsanLib_shared SHARED ${testAsanLib})
message("LIBRARY_OUTPUT_PATH: "${LIBRARY_OUTPUT_PATH})

# ------ static-link-library ------
add_library(testAsanLib STATIC ${testAsanLib})
message("LIBRARY_OUTPUT_PATH: "${LIBRARY_OUTPUT_PATH})

# -- link other 3rd-party lib to this lib if need
# target_link_libraries(myLib <>)