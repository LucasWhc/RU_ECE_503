cmake_minimum_required(VERSION 3.15)
project(final)

set(CMAKE_CXX_STANDARD 14)

#set(INC_DIR E:/Program Files (x86)/MATLAB/R2016b/extern/include)
#set(LINK_DIR E:/Program Files (x86)/MATLAB/R2016b/extern/lib/win64/microsoft)

include_directories(/Program Files/MATLAB/R2019b/extern/include)
#link_directories(${LINK_DIR})
link_libraries(E:/Program Files/MATLAB/R2019b/extern/lib/win64/mingw64/libmx.lib E:/Program Files/MATLAB/R2019b/extern/lib/win64/mingw64/libmex.lib E:/Program Files/MATLAB/R2019b/extern/lib/win64/mingw64/libeng.lib)

add_executable(final Main_Haocong.cpp Account_Haocong.cpp Account_Haocong.h BankAccount_Haocong.cpp BankAccount_Haocong.h StockAccount_Haocong.cpp StockAccount_Haocong.h Filer_Haocong.cpp Filer_Haocong.h Timer_Haocong.cpp Timer_Haocong.h Sort_Haocong.cpp Sort_Haocong.h Node_Haocong.h LinkedList_Haocong.cpp LinkedList_Haocong.h StockAccount_Matlab_Haocong.cpp)

target_link_libraries(final libmx.lib libmex.lib, libeng.lib)