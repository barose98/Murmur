cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(murmur)
find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0) 
pkg_check_modules(CAIROMM cairomm-1.0) 


include_directories(${GTKMM_INCLUDE_DIRS} ${CAIROMM_INCLUDE_DIRS} ./include)

file(GLOB SOURCES "src/*.cpp")

add_executable(murmur ${SOURCES})

configure_file("murmur.glade" "murmur.glade"  COPYONLY)

set_property(TARGET murmur PROPERTY CXX_STANDARD 17)
target_link_libraries(murmur ${GTKMM_LINK_LIBRARIES}  stdc++fs pthread)
# TODO: Run -Werror in CI.
target_compile_options(murmur PRIVATE -Wall -Wextra)
