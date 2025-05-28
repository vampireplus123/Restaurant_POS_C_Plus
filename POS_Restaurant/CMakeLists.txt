cmake_minimum_required(VERSION 3.19)
project(POS_Restaurant LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(POS_Restaurant
    WIN32 MACOSX_BUNDLE
    main.cpp
    HomePage.cpp
    HomePage.h
    HomePage.ui
    orderpage.h orderpage.cpp orderpage.ui
)

target_link_libraries(POS_Restaurant
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS POS_Restaurant
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET POS_Restaurant
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
