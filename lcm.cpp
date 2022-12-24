#include<iostream>
using namespace std;

template <class l>
class LCM {
l lcm,f=1;
public:
l findlcm(l a,l b){
    if (a>b)
   lcm=a; 

else
    lcm=b; 

   while(1)
    {
       if (lcm%a==0 && lcm%b==0)
       {
        cout<<"The LCM of a & b is "<<lcm;
        break;
       }
     lcm++;  
    }
}
};

int main(){
    system("cls");
    int a=6,b=3,i=0;
    LCM <int> l;
    cout<<"Enter two number ";
    cin>>a>>b;
    l.findlcm(a,b);

    return 0;

}