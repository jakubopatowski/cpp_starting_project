file(GLOB PUBLIC_HEADER_LIST CONFIGURE_DEPENDS "${starting_project}/lib/include/*.hpp")
file(GLOB SRC_LIST CONFIGURE_DEPENDS "*.cpp")
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "*.hpp")

set(lib_target "lib_target")

add_library(${lib_target}
    ${PUBLIC_HEADER_LIST}
    ${SRC_LIST}
    ${HEADER_LIST}
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(TARGET ${lib_target} PROPERTY AUTOMOC ON)
target_compile_features(${lib_target} PUBLIC cxx_std_20)

target_include_directories(${lib_target}
    PUBLIC
        ./include
    PRIVATE
        .
)