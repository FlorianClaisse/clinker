cmake_minimum_required (VERSION 3.4)
project (clinker CXX)

# add seqan3 to search path
list (APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../seqan3/build_system")
# add the Sharg Parser to search path
list (APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../sharg-parser/build_system")

# require seqan3 with a version between >=3.0.0 and <4.0.0
find_package (seqan3 3.0 REQUIRED)
find_package (sharg 1.0 REQUIRED)

# build app with seqan3
add_executable (main main.cpp Utils/version.cpp)
target_link_libraries (main seqan3::seqan3 sharg::sharg)