import qbs

CppApplication {
    consoleApplication: true
    files: [
        "calculator.cpp",
        "grammar.cpp",
        "grammar.h",
        "token.cpp",
        "token.h",
        "variable.cpp",
        "variable.h",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: "application"
        qbs.install: true
        qbs.installDir: "bin"
    }
}
