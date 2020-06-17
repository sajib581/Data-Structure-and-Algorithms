#include<iostream>
#include<map>
#include<iterator>
using namespace std ;

int main()
{
    map <string,int> m ;
    map <string,int> :: iterator it ;
    m["sajib"]= 20 ;
    m["rajib"]= 10 ;
    m["arnob"]= 15 ;
    m["sajib"]= 500 ;

    cout<<m["arnob"]<<endl ;
    cout<<m["rajib"]<<endl ;
    cout<<m["sajib"]<<endl ;

    it= m.begin() ;

   cout<<it->first<<endl ;
   it++ ;
   cout<<it->first<<endl ;
   cout<<it->second<<endl ;

   //now printing all key value pair

   for(it=m.begin();it!=m.end();it++){
    cout<<it->first<<"  "<<it->second<<endl ;
   }

    return 0 ;
}
