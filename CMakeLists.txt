cmake_minimum_required(VERSION 3.10)

project(cmake_project_template)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

execute_process(
  COMMAND ${CMAKE_COMMAND} -E create_symlink ${CMAKE_CURRENT_LIST_DIR}/build/compile_commands.json ${CMAKE_CURRENT_LIST_DIR}/compile_commands.json
)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(DIVISIBLE_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(DIVISIBLE_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(DIVISIBLE_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

set(DIVISION_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/division)

# FetchContent_Declare(
#   Eigen3
#   GIT_REPOSITORY https://gitlab.com/libeigen/eigen.git
#   GIT_TAG master
#   GIT_SHALLOW TRUE
#   GIT_PROGRESS TRUE
# )
#
# set(EIGEN_BUILD_DOC OFF)
# set(BUILD_TESTING OFF)
# set(EIGEN_BUILD_PKGCONFIG OFF)
#
# FetchContent_MakeAvailable(Eigen3)
#
# include_directories(${Eigen3_SOURCE_DIR})


include_directories(${DIVISIBLE_INSTALL_INCLUDE_DIR})
include_directories(${DIVISION_HEADERS_DIR})

add_subdirectory(src)
add_subdirectory(test)
