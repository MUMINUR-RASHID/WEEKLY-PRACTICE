#include<bits/stdc++.h>
using namespace std;
bool isInside(int x1,int y1,int x2,int y2,double mid)
{
    double d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    return d<=mid;
}
double getdistance(int x1,int y1,int x2,int y2)
{
    double d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    return d;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int sx,sy;
        cin>>sx>>sy;
        int p1x,p1y;
        cin>>p1x>>p1y;
        int p2x,p2y;
        cin>>p2x>>p2y;
        double l=0,r=1000000000;
        double an;
        while((r-l)>1e-11)
        {
            double mid=(l+r)/2;
            if(isInside(p1x,p1y,sx,sy,mid)&&isInside(p1x,p1y,0,0,mid))
            {
                an=mid;
                r=mid;
            }
            else if(isInside(p2x,p2y,sx,sy,mid)&&isInside(p2x,p2y,0,0,mid))
            {
                an=mid;
                r=mid;
            }
            else if(isInside(p1x,p1y,sx,sy,mid)&&isInside(p2x,p2y,0,0,mid)&&getdistance(p1x,p1y,p2x,p2y)<=(2*mid))
            {
                an=mid;
                r=mid;
            }
            else if(isInside(p2x,p2y,sx,sy,mid)&&isInside(p1x,p1y,0,0,mid)&&getdistance(p1x,p1y,p2x,p2y)<=(2*mid))
            {
                an=mid;
                r=mid;
            }
            else
            {
                l=mid;
            }
        }
        cout<<fixed<<setprecision(10)<<an<<endl;
    }
}