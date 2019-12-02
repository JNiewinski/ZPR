#skrypt dla SCons wykorzystujacy boost_unit_test_framework linkowana dynamicznie  -*- mode: Python; -*-
import platform, os


env=Environment(tools=['default','qt'])


if(platform.system() == "Linux"):
    env.Append( CPPFLAGS = '-Wall -pedantic -pthread' )
    env.Append( LINKFLAGS = '-Wall -pthread' )
    env.Append( LIBS = ['boost_date_time', 'boost_thread', 'boost_system', 'boost_log'] )

    env_test.Append( CPPFLAGS = '-Wall -pedantic -pthread' )
    env_test.Append( LINKFLAGS = '-Wall -pthread' )
    env_test.Append( LIBS = ['boost_unit_test_framework'] )

elif(platform.system() == "Windows"):
    #dla windows boost w wersji 1.55 zainstalowany w katalogu C:/boost
    env.Append( CPPPATH = [ Dir('C:/Users/Jakub/Desktop/studia/ZPR/boost_1_71_0'), Dir('C:/Qt/5.12.6/msvc2017/include')])
    env.Append( LIBPATH = [ Dir('C:/Users/Jakub/Desktop/studia/ZPR/boost_1_71_0\stage\lib'), Dir('C:/Qt/5.12.6/msvc2017/lib')] )
    env.Append( CPPFLAGS = ' /EHsc /MD /D "WIN32" /D "_CONSOLE" /W4' )
    #env.Append( LIBS = 'qt')
    #windows uzywa auto-link

env.Program( source = 'Test.cpp', target = 'Test' )
env.Program( source = 'main.cpp', target = 'main')
env.Program( source = 'ZPR.cpp', target = 'ZPR')
env.Program( source = 'ui_ZPR.h', target= 'uiZPR')





