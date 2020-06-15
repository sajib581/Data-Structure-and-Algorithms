#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
bool myFunc(int a,int b){
    return(a>b) ;
}
using namespace std ;

int main()
{
    int ar[10] = {2,4,7,8,1} ;

    sort(ar,ar+5) ;

    for(int i=0;i<5;i++){
        cout<<ar[i]<<" " ;
    }

    return 0 ;

}

