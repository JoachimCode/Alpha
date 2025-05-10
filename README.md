Requirements:
Download SFML library and put it in root folder

Setup with g++ and cmake:
mkdir build
cd build

cmake .. -G "Unix Makefiles" -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ (on first setup, else just cmake)
make

This will create the .exe file in build.
