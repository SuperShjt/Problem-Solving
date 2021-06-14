#include <iostream>
using namespace std;
int main()
{
    int i;
    
    cin >> i;
    while(i>100 || i<1)
    {
       
        cin >>i;
    }
    if(i%2 == 0 && i !=2)
    {
        cout<<"yes"<<endl;
    }
    else
    cout <<"no"<< endl;
}