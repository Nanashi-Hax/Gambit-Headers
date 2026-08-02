add_subdirectory(Gambit/Cmn)
add_subdirectory(Gambit/Game)
add_subdirectory(Gambit/Sys)
add_subdirectory(Gambit/UI)
add_subdirectory(Gambit/Utl)
add_subdirectory(sead)

add_library(Gambit INTERFACE

)

target_link_libraries(Gambit INTERFACE
    Cmn
    Game
    Sys
    UI
    Utl
    sead
)