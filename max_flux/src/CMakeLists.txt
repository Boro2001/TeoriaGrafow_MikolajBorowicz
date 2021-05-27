add_executable (max_flux main.cpp)

add_custom_target(run_max_flux DEPENDS max_flux
    COMMAND
        ${CMAKE_CURRENT_BINARY_DIR}/max_flux
)

add_custom_target(valgrind_max_flux DEPENDS max_flux
    COMMAND
        valgrind --leak-check=full ${CMAKE_CURRENT_BINARY_DIR}/max_flux
)
