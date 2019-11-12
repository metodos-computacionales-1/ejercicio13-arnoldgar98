#include <iostream>
int getMax(int a, int b){
    int re=0;
    if(a>b){
        re=a;
    }else{
        re=b;
    }
    return re;
}
double getMax(double c,double d){
    double res=0;
    if(c>d){
        res=c;
    }else{
        res=d;
    }
    return res;

}

int main(void)
{
    int a=2;
    int b=10;
    double c=20.05;
    double d=50.87;
    std::cout<<"El valor maximo del par de numeros enteros es "<<getMax(a,b)<<std::endl;
    std::cout<<"El valor maximo del par de numeros double es "<<getMax(c,d)<<std::endl;
    
    
    return 0;
}