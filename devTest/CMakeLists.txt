add_executable(${PROJECT_NAME}_devTest
stdafx.cpp
devTest.cpp
)
target_link_libraries(${PROJECT_NAME}_devTest vDevInterface)

install(TARGETS ${PROJECT_NAME}_devTest
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION bin
)