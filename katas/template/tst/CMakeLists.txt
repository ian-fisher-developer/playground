project(template_tests LANGUAGES CXX)

add_executable(template_tests
    ../src/Template.cpp
    ../src/Template.h
    TemplateTests.cpp
)

set_target_properties(template_tests PROPERTIES
    MACOSX_BUNDLE TRUE
)

target_link_libraries(template_tests PUBLIC
    gtest_main
)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

include(GoogleTest)
gtest_discover_tests(template_tests)
