#include <iostream>
//al igual que el fibonacci recursivo de las primeras semanas de clase
float FiboRec(float n)
{
    float fib=0;
    if(n==1)
    {
        fib=1;
    }
    else if(n==2)
    {
        fib=1;
    }
    else{
        fib=FiboRec(n-1) + FiboRec(n-2);
    }
    return fib;
}

float Fibonormal(float n)
{
    float x1 = 1;
    float y1 = 1;
    float a=0;
    for(int i=0;i<n-2;i++){
        //aqui se realiza la retroalimentación de la variable
        a =x1+y1;
        y1 =x1;
        x1 =a;
    }
    return a;
}

int main(void)
{
    
    
    int prueba=10;
    std::cout<<"con fibonacci no recursivo con un valor prueba de "<<prueba<<" da : " <<FiboRec(prueba)<<"\n";
    
    std::cout<<"con fibonacci recursivo con un valor prueba de "<<prueba<<" da: " <<Fibonormal(prueba)<<"\n";
    
    return 0;
}