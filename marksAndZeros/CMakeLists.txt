cmake_minimum_required(VERSION 3.17)
project(marksAndZeros)

set(CMAKE_CXX_STANDARD 14)

add_executable(marksAndZeros main.cpp Player.h HumanPlayer.h HumanPlayer.cpp AI.cpp AI.h KillingAI.h Session.h Session.cpp StupidAI.h Model.h Context.h View.h Controller.h StupidAI.cpp Model.cpp View.cpp Controller.cpp ImpossibleMoveException.h KillingAI.cpp)