#include<iostream>
#include<stack>

using namespace std ;

int main()
{
    stack <string> s ;

    s.push("sajib") ;
    s.push("rajib") ;
    s.push("Krishna") ;
    s.push("Hare");

    while(!s.empty()){
        cout<<s.top()<<endl ;
        s.pop() ;
    }

}
