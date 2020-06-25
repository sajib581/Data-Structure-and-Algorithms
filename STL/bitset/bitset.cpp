#include<iostream>
#include<bitset>
using namespace std ;
#define x 8
int main()
{

    bitset <x> b(7) ;
    //b.set() ;
    //b.reset() ;
    b[1]=0 ;
    cout<<b<<endl ;
    cout<<b.size()<<endl ;
    cout<<b.count()<<endl ;
    b.set(1);
    cout<<b<<endl ;
    b.reset(2) ;
    cout<<b<<endl ;
    if(b.any()){
        cout<<"true"<<endl ;
    }
    else{
        cout<<"false"<<endl ;
    }
    b.flip() ;
    cout<<b<<endl ;
}
