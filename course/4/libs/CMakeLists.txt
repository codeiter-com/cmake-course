add_library(
    HelloLibrary
    "${CMAKE_CURRENT_SOURCE_DIR}/hello/hello-library.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/hello/hello-library.cpp"
)

target_include_directories(HelloLibrary PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_compile_definitions(HelloLibrary PRIVATE HELLO_VERSION=1.1)