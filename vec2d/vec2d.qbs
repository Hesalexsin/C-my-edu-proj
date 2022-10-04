import qbs

CppApplication {
    consoleApplication: true
    files: [
        "main.cpp",
        "vec2d.cpp",
        "vec2d.h",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: "application"
        qbs.install: true
        qbs.installDir: "bin"
    }
}
