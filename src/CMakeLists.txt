# This file was automatically generated for projects
# without default 'CMakeLists.txt' file.

FILE(GLOB_RECURSE APP_SRCS ${CMAKE_SOURCE_DIR}/src/*.*)

idf_component_register(SRCS ${APP_SRCS}
                        INCLUDE_DIRS "${CMAKE_SOURCE_DIR}/include"
                        REQUIRES esp32-camera)

target_link_libraries(${COMPONENT_TARGET} "-L ${CMAKE_SOURCE_DIR}/lib")