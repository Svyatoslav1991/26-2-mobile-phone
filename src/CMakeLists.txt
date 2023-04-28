cmake_minimum_required (VERSION 3.8)

project ("26-2-mobile-phone")

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable (26-2-mobile-phone "main.cpp" ${MY_INCLUDE_DIR}/functions.h "functions.cpp" ${MY_INCLUDE_DIR}/contact.h "contact.cpp" ${MY_INCLUDE_DIR}/mobilephone.h "mobilephone.cpp" )

target_include_directories(26-2-mobile-phone PUBLIC ${CMAKE_SOURCE_DIR}/include)