#include<iostream>
using namespace std;
int main (void)
{
    int ppl,postion;
    int counter =0;
    cin>>ppl>>postion;
    int score[51]={0};
    for(int i=1;i<=ppl;i++)
    {
        cin>>score[i];
    }
    for(int j=1;j<=ppl;j++)
    {
        if(score[j]>=score[postion] && score[j]>0)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}