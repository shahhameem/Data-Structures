#include <iostream>
void increase(int num)
{
    if(num ==  0)
        return;
    std::cout << num << " ";
    increase(num - 1);
}

int decrease(int num)
{
    if(num == 0)
        return 0;
    int temp =  decrease(num - 1);
    std::cout << num << " ";
    return num;
}

int main()
{
    std::cout << "Enter the number : ";
    int n{};
    std::cin >> n;
    increase(n);
    std::cout << std::endl;
    decrease(n);
    return 0;
}