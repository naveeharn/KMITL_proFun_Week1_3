#include<iostream>

using namespace std;

int sigma_1to_n(int n){
    return 0.5*n*(n+1);
}

void print(int sigma){
    int k=1;
    for (int i = 1; i <= sigma; i++)
    {
        if(i==sigma_1to_n(k)){
            cout<<"*\n";
            k++;
        }else
        {
            cout<<"*";
        }
        
    }
    
}

int main(){
    int n;
    cin>>n;
    
    print(sigma_1to_n(n));

    //cout<<endl;
    return 0;
}