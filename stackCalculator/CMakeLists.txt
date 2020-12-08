cmake_minimum_required(VERSION 3.17)
project(lab2)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab2 main.cpp StackCalculator.h EvaluatorException.h DivisionByZero.h NegativeParameter.h UndefinedParameter.h
        Exceptions.h OperationFactory.h StackCalculator.cpp Context.h Operation.h Push.h Pop.h Add.h Subtract.h Multiply.h Divide.h
        Sqrt.h Define.h Print.h LineReader.h WrongInput.h AllOp.h FileNotFound.h OutOfParameters.h OperationMaker.h NoSuchOperation.h
        IdentifyerFormat.h NumberFormat.h)