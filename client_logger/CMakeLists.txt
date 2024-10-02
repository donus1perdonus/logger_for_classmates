# Create a library for pr1
add_library(client_logger
    src/client_logger_builder.cpp
    src/client_logger.cpp
    # Add other source files here
)

# Указываем заголовочные файлы
target_include_directories(client_logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Связываем client_logger с logger
target_link_libraries(client_logger PRIVATE logger)