
get_filename_component(SELF_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(ProgramApi_INCLUDE_DIRS "${SELF_DIR}/../include" ABSOLUTE)
get_filename_component(ProgramApi_LIBRARY_DIRS "${SELF_DIR}/../lib" ABSOLUTE)
set(ProgramApi_LIBRARIES "${CMAKE_SHARED_LIBRARY_PREFIX}ProgramApi${CMAKE_SHARED_LIBRARY_SUFFIX}")
