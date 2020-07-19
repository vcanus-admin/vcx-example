# vcx-nats

## Installation Guide
 - You need pre-installation of https://github.com/vcanus/vcx-project 
 - After making clion folder structure, put this repository under prj folder.
 
## C/C++ based development environment
 - Structure of common folders of bin, include, lib.
 - Put your "vcx-" project under "prj" folder.
 - Referential header files and libraries should be put under "include" and "lib", respectively.

## Directory structure
```
root
└── README.md
├── bin
├── include
    └── project_name1
    └── project_name2   
├── lib_apple
├── lib_linux
├── prj
    └── CMakeList.txt
    └── project_name1
    └── project_name2
        └── gtest
            └── lib
            └── CMakeList.txt
```

## For library type of project
### Copy header files to include
#### Run cp_vcx-curl_to_include.sh
cp_vcx-example_to_include.sh
```
mkdir ../../include/vcx-example
rm ../../include/vcx-example/*
cp ./src/*.h ../../include/vcx-example/
```
### Copy *so, *lib files to lib_<OS>
header only library do not have lib files

