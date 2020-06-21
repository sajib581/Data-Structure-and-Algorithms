#include<iostream>
#include<map>
#include<iterator>
using namespace std ;

int main()
{
    multimap <string,int> m ;
    multimap <string,int> :: iterator it ;

    //Here this technique isn't allowded. Only insert()
    /*m["sajib"]=210 ;
    m["rajib"]=20 ;
    m["sajib"]=20 ;*/

    m.insert(make_pair("sajib",50)) ;
    m.insert(make_pair("sajib",500)) ;
    m.insert(make_pair("sajib",500)) ;
    m.insert(make_pair("ajib",50)) ;
    m.insert(make_pair("rajib",50)) ;
    m.insert(make_pair("sajib",5 0)) ;

    for(it = m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl ;
    }

    return 0 ;
}

