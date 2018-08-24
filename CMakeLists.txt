cmake_minimum_required(VERSION 3.10)
project(vXboxInterface)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS true)
add_subdirectory(API)
add_subdirectory(vDevInterface)
add_subdirectory(Test)



install(DIRECTORY vDevInterface/ DESTINATION include/vXboxInterface/vxbox_dev
        FILES_MATCHING PATTERN "*.h")
install(DIRECTORY API/ DESTINATION include/vXboxInterface/vxbox
        FILES_MATCHING PATTERN "*.h")




