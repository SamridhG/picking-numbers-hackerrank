#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,a;
    cin>>n;
    vector<int>A;
    for(i=0;i<n;i++)
    {
        cin>>a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    int c=A[n-1];
   
    vector<int>B;
    for(i=0;i<=c;i++)
    {
       int sum=0;
        for(j=0;j<n;j++)
        {
            if(A[j]==i)
            {
                sum=sum+1;
            }
        }
       B.push_back(sum);

    }
 
  int temp=0;
 for(i=0;i<B.size()-1;i++)
 {
     
     int G=(B[i]+B[i+1]);
     if(temp<G)
     {
         temp=G;
     }
 }
 cout<<temp;
}
    
    
