add_library(bankingModule
src/Account.cpp
src/Bank.cpp
)

target_include_directories(bankingModule PUBLIC include)