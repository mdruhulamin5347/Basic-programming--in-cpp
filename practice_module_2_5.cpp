#include <bits/stdc++.h>
using namespace std;

// Problem Number 1

// M. Capital or Small or Digit
// time limit per test1 second
// memory limit per test256 megabytes
// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// Note:

// Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc
// Input
// Only one line containing a character X which will be a capital or small letter or digit.

// Output
// Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.



// int main(){
//     char a[5];
//     cin >> a;
//     if(a[0] >= 48 && a[0] <= 57)
//     {
//         cout << "IS DIGIT";
//     }
//     else
//     {
//         cout << "ALPHA"<< endl;
//         if(a[0] >= 65 && a[0] <= 90)
//         {
//             cout << "IS CAPITAL";
//         }
//         else
//         {
//             cout << "IS SMALL";
//         }
//     }

//     return 0;
// }










// problem number 2

// C. Simple Calculator
// time limit per test1 second
// memory limit per test256 megabytes
// Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

// Input
// Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

// Output
// Print 3 lines that contain the following in the same order:

// "X + Y = summation result" without quotes.
// "X * Y = multiplication result" without quotes.
// "X - Y = subtraction result" without quotes.

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int x,y;
//     cin >> x >> y;
//     int sum = x + y;
//     long long multi = (1LL * x * y);
//     int sub = x - y;
//     cout << x << " + " << y << " = " << sum << endl << x << " * " << y << " = " << multi << endl << x << " - " << y << " = " << sub;
//     return 0;
// }






// problem number 3 

// Given a number N and an array A of N numbers. Print the array in a reversed order.

// Note:

// *Don't use built-in-functions.

// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers (0 ≤ Ai ≤ 109).

// Output
// Print the array in a reversed order.


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[n+5];
//     for(int i=0; i<n; i++)
//     {
//         cin >> a[i];
//     }
//     for(int i=0,j=n-1; i<=j; i++, j--)
//     {
//         swap(a[i],a[j]);
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }






// problem number 4

// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

// Output
// Print the maximum number.


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[n+5];
//     for(int i=0; i<n; i++)
//     {
//         cin >> a[i];
//     }
//     int mx=INT_MIN;
//     for(int i=0; i<n; i++)
//     {
//         mx = max(a[i],mx);
//     }
//     cout << mx ;
//     return 0;
// }






// problem number 5

// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

// Output
// Print the minimum number followed by a single space then print the maximum number.



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b,c;    
//     cin >> a >> b >> c;
//     int mn = 0,mx = 0;
//     if(a <= b && a <= c)
//     {
//         mn = a;
//     }
//     else if(b <= a && b <= c)
//     {
//         mn = b;
//     }
//     else
//     {
//         mn = c;
//     }
//     if(a >= b && a >= c)
//     {
//         mx = a;
//     }
//     else if(b >= a && b >= c)
//     {
//         mx = b;
//     }
//     else
//     {
//         mx = c;
//     }
//     cout << mn << " " << mx ;
//     return 0;
// }