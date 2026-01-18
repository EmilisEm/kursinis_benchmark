# Install script for directory: /home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples

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
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/." TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/./aout.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/." TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/./hello_world.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/config" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/config/read-json.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/message_passing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/message_passing/after.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/message_passing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/message_passing/calculator.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/message_passing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/message_passing/dancing_kirby.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/message_passing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/message_passing/delegating.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/message_passing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/message_passing/divider.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/message_passing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/message_passing/fan_out_request.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/message_passing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/message_passing/promises.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/message_passing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/message_passing/request.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/flow" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/flow/iota.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/flow" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/flow/observe-on.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/flow" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/flow/spsc-buffer-resource.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/dynamic_behavior" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/dynamic_behavior/skip_messages.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/dynamic_behavior" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/dynamic_behavior/dining_philosophers.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/custom_type" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/custom_type/custom_types_1.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/custom_type" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/custom_type/custom_types_2.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/custom_type" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/custom_type/custom_types_3.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/custom_type" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/custom_type/custom_types_4.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/testing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/testing/ping_pong.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/remoting" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/remoting/remote_spawn.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/remoting" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/remoting/distributed_calculator.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/http" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/http/client.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/http" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/http/rest.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/http" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/http/time-server.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/length_prefix_framing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/length_prefix_framing/chat-client.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/length_prefix_framing" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/length_prefix_framing/chat-server.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/web_socket" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/web_socket/echo.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/web_socket" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/web_socket/hello-client.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/web_socket" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/web_socket/quote-server.cpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caf/examples/web_socket" TYPE FILE FILES "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src/examples/web_socket/stock-ticker.cpp")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-build/examples/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
