#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ary,ds,as=0,i,lb,ub,mid,n;
    cout<<"Enter array size: ";
    cin>>n;
    ary=new int[n];
    cout<<"Enter a sorted array :";
    for(i=0; i<n; i++)
    {
        cin>>ary[i];
    }
    cout<<"Enter desired element:";
    cin>>ds;
    if(ary[0]<ary[1])
    {
        as=1;
    }
    lb=0;
    ub=n-1;
    i=1;
    while(1)
    {
        mid=(lb+ub)/2;
        if(ds==ary[mid])
        {
            cout<<"Found the element "<<ds<<" at "<<mid+1<<" index."<<endl;
            break;
        }
        else if((as==1 && ary[mid]<ds) || (as==0 && ary[mid]>ds) )
        {
            lb=mid+1;
        }
        else if((as==1 && ary[mid]>ds) || (as==0 && ary[mid]<ds) )
        {
            ub=mid-1;
        }
        if(lb>ub)
        {
            cout<<"Desire elements not found."<<endl;
            break;
        }
    }
    return 0;
}
