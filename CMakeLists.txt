#http://developer.qt.nokia.com/quarterly/view/using_cmake_to_build_qt_projects

PROJECT(teste_qt)
FIND_PACKAGE(Qt4 REQUIRED)

SET(hello_cmake_SOURCES main.cpp mainwindow.cpp)
SET(hello_cmake_HEADERS mainwindow.h)
SET(hello_cmake_FORMS mainwindow.ui)
SET(hello_cmake_RESOURCES resources.qrc)

QT4_WRAP_CPP(hello_cmake_HEADERS_MOC ${hello_cmake_HEADERS} )
QT4_WRAP_UI( hello_cmake_FORMS_HEADERS ${hello_cmake_FORMS} )
QT4_ADD_RESOURCES(hello_cmake_RESOURCES_RCC ${hello_cmake_RESOURCES})

INCLUDE( ${QT_USE_FILE} )
ADD_DEFINITIONS( ${QT_DEFINITIONS} )

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})
#INCLUDE_DIRECTORIES(/Users/guiga/Documents/workspace/hello_cmake_lib)
#LINK_DIRECTORIES(/Users/guiga/Documents/workspace/hello_cmake_lib/build)

ADD_EXECUTABLE( hello_qt ${hello_cmake_SOURCES}
                        ${hello_cmake_HEADERS_MOC}
                        ${hello_cmake_FORMS_HEADERS}
                        ${hello_cmake_RESOURCES_RCC})

TARGET_LINK_LIBRARIES( hello_qt ${QT_LIBRARIES} )# mylib)

