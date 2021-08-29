#include <bits/stdc++.h>

#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = n;i>=s;i--)

using namespace std;

vector<vector<int>> t(9,vector<int>(9,0));

bool complete =false;
bool validate(int x,int y);
bool foo(int i,int j);

int main(){
  int x;
  int s=-1,ss=-1;
  FOR(i,0,9){
    FOR(j,0,9){
      cin>>x;
      t[i][j] = x;      
      if(x==0 && s== -1 && ss==-1){
        s = i;
        ss= j;
      }
    }
  }
  cout<<'\n';
  foo(s,ss);
  FOR(i,0,9){
    FOR(j,0,9){
      cout<<t[i][j]<<' ';
    }
    cout<<'\n';
  }
  
}

bool foo(int i,int j){
  
}

bool validate(int x,int y){
    FOR(j,0,9)
    {
      if (t[x][j]==t[x][y] && j != y)
      {
        cout<<"invalid\n";
        return false;
      }
    }
    FOR(i,0,9)
    {
      if (t[i][y]==t[x][y] && i != x)
      {
        cout<<"invalid\n";
        return false;
      }
    }
    FOR(k,0,9)
    {
      FOR(p,0,9)
      {
        if (k/3 == x/3 && p/3 == y/3)
        {
          if (t[k][p]==t[x][y] && (x!=k && y!=p))
          {
            cout<<"invalid\n";
            return false;
          }
        }
      }
    }
    cout<<"validated\n";
    return true;
}

/*
9 1 0 7 0 0 0 0 0
0 3 2 6 0 9 0 8 0
0 0 7 0 8 0 9 9 9
0 8 6 0 3 0 1 7 0
3 0 0 0 0 0 0 0 6
0 5 1 0 2 0 8 4 0
0 0 9 0 5 0 3 0 0
0 2 0 3 0 1 4 9 0
0 0 0 0 0 2 0 6 1
*/