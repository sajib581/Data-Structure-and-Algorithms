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

    vec.push_back(100);
    vec.push_back(10);
    vec.push_back(120);
    vec.push_back(105);
    vec.push_back(20);
    vec.push_back(90);

    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl ;
    }
    cout<<"Reverse"<<endl ;

    //sort(vec.begin(),vec.end(),myFunc) ;

    sort(vec.begin(),vec.begin()+3) ;

    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl ;
    }

    return 0 ;

}

