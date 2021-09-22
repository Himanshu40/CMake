cmake_minimum_required(VERSION 3.21.1)

project(EP8_CPackInstall VERSION 1.0)

configure_file(VersionConfig.h.in VersionConfig.h)

add_executable(CPackInstall main.cpp)

target_include_directories(CPackInstall PUBLIC
                           "${CMAKE_BINARY_DIR}"
                           )

include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${EP8_CPackInstall_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${EP8_CPackInstall_VERSION_MINOR}")
include(CPack)