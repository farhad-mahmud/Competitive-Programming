#include<bits/stdc++.h>
int main (){
    using namespace std;
    int t,x,y,r;
    double d;
    double loong,shoort;
    //scanf("%d",&t);
     cin>>t;
    while(t>0){
        //scanf("%d %d %d",&x,&y,&r);
        cin>>x>>y>>r;
        if (x==0 && y==0){
            loong=r;
            shoort=r;

        }
        else {
                d=sqrt((x-0)*(x-0)+(y-0)*(y-0));
            shoort=(r-d);
            loong=(r+d);

        }
       // printf("%.2lf %.2lf\n",shoort,loong);
        cout<<shoort <<" "<< loong<<endl;
        t--;
    }
}

