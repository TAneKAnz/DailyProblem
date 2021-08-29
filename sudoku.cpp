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
  FOR(k,1,10){
    if(complete) return 0;
    t[i][j] = k;
    if(validate(i,j)){
      bool ck = true;
      FOR(y,0,9){
        FOR(x,0,9){
          if(t[y][x] == 0){
            ck = false;
            foo(y,x);
            break;
          }
        }
        if(!ck) break;
      }
      if(ck) complete = true;
    }
  }
  if(!complete) t[i][j] = 0;
  return false;
}

bool validate(int x,int y){
    FOR(j,0,9)
    {
      if (t[x][j]==t[x][y] && j != y)
      {
        return false;
      }
    }
    FOR(i,0,9)
    {
      if (t[i][y]==t[x][y] && i != x)
      {
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
            return false;
          }
        }
      }
    }
    return true;
}

/*
9 1 0 7 0 0 0 0 0
0 3 2 6 0 9 0 8 0
0 0 7 0 8 0 9 0 0
0 8 6 0 3 0 1 7 0
3 0 0 0 0 0 0 0 6
0 5 1 0 2 0 8 4 0
0 0 9 0 5 0 3 0 0
0 2 0 3 0 1 4 9 0
0 0 0 0 0 2 0 6 1
*/