#include<iostream>
#include<string>
using namespace std;
int main(){

std::cout<<"enter a no\n";
int n, c=0;
std::cin>>n;
for (int i = 1; i <=n; i++)
{
    if(n%i==0)
    c++;
}
if(c==2)
std::cout<<"its a prime no";
else
std::cout<<"it is not a prime no";
return 0; 
}
