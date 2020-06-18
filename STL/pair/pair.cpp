#include<iostream>
#include<utility>
#include<iterator>
#include<vector>
using namespace std ;

int main()
{
    pair <int,string> p ;
    vector <pair <int,string>> v ;

    vector <pair <int,string>> :: iterator it ;

    v.push_back(make_pair(25,"Sajib")) ;
    v.push_back(make_pair(27,"Rajib")) ;

    /*it= v.begin() ;
    cout<<it->first ;*/

    for(it=v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl ;
    }


    return 0 ;
}
