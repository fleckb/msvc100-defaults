# Visual Studio 2010 Project/Solution Templates #

Some reasonable directory-layout defaults for Visual Studio 2010 projects.

The main project should be structured as follows:

 - Library project for main functionality
 - Test project to test main functionality
 - Application project to execute main functionality (contains int main...)


## Directory Layouts ##

### Single Project Solution ###

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


### Issues ###

 - What about "internal" library (where to put headers and libs)?
 - Where to but test output (executable, test-report)?
 - What about resources
