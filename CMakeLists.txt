find_package(CGAL)
find_package(CGAL REQUIRED COMPONENTS Core)
add_executable(binary/main source/main.cpp)
target_link_libraries(binary/main CGAL::CGAL CGAL::CGAL_Core)