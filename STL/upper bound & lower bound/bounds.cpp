#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<iterator>

using namespace std ;

int main()
{

    vector<int> v = {2,5,7,8,10,12,14,50,70,80} ;
    auto it = lower_bound(v.begin(),v.end(),100) ;
    cout<<*it<<endl ;
    cout<<"Index : "<<distance(v.begin(),it)<<endl ;

    cout<<"NOW FOR SET"<<endl ;

    set <int> s (v.begin(),v.end()) ;
    auto itt = s.lower_bound(5) ;
    cout<<(itt!=s.end()?to_string(*itt):"not found")<<endl ;

    /*vector<int> v = {1,3,3,3,5,8,9} ;
    auto it = upper_bound(v.begin(),v.end(),3);
    cout<<distance(v.begin()+1,it) ;*/

    return 0 ;
}

