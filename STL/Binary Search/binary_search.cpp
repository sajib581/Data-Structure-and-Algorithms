#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int main()
{
    vector<int> v = {2,5,7,8,10,12,14,50,70,80} ;

    bool ans = binary_search(v.begin(),v.end(),14) ;
    if(ans){
        cout<<"FOUND" ;
    }
    else{
        cout<<"Not Found" ;
    }
    return 0 ;

}
