add_executable(${PROJECT_NAME}_Test
stdafx.cpp
Test.cpp
)
target_link_libraries(${PROJECT_NAME}_Test vXboxInterface)

install(TARGETS ${PROJECT_NAME}_Test
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION bin
)