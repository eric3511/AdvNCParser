cmake_minimum_required (VERSION 3.15)

project(NCGen VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

##################################################################

set(ANTLR4_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/lib/include/antlr4-runtime)
set(NCGUN_GRAMMER_DIR ${PROJECT_SOURCE_DIR}/src/g4)
set(NCGUN_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)


include_directories(${ANTLR4_INCLUDE_DIR}
                    ${ANTLR4_INCLUDE_DIR}/atn 
                    ${ANTLR4_INCLUDE_DIR}/dfa 
                    ${ANTLR4_INCLUDE_DIR}/misc 
                    ${ANTLR4_INCLUDE_DIR}/support 
                    ${ANTLR4_INCLUDE_DIR}/tree
                    ${ANTLR4_INCLUDE_DIR}/tree/pattern
                    ${ANTLR4_INCLUDE_DIR}/tree/xpath
                    ${NCGUN_GRAMMER_DIR}
                    )

aux_source_directory(./src NCG_SOURCE_DIR)
aux_source_directory(./src/g4 NCG_G4_DIR)

# must be setting for anltr4
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_executable(AppMain ${NCG_SOURCE_DIR} ${NCG_G4_DIR})

target_link_libraries(AppMain 
                      ${NCGUN_LIB_DIR}/libantlr4-runtime.a
                      Threads::Threads)

