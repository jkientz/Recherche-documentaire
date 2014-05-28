project(RechercheDocumentaire)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(RechercheDocumentaire_SRCS RechercheDocumentaire.cpp main.cpp)
qt4_automoc(${RechercheDocumentaire_SRCS})
add_executable(RechercheDocumentaire ${RechercheDocumentaire_SRCS})
target_link_libraries(RechercheDocumentaire ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
