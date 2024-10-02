# Create a library for pr2
add_library(logger
    src/logger.cpp
    src/logger_builder.cpp
    src/logger_guardant.cpp
    # Add other source files here
)

# Указываем заголовочные файлы
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)