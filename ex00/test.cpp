# include <iostream>

class A
{
    public:
    int *ptr;
};

int main(void)
{
    A obj1;
    A obj2(obj1);
    std::cout << *(obj1.ptr) << " " << *(obj2.ptr) << std::endl;
    *(obj1.ptr) = 6;
    std::cout << *(obj1.ptr) << " " << *(obj2.ptr) << std::endl;
}