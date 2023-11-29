# CMakeList.txt: проект CMake для n1007; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (n1007 "n1007.cpp" "n1007.h" "Bezier_curve.cpp" "Bezier_curve.h" "Data.cpp" "Data.h" "Point.cpp" "Point.h" "Point_2D.cpp" "Point_2D.h" "Point_3D.cpp" "Point_3D.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET n1007 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
