#include <iostream>
#include<cmath>
using namespace std;
int main(void)
{
	double Tlenght,Twidth,Flenght,Nolenght,Nowidth;
	cin>>Tlenght>>Twidth>>Flenght;
	Nolenght=ceil(Tlenght/Flenght);
	Nowidth=ceil(Twidth/Flenght);
	long long int sum =Nolenght*Nowidth;
	cout<<fixed<<sum;
}