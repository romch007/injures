add_rules("mode.debug", "mode.release")

target("injures")
    set_kind("binary")
    add_files("src/*.cpp")
