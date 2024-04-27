cmake_minimum_required(VERSION 3.29.2)
project(learn-cpp VERSION 0.1.0 LANGUAGES C CXX)

enable_testing()
include(GoogleTest)

add_subdirectory(third_party/googletest)
add_executable(learn-cpp src/main.cpp)
add_executable(tests test/test_main.cpp)

target_link_libraries(tests gtest_main)
gtest_discover_tests(tests) # 実行可能ファイル内のテストを自動的に検出してCTestに登録

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
include(CPack)
# TODO: リンクエラー
