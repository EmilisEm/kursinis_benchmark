# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src")
  file(MAKE_DIRECTORY "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-src")
endif()
file(MAKE_DIRECTORY
  "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-build"
  "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-subbuild/caf-populate-prefix"
  "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-subbuild/caf-populate-prefix/tmp"
  "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-subbuild/caf-populate-prefix/src/caf-populate-stamp"
  "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-subbuild/caf-populate-prefix/src"
  "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-subbuild/caf-populate-prefix/src/caf-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-subbuild/caf-populate-prefix/src/caf-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/emilis/notes/kursinis/benchmark/build/_deps/caf-subbuild/caf-populate-prefix/src/caf-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
