#include <iostream>
using namespace std;
int main()
{
    int i,j,n;

cout<<"How many processes do you want to execute: ";
cin>>n;

int wt[n],bt[n],tat[n];
double avwt=0,avtat=0;

     for(i=1; i<=n; i++)
    {
        cout<<"Enter burst time for process no "<<i<<": ";
        cin>>bt[i-1];
    }
    //finding Waiting time
     wt[0] = 0;
    for(i=1; i<n; i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
        avwt += wt[i];
    }
    avwt /= (i);
    cout<<"\n\nAverage Waiting Time = "<<avwt<<endl;

        //finding Turn Around Time
        for(i=0; i<n; i++)
    {
        tat[i] = wt[i] + bt[i];
        avtat += tat[i];
    }
    avtat /= (i);
    cout<<"\n\nAverage Turn Around Time = "<<avtat;

    return 0;
}
