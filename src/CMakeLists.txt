find_package(fmt CONFIG REQUIRED)

add_library(${PROJECT_NAME}_lib "")

target_sources(${PROJECT_NAME}_lib PUBLIC
    subdir/some_util.cpp
    basic.cpp)

add_executable(${PROJECT_NAME}
    main.cpp)

target_link_libraries(${PROJECT_NAME}
    LINK_PUBLIC 
    fmt::fmt
    ${PROJECT_NAME}_lib)
