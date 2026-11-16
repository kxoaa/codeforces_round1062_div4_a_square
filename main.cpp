// codeforces round 1062 (div.4) a square?

/*

1 2 3 4
1 1 1 1
2 2 2 2
1 2 1 2
1 1 5 5
5 5 5 5
4 10 5 9

*/

#include <iostream>

using namespace std;

int main(){

  int a;
  int b;
  int c;
  int d;

  for(int i=1; i<=7; i++){

    cin >>a;
    cin >>b;
    cin >>c;
    cin >>d;
    cout <<endl;

    if(a == b && b == c && c == d)
    cout<<"YES"<<endl;

    else
    cout<<"NO"<<endl;
  }
  return 0;
}

// solved at 15 nov 2026 11:30 pm - 11:55 pm

// time taken: 2 hours

/*

sources:

Neal Wu on youtube

https://www.geeksforgeeks.org/
https://www.geeksforgeeks.org/cpp/cpp-loops/
https://www.geeksforgeeks.org/cpp/cin-in-c/

problem:
https://codeforces.com/contest/2167/problem/A?mobile=false

started here:
https://www.youtube.com/watch?v=HDVl8-cy928

*/

// no ai