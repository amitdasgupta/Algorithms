#include<iostream>
#include<vector>
#include<string> // for string class
using namespace std;
void DFS(vector<int> vec[],vector<int> &flag,int i)
{
    flag[i]=1;
    cout<<i<<":is visited"<<endl;
    for(auto it:vec[i])
    {
        if(!flag[it])
        DFS(vec,flag,it);
    }

}
void dfs(vector<int> vec[],int n)
{
    vector<int> flag(n,0);
    for(int i=0;i<n;i++)
    {
        if(!flag[i])
        {
            DFS(vec,flag,i);
        }
    }
}
int main()
{  int n,temp;
   cin>>n;
   vector<int> vec[n];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>temp;
           if(temp)
           {
               vec[i].push_back(j);
               vec[j].push_back(i);
           }
       }
   }
   dfs(vec,n);
}
