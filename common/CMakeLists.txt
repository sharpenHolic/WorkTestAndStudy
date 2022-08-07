# ./testSanitizer/CMakeLists.txt
aux_source_directory(.  commonLib)
include_directories(${PROJECT_SOURCE_DIR}/common)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# ------ dynamic-link-library ------
add_library(commonLib_shared SHARED ${commonLib})
message("LIBRARY_OUTPUT_PATH: "${LIBRARY_OUTPUT_PATH})

# ------ static-link-library ------
add_library(commonLib STATIC ${commonLib})
message("LIBRARY_OUTPUT_PATH: "${LIBRARY_OUTPUT_PATH})

# -- link other 3rd-party lib to this lib if need
# target_link_libraries(commonLib ${testAsanLib})