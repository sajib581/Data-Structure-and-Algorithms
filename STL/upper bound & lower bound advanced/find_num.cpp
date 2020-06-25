#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<iterator>

using namespace std ;

multiset <int> :: iterator firstLessThan(multiset <int> ms ,int val){
    auto it = ms.lower_bound(val);

    if(it==ms.end())  --it ;

    while(it!=ms.begin() && *it>=val){
        --it ;
    }


    return *it>=val ? ms.end() : it ;
}
int main(){
    vector<int> v = {2,3,3,3,5,8,8,8,9,12} ;
    multiset <int> s (v.begin(),v.end()) ;
    auto it = firstLessThan(s,7) ; //5

    cout<<(it == s.end() ? "Not Found" : to_string(*it)) ;

    return 0 ;

}
