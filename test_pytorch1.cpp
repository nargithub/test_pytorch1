// test_pytorch1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <torch/torch.h>
#include <ATen/ATen.h>

int main()
{
    std::cout << "Hello World!\n";
    at::Tensor tensor = at::ones({ 2, 2 }, at::kInt);
    std::cout << tensor << std::endl;

    return 0;
}