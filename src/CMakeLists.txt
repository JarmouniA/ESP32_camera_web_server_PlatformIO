# This file was automatically generated for projects
# without default 'CMakeLists.txt' file.

FILE(GLOB_RECURSE APP_SRCS ${CMAKE_SOURCE_DIR}/src/*.c ${CMAKE_SOURCE_DIR}/src/*.cc)

idf_component_register(SRCS ${APP_SRCS})  
                    #EMBED_FILES "${CMAKE_SOURCE_DIR}/www/monitor.html.gz"
                    #            "${CMAKE_SOURCE_DIR}/www/index_ov2640.html.gz"
                    #            "${CMAKE_SOURCE_DIR}/www/index_ov3660.html.gz"
                    #            "${CMAKE_SOURCE_DIR}/www/index_ov5640.html.gz"
                    #            )

target_link_libraries(${COMPONENT_TARGET} "-L ${CMAKE_CURRENT_SOURCE_DIR}/lib")