# At LEAST 3.9 but newer is better
cmake_minimum_required(VERSION 3.11)

# Assign a name to the project
project(app)

# Load all the source file within the folder src
file(GLOB SOURCE_FILES_APP src/*.cpp src/*.c)

# Define the executable of the application !
add_executable(app1 ${SOURCE_FILES_APP})
add_executable(app2 ${SOURCE_FILES_APP})

# Indicate that the app uses the header files within the folder include.
# Using target_include_directories instead of include_directories enables CMake to
# transitively make available the header files in the projects that depend on this library.
target_include_directories(app1 PUBLIC include)

# Indicate that the application depends on the library math
target_link_libraries(app1 math)
target_link_libraries(app2 math)