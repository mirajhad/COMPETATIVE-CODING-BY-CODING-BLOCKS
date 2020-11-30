/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<algorithm>
#include<ctime>
using namespace std;

int a[1000000];

int
main ()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      a[i] = n - i;
    }
  clock_t startTime = clock ();
  sort (a, a + n);
  clock_t endTime = clock ();

  cout << endTime - startTime << endl;

  return 0;
}
