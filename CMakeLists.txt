cmake_minimum_required(VERSION 3.24)
project(Ass4)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ass4 main.cpp LangfordSeq.h LangfordPar.h)
find_package("TBB")
target_link_libraries(Ass4 TBB::tbb)