enable_testing()
find_package(Check REQUIRED)
find_package(GSL REQUIRED)
find_package(ArgTable REQUIRED)
include_directories(${CHECK_INCLUDE_DIR} ${GSL_INCLUDE_DIR} ${ARGTABLE_INCLUDE_DIRS})
set(LIBS ${LIBS} ${CHECK_LIBRARIES} ${GSL_LIBRARIES} ${ARGTABLE_LIBRARIES} hgt bstrlib)
set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} ${CHECK_CFLAGS_OTHER})
include_directories(. ../src ../bstrlib)
MESSAGE("${LIBS}")
add_executable(test_hgt_corr test_hgt_corr.c)
target_link_libraries(test_hgt_corr ${LIBS})
add_test(test_hgt_corr ${CMAKE_CURRENT_BINARY_DIR}/test_hgt_corr)

add_executable(test_hgt_pop test_hgt_pop.c)
target_link_libraries(test_hgt_pop ${LIBS})
add_test(test_hgt_pop ${CMAKE_CURRENT_BINARY_DIR}/test_hgt_pop)

add_executable(test_hgt_cov test_hgt_cov.c)
target_link_libraries(test_hgt_cov ${LIBS})
add_test(test_hgt_cov ${CMAKE_CURRENT_BINARY_DIR}/test_hgt_cov)

add_executable(test_hgt_stat test_hgt_stat.c)
target_link_libraries(test_hgt_stat ${LIBS})
add_test(test_hgt_stat ${CMAKE_CURRENT_BINARY_DIR}/test_hgt_stat)
