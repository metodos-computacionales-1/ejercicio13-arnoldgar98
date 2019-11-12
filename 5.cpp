#include <iostream>
#include <cmath>
int main(int argc, char **argv)
{
    int N=atoi(argv[1]); //casting to int
    double array[N];
    for(int i =0;i<=N;i++)
    {
        array[i]=i;
    }
    return 0;
    //fsanitize=adress sirva para detectar errores en el espacio de almacenamiento de la memoria, en este caso se quiere almacenar algo que supera la memoria de stack. por ende, es mejor usar heap que tiene una memoria más grande que la stack 
}