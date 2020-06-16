#include<iostream>
#include<list>
#include<iterator>
#include<stdio.h>
#include<algorithm>

using namespace std ;

int main(){
    int arr[5] = {2,4,7,6,9} ;

    list <float> mylist(arr,arr+5) ;
    list <float> ::iterator it ;   //Here don't come any suggestion

    it=find(mylist.begin(),mylist.end(),4) ;
    mylist.erase(it);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<endl ;
    }

    it=find(mylist.begin(),mylist.end(),7) ;
    if(it==mylist.end()){
        cout<<"NOTHING FOUND"<<endl ;
    }
    cout<<"*it = "<<*it<<endl ;

    mylist.insert(it,50) ;

    cout<<"After insert"<<endl ;
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<endl ;
    }

    mylist.clear() ;
    cout<<"size : "<<mylist.size();


    return 0 ;

}
