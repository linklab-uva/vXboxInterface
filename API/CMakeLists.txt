add_library(vXboxInterface-Static STATIC
vXboxInterface.cpp
stdafx.cpp
)
target_compile_definitions(vXboxInterface-Static PRIVATE STATIC_LIB=1)


set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS true)
add_library(vXboxInterface SHARED
vXboxInterface.cpp
stdafx.cpp
)
target_compile_definitions(vXboxInterface PRIVATE DYNAMIC_LIB=1)
target_link_libraries(vXboxInterface
setupapi
)
