#include<iostream>

int Subtract(int a, int b)
{
  return a-b;
}

int Add(int a, int b)
{
  return a+b;
}

void main()
{
  std::cout << "Math functions\n";
  std::cout << "Add(4,5): " << Add(4,5); 
  std::cout << "Subtract(4,5): " << Add(4,5); 
}
