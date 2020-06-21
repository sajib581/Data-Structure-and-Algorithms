#include<iostream>
#include<set>
#include<iterator>

using namespace std ;
int main()
{
    set <int> s ;
    set <int> :: iterator it ;

    s.insert(5) ;
    s.insert(20) ;
    s.insert(10) ;
    s.insert(15);
    s.insert(25) ;

    it = s.find(25) ;
    //s.erase(it) ;
    s.erase(s.find(25)) ;

    pair <set <int> :: iterator,bool> p ;

    p = s.insert(12) ;



    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl ;
    }

    if(p.second==false){
        cout<<"Can't insert"<<endl ;
    }
    else{
        cout<<"Inserted Successfully"<<endl ;
    }


    return 0 ;
}
