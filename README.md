# msvc100-defaults #

Some reasonable default project directory-layout for Visual Studio 2010


## Directory Layout ##

<pre>
/project-root
    /bin | /lib         Build output (bin for EXE; lib for LIB and DLL)
        /debug          Debug build
        /release        Release build
    /build              Project build files (solution, project-file)
    /include            If library: public interface (headers) for library
    /src                Main source files
    /test               Test source files
    /external           External dependencies
        /include        External headers
        /lib            External libraries
    /obj                Intermediate build artifacts
</pre>