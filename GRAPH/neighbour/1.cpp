#include<iostream>
#include<stdio.h>
#include<string>

using namespace std ;
int adj[100][100] ;

int main()
{
    freopen("input.txt","r",stdin) ;

    int node,edge ;

    cin>>node ;

    cin>>edge ;

    int n1,n2 ;

    for(int i = 0 ;i<edge;i++){
            cin>>n1>>n2 ;
            adj[n1][n2]=1 ;
            adj[n2][n1]=1 ;
    }

    /*for(int row=0;row<node;row++){
        for(int column=0;column<node;column++){
            cout<<adj[row][column]<<"  " ;
        }
        cout<<endl;
    }*/

    for(int i=0;i<node;i++){
        if(adj[0][i]==1){
            cout<<i<<" " ;
        }
    }

    return 0 ;

}

/*
input :
5 6
0 1
2 0
2 1
1 3
3 4
1 4
*/
