#include <iostream>
#include <vector>
using namespace std;
int calc(int num, int a, int b, int cont,vector<vector<int> > &result);
int main()
{
    int num;
    while(1)
    {
        vector<vector<int> > result;
        vector<int> temp;
        int cont=0;
        temp.clear();
        result.clear();
        cout<<"introduzca numero: ";
        cin>>num;
        temp.push_back(num);
        if(num>0)
        {
            result.push_back(temp);
            calc(num,num,num,cont,result);

        }
        for(int i=result.size()-1; i>=0; i--)
        {
            if (num>0);
            cout<<1<<" ";
            for(int j=result[i].size()-1; j>=0; j--)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}
int calc(int num, int a, int b, int cont,vector<vector<int> > &result)
{
    int tot=0;
    cont++;
    for(int i=a/2; i>1; i--)
    {
        vector<int>temp;
        if(a%i==0&&b%i==0&&((a!=b)||(a==num)))
        {

            if(i>=result[result.size()-1][result[result.size()-1].size()-1])
            {
                temp.push_back(num);
                temp.push_back(i);
            }
            else
            {
                temp=result[result.size()-1];
                cout<<"esto: "<<i<<endl;
                temp.push_back(i);
            }
            result.push_back(temp);
            tot+=calc(num,i,a,cont,result);
        }
    }
    return tot;
};
