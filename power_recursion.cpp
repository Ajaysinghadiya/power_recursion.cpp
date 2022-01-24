// this recursion is for the understanding of power functions

#include<iostream>
using namespace std;

int  power(int m,int n)
{
    if(n==0)
    return 1;
    else
    return power(m,n-1)*m;
}

int best_approach_power(int m,int n)
{
    if(n==0)
    return 1;
    else if(n%2==0)// if the power is divissible by 2 then base will be multiplied by itself
    return best_approach_power(m*m,n/2)*m;
    else
    {
        return best_approach_power(m*m,(n-1)/2)*m;
    }
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<< power(m,n)<<endl;
    cout<< best_approach_power(m,n)<< endl;
    // cout<< 4/2;
    return 0;
}
