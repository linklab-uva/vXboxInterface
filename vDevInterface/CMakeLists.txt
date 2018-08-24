add_library(vDevInterface SHARED
stdafx.cpp
vDevInterface.cpp
)
target_link_libraries(vDevInterface vXboxInterface)
install(TARGETS vDevInterface
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION bin
)