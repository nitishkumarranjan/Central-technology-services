#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>
#include <deque>
#include <iterator>
#include <string>
#include <sstream>

using namespace std;
 
int size = 4;
deque<int> mydeq;


# include <stdio.h>
/*int main ()
{
        int i, j;
        char a [2] [3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
        char b [3] [2];
        char *p = *b;
        for (i = 0; i < 2; i++) {
              for (j = 0; j < 3; j++) {
              *(p + 2*j + i) = a [i] [j];
              }
        }
}*/
 
int main()
{
 mydeq.resize(4,4);
 int arr[mydeq.size()];
 cout << mydeq.size();
 if(arr[0])
  printf("Initialized to ZERO");
 else
  printf("Not initialized to ZERO");
  cout << endl;
  string s = "1234";
  char to_g = s[2];
  int a = to_g - '0';
  int z = stoi(s);
  cout << "stoi o whole str " << z << endl;
  cout << "ans " << a + 4 << endl;
 return 0;
}