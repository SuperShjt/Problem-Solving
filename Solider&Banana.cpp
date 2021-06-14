#include<iostream>
using namespace std;
int main (void)
{
    //Solider & banana
    int Bananas,Sdollar,Cbanana,Fmoney;
    int Totalbanana[100000]={0};
    int sum=0;
    cin>>Cbanana>>Sdollar>>Bananas;
    for(int i=1;i<=Bananas;i++)
    {
     Totalbanana[i]=Cbanana*i;
    }
    for(int j=1;j<=Bananas;j++)
    {
        sum += Totalbanana[j];
    }
    Fmoney=sum-Sdollar;
    if(Fmoney>=0)
    {
        cout<<Fmoney<<endl;
    }
    if(Fmoney<0)
    {
        cout<<0<<endl;
    }
}