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
    vector <int> vec ;
    vector <int>::iterator it ;

    cout<<"My vector"<<endl ;
    vec.push_back(100);
    vec.push_back(10);
    vec.push_back(120);
    vec.push_back(105);
    vec.push_back(20);
    vec.push_back(90);

    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl ;
    }

    sort(vec.begin(),vec.end(),myFunc) ;

    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl ;
    }

    return 0 ;

}

