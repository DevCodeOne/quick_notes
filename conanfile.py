from conans import ConanFile, CMake, tools


class QuicknotelsConan(ConanFile):
    name = "QuickNotels"
    version = "none"
    license = "<Put the package license here>"
    author = "<Put your name here> <And your email here>"
    url = "<Package recipe repository url here, for issues about the package>"
    description = "<Description of Quicknotels here>"
    topics = ("<Put some tag here>", "<here>", "<and here>")
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False]}
    generators = "cmake", "cmake_find_package"
    requires = "qt/5.13.1@bincrafters/stable"
    default_options =  "shared=False", \
        "qt:with_mysql=False", \
        "qt:with_libalsa=False", \
        "qt:with_odbc=False", \
        "qt:with_openal=False", \
        "qt:with_pcre2=False", \
        "qt:with_pq=False", \
        "qt:with_sqlite3=False"

    def _configure_cmake(self):
        cmake = CMake(self)
        cmake.definitions["CMAKE_EXPORT_COMPILE_COMMANDS"] = "On"
        cmake.configure()
        return cmake

    def build(self):
        cmake = self._configure_cmake()
        cmake.build()

    def package(self):
        cmake = self._configure_cmake()
        cmake.install()

    def package_info(self):
        self.cpp_info.libs = ["hello"]

