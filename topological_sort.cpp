#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    while(1)
    {
        cin>>n>>m;
        if(n==0 && m==0)
        {
            break;
        }

        int vertex[n];
        int pre[n];

        int vis[n];
        for(int i=0; i<n; i++)
        {
            vertex[i]=0;
            pre[i]=0;
            vis[i]=0;

        }

        for(int i=0; i<m; i++)
        {
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            pre[v]++;
            vertex[v]++;
        }

        sort(pre, pre+n);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(pre[i]==vertex[j] && vis[j]!=1)
                {
                    cout<<j+1<<" ";
                    vis[j]=1;
                }
            }
        }
      //checking before submit

        cout<<endl;
    }
}
