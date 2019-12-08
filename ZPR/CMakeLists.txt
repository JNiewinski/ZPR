cmake_minimum_required(VERSION 3.10)

if (WIN32)
	set(Qt5Core_DIR "C:/Qt/5.12.6/msvc2017_64/lib/cmake/Qt5Core")
	set(Qt5_DIR "C:/Qt/5.12.6/msvc2017_64/lib/cmake/Qt5")
	set(QT_QMAKE_EXECUTABLE "C:/Qt/5.12.6/msvc2017_64/bin/qmake.exe")
	SET(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "C:/Users/Jakub/Desktop/studia/ZPR/boost_1_71_0/")
	SET(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "C:/Users/Jakub/Desktop/studia/ZPR/boost_1_71_0/stage/lib/")
endif ()

# set the project name
project(ZPR)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

find_package(Boost)

if(Boost_FOUND)
	include_directories(${Boost_INCLUDE_DIRS})
	link_directories(${Boost_LIBRARY_DIRS})
endif()



# add the executable
add_executable(ZPR 	
	main.cpp	
	Test.cpp	
	ZPR.cpp	
	ZPR.ui	
	ZPR.qrc
)


target_link_libraries(ZPR Qt5::Widgets)