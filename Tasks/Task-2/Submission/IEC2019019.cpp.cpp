#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i;
    long int n;
    cin>>n;
    int arr[1001][1001];
    long int k;
    cin>>k;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            arr[i][j]=0;
            smatrix[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    smatrix[1][1]=a[1][1];

    for(i=2;i<=n;i++)
        smatrix[i][1]=arr[i][1]+smatrix[i-1][1];

    for(i=2;i<=n;i++)
        smatrix[1][i]=arr[1][i]+smatrix[1][i-1];

    for(int i=2;i<=n;i++)
    {
    	for(int j=2;j<=n;j++)
    	{
    		smatrix[i][j]= smatrix[i][j-1]+smatrix[i-1][j]-smatrix[i-1][j-1]+arr[i][j];
		}
	}


    int sum=1,e=n+1,f=n+1;

    while(sum<e){

        int mid=(sum+e)/2;

        bool flag=0;

        for(int i=m;i<=n;i++){
            for(int j=m;j<=n;j++){
                if((smatrix[i][j]-smatrix[i-m][j]-smatrix[i][j-m]+smatrix[i-m][j-m])>=k) flag=1;
            }
        }
        if(flag)
        {sum=f-mid;
        break;}
        else e=mid;
    }
    cout<<sum<<endl;
}
