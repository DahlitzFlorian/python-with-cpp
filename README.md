# Python with C++ #
## Description ##
This repository contains an example project demonstrating how to extend
Python code with faster C++ code. To simplify the dependency management
this is build inside of a docker container. The whole project was inspired
by a [Medium article](https://medium.com/@keithwhitley/using-c-with-python-3-in-2018-480f3e46c8c).

version 1.0.2

## Using Docker-Compose ##
To build and run this project in the correct order and see some sample could being executed, simply use `docker-compose`:

```PowerShell
$ docker-compose up --build
```

If you want further to enter an interacting Python REPL and play around with the C++-based module, use the following command:

```PowerShell
$ docker-compose run app python3 -i math_addition.py
```
