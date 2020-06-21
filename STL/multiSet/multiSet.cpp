
#include<iostream>
#include<set>
#include<iterator>

using namespace std ;
int main()
{
    multiset <int> s ;
    multiset <int> :: iterator it ;

    s.insert(10);
    s.insert(10);
    s.insert(50);
    s.insert(10);
    s.insert(20);
    s.insert(10);

    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl ;
    }


    return 0 ;
}
