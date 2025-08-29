cmake_minimum_required(VERSION 4.0)
project(Data_Structures_and_Algorithms_in_C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(Data_Structures_and_Algorithms_in_C__ main.cpp
        "Programs/Lecture 17/FibonacciNumberUsingArray.cpp"
        "Programs/Lecture 17/PassingArrayAsAFunction.cpp"
        "Programs/Lecture 17/ReverseArray.cpp"
        "Programs/Lecture 17/SecondMaximum.cpp"
        "Programs/Lecture 27/vector.cpp"
        Projects/Calculator/main.cpp
        "Programs/Lecture 29/prefix_sum.cpp"
        "Programs/Lecture 29/suffix_sum.cpp"
        "Programs/Lecture 29/subarray.cpp"
        "Programs/Lecture 29/divide_two_subarray.cpp"
        "Programs/Lecture 31/2D_Array.cpp"
        "Programs/Lecture 31/Search_in_2D_Array.cpp"
        "Programs/Lecture 31/Add_Two_Matrix.cpp"
        "Programs/Lecture 31/Row_Index_Of_Maximum_Sum.cpp"
        "Programs/Lecture 31/Sum_Of_Diagonal_Elements.cpp"
        "Programs/Lecture 31/Reverse_Each_Row_In_2D_Matrix.cpp"
)
