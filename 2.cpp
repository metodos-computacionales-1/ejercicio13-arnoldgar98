#include <iostream>
int addition(const int &a, int b)
{
    int r;
    r=a+b;
    a=r;
    return r;
}

int main(void)
{
    int x,y,z;
    x=5;
    y=3;
    z=addition(x,y);
    std::cout<< "The result is " <<z<<"\n";
    std::cout<< "The value of x is " <<x<<"\n";
    return 0;
    //Si se agrega la palabra const, se produce un error, la palabra const vuelve a la variable una constante y por eso  sale el error al intentar realizar la asignacion a=r
}