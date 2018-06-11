#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;
int main()
{
    while(1)
    {
        int n,k;
        cin>>n>>k;
        int u,v,flag=0;

        vector<int> arr;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
        }

        for(u=0;u<n-1;u++)
        {
            for(v=u+1;v<n;v++)
            {
                if(arr[u] + arr[v] == k)
                {
                    flag=1;
                    break;

                }

            }
        }

        if(flag == 1)
        {
            cout<<"YES"<<endl;
            cout << "DONE" <<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



    }
    return 0;


}
