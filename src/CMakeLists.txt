project(c-plusmain)

add_library(c-plusmain input.c token.c memory.c)
set_property(TARGET c-plusmain PROPERTY C_STANDARD 99)