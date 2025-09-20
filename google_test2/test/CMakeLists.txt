add_executable(calculator_tests
    test_calculator.cpp
    ../src/calculator.cpp
)

target_link_libraries(calculator_tests 
    gtest_main
)

add_test(NAME calculator_tests COMMAND calculator_tests)
target_include_directories(calculator_tests PRIVATE ../src)

# Windows-specific: Copy DLLs if needed
if(WIN32 AND BUILD_SHARED_LIBS)
    add_custom_command(TARGET calculator_tests POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:gtest> $<TARGET_FILE_DIR:calculator_tests>)
    add_custom_command(TARGET calculator_tests POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:gtest_main> $<TARGET_FILE_DIR:calculator_tests>)
endif()