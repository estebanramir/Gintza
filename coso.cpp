#include <iostream>
using namespace std;
 int calc(int a, int b, int cont);
int main()
{ int num;
while(1)
{
    int cont=0;
    cout<<"introduzca numero: ";
    cin>>num;
    cout<<calc(num,num,cont)+1<<endl;

}
}
 int calc(int a, int b, int cont)
 {
 int tot=0;
 cont++;
    for(int i=a/2;i>1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            tot+=1+calc(i,a,cont);
            cout<<i;
        }
    }
    cout<<"c:"<<cont<<" "<<endl;
    return tot;
 };
