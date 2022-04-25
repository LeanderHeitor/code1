#include <iostream>
#include <string.h>
using namespace std;

int main()
{
//Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a seguinte
 //expressão:

//D=(R+S)/2
//R=(A+B)^2
//S=(B+C)^2

int a,b,c,s,d;
double r;
cout << "digite o valor de A:";
cin >> (a);

cout << "digite o valor de B:";
cin >> (b);

cout << "digite o valor de C:";
cin >> (c);

r=(a+b) * (a+b);
s=(b+c) * (b+c);
d=(r+s)/2;

cout << "esse e o valor de R:" << r;
cout << "\nesse e o valor de S:" << s;
cout << "\nesse e o valor de D:" << d;
}



 