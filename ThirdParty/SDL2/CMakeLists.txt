project(SDL2)

file(GLOB SRC_FILES *.cpp)

file(GLOB HDR_FILES *.h)

source_group("Source" FILES ${SRC_FILES})
source_group("Header" FILES ${HDR_FILES})

add_library(${PROJECT_NAME} STATIC
            ${SRC_FILES}
            ${HDR_FILES}
)