# NumpyEigen Example Project
An example project of how to build a Python library with [NumpyEigen](https://github.com/fwilliams/numpyeigen). 

## Getting Started
This is a barebones example of a NumpyEigen CMake project. It creates a Python module called `npe_example` which is written in C++ and exposed to Python. To get started, first clone the repository
```
git clone https://github.com/fwilliams/numpyeigen-example-project
```

## Building the Project
You can build the project in one of two ways: using CMake or setup.py. In both cases, you will need the following minimal set of dependencies
 - A C++ compiler supporting C++ 14 or later
 - CMake
 - Python
 - Numpy and Scipy
 
#### To change the version of Python, Numpy, or Scipy used by the project
To determine the correct version of Python, Numpy, and Scipy, `numpyeigen` simply runs the `python` command. To build against different versions of Python, Numpy or Scipy, build inside a virtualenv or Conda environment with the desired packages.

### Building with CMake
To build with CMake, run the following commands from the root of the repository:
```
mkdir build
cd build
cmake ..
make 
```

This will produce a file called `npe_example.*.so` where `*` is a string denoting the version of python and cpu architecture the packagte was built for. This file can be imported as any other python module using `import npe_example`.

### Building with `setup.py`
The project includes a `setup.py` file which can be used to build and distribute the project via `pip`. To build the project run:
```
python setup.py build
```
which will cteate a file called `npe_example.*.so` in `build/lib.<your-platform>` which can be imported using `import npe_example`. 

To quickly build and test the project, run:
```
python setup.py develop
```

This will make the built module importable from the currect directory via `import npe_example`.

## Installing the project with pip
The `setup.py` file can be used to install the project directly from Github via:
```
pip install git+git://github.com/fwilliams/numpyeigen-example-project
```
This command will clone the repository, build the project and install it in the local environment. To build the project you will need the dependencies outlined in the [Build section above](#building-the-project).


## Modifying this project

The goal of this project is to act as a starting point for new NumpyEigen projects. Simply modify the `CMakeLists.txt` with your own source files to get started.

To `pip install`  your own modules starting from this project simply replace the git-URL [in the section above](#installing-the-project-with-pip) with the URL of your project, and your project will become pip installable!

For now to change the name of the pip package you need to edit `setup.py` but in the future, `setup.py` will just use whatever project name is set in `CMakeLists.txt`.

Happy Hacking!


