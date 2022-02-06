#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the number of testcases ";
    //cin>>n;
    int p;
    n=5;
    p=n;

    int arr[n][n]= {{0, 0, 0, 0,1},
        {0, 0, 1, 1,1},
        {0, 1, 0, 1, 0},
        {0, 1, 1, 0,1},
        {1, 1, 0, 1, 0}
    };
    int visited[n];




    for(int j=0; j<n; j++)
    {

        visited[j]=0;

    }




    queue<int> q;
    int s=2;
    q.push(s);
    visited[s]=1;

    while(!q.empty())
    {

        int element=q.front();

        q.pop();
        cout<<element<<" "<<endl;

        for(int i=0; i<p; i++)
        {


            if(arr[element][i]==1 && visited[i]==0)
            {

                q.push(i);
                cout<<"Pushed element "<<i<<endl;
                visited[i]=1;

            }

        }



    }
}
