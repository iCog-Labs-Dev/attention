# Install script for directory: /home/stationone/Desktop/Singularitynet/attention/opencog/attention

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/opencog/libattention.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/opencog/libattention.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/opencog/libattention.so"
         RPATH "/usr/local/lib/opencog:/usr/local/lib/opencog/modules:/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/opencog" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "/home/stationone/Desktop/Singularitynet/attention/build/opencog/attention/libattention.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/opencog/libattention.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/opencog/libattention.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/opencog/libattention.so"
         OLD_RPATH "/home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/bank:/home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/avalue:/home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank/types:/usr/local/lib/opencog:/usr/local/lib/opencog/modules:/usr/local/lib:"
         NEW_RPATH "/usr/local/lib/opencog:/usr/local/lib/opencog/modules:/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/opencog/libattention.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
              IF(EXISTS
                     /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm
                 AND NOT
                     /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm
                   STREQUAL
                     /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm
                 AND
                     /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm
                   IS_NEWER_THAN
                     /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm
                 )
                 MESSAGE("-- Touch: /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm")
                 MESSAGE("-- Newer: /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm")
                 FILE(TOUCH /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm)
              ENDIF()
            
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
              IF(EXISTS
                     /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm
                 AND NOT
                     /home/stationone/Desktop/Singularitynet/attention/opencog/attention/default-param-values.scm
                   STREQUAL
                     /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm
                 AND
                     /home/stationone/Desktop/Singularitynet/attention/opencog/attention/default-param-values.scm
                   IS_NEWER_THAN
                     /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm
                 )
                 MESSAGE("-- Touch: /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm")
                 MESSAGE("-- Newer: /home/stationone/Desktop/Singularitynet/attention/opencog/attention/default-param-values.scm")
                 FILE(TOUCH /home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm)
              ENDIF()
            
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/guile/site/3.0/opencog/attention.scm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/share/guile/site/3.0/opencog" TYPE FILE MESSAGE_LAZY FILES "/home/stationone/Desktop/Singularitynet/attention/opencog/attention/attention.scm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/guile/site/3.0/opencog/attention/default-param-values.scm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/share/guile/site/3.0/opencog/attention" TYPE FILE MESSAGE_LAZY FILES "/home/stationone/Desktop/Singularitynet/attention/opencog/attention/default-param-values.scm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencog/attention" TYPE FILE MESSAGE_LAZY FILES
    "/home/stationone/Desktop/Singularitynet/attention/opencog/attention/AttentionModule.h"
    "/home/stationone/Desktop/Singularitynet/attention/opencog/attention/AttentionStat.h"
    "/home/stationone/Desktop/Singularitynet/attention/opencog/attention/ForgettingAgent.h"
    "/home/stationone/Desktop/Singularitynet/attention/opencog/attention/HebbianUpdatingAgent.h"
    )
endif()

