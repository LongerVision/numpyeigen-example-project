# NumpyEigen Example Project
A pip installable Python library built with [NumpyEigen](https://github.com/fwilliams/numpyeigen)

This is a barebones example of a NumpyEigen CMake project. The project includes a setup.py and the modules built by it can be installed with pip as follows:
 
```
pip install git+git://github.com/fwilliams/numpyeigen-example-project
```

For pip installation to work, a user will need the following dependencies installed:
* A C++ compiler supporting C++14 of later
* CMake
* Python Libraries with Scipy installed


## Modifying this project

The goal of this project is to act as a starting point for new NumpyEigen projects. Simply modify the `CMakeLists.txt` with your own source files to get started.

If you build your own modules starting from this project simply replace the git-URL above with the URL of your project, and your project will become pip installable!

For now to change the name of the pip package you need to edit `setup.py` but in the future, `setup.py` will just use whatever project name is set in `CMakeLists.txt`.

Happy Hacking!


