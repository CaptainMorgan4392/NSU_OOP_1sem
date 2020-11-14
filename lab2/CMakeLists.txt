cmake_minimum_required(VERSION 3.17)
project(StackCalculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(StackCalculator main.cpp Evaluator.h StackEvaluator.h StackEvaluator.cpp Context.cpp EvaluatorException.h FileNotFoundException.h DivisionByZero.h NegativeParameter.h StringFormat.h OutOfParameters.h NumberFormatException.h WrongUsage.h ForbiddenValue.h)