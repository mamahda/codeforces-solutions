#include <iostream>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      if(i % 2 != 0){
        cout << "#";
        continue;
      }
      else{
        if((i / 2) % 2 != 0){
          if(j == m){
            cout << "#";
            continue;
          }
          cout << ".";
        }
        else{
          if(j == 1){
            cout << "#";
            continue;
          }
          cout << ".";
        }
      }
    }
    cout << endl;
  }
}
