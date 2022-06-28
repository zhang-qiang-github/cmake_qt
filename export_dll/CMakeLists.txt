
if(WIN32)
	set(PROJECTTYPE dll)
	set(SUBPROJET_NAME export_dll)
endif(WIN32)

file(GLOB SOURCES "*.cpp")
file(GLOB HEADERS "*.h")
set(CMAKE_AUTOMOC 1)
add_library(export_dll SHARED ${SOURCES} ${HEADERS})

find_package(Qt6 REQUIRED COMPONENTS Widgets Core Gui)
target_link_libraries(export_dll PRIVATE Qt6::Widgets Qt6::Core Qt6::Gui)