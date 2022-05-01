#include <iostream>
using namespace std;


int i,j,n;
int wt[n],bt[n],tat[n];
double avwt=0,avtat=0;

void inputBurstTime()
{
    for(i=1; i<=n; i++)
    {
        cout<<"Enter burst time for process no "<<i<<": ";
        cin>>bt[i-1];
    }
}

void waitingTime()
{
    wt[0] = 0;
    for(i=1; i<n; i++)
    {
        wt[i] = bt[i-1];
        avwt += wt[i];
    }
    avwt /= (i+1);
    cout<<"Average Waiting Time = "<<avwt<<endl;
}

void turnAroundTime()
{
    for(i=0; i<n; i++)
    {
        tat[i] = wt[i] + bt[i];
        avtat += tat[i];
    }
    avtat /= (i+1);
    cout<<"Average Time Around Time = "<<avtat;
}
};
int main()
{
    FCFS obj;

    cout<<"How many processes do you want to execute: ";
    cin>>n;
    obj.inputBurstTime();
    obj.waitingTime();
    obj.turnAroundTime();
 return 0;
}

