project(bwi_gridworld)

cmake_minimum_required (VERSION 2.8.1)
cmake_policy(SET CMP0015 NEW)

set (GRID_LOCATION ../grid)
set (AGENT_LOCATION ../agent)

include_directories(${GRID_LOCATION}/include include)
include_directories(${AGENT_LOCATION}/include include)

find_library(GRID grid ../grid/build)
find_library(AGENT agent ../agent/build)

add_executable(experiment src/run_sim.cpp)

target_link_libraries(experiment ${GRID})
target_link_libraries(experiment ${AGENT})