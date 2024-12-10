
// problem number 1

// Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

// The comparison is as follows: A < B, A > B, A = B.

// Where A, B are two integer numbers and S refers to the sign between them.

// Input
// Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

// Output
// Print "Right" if the comparison is true, "Wrong" otherwise.


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b;
//     char s;
//     cin >> a >> s >> b;
//     if(a > b && s =='>')
//     {
//         cout << "Right" ;
//     }
//     else if(a < b && s == '<')
//     {
//         cout << "Right";
//     }
//     else if(a == b && s == '=')
//     {
//         cout << "Right";
//     }
//     else{
//         cout << "Wrong";
//     }
//     return 0;
// }







// problem numbeer 2

// Given a mathematical expression. The expression will be one of the following expressions:

// A + B = C, A - B = C and A * B = C

// where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

// Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

// Input
// Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

// Output
// Output either "Yes" (without the quotation) or the right answer depending on the statement.




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b;
//     long long c;
//     char s,q;
//     cin >> a >> s >> b >> q >> c;
//     if( s == '+' && q == '=')
//     {
//         if(a + b == c)
//         {
//             cout << "Yes";
//         }
//         else{
//             cout << a + b;
//         }
        
//     }
//     else if(s == '-' && q == '=')
//     {
//         if(a - b == c ){
//             cout << "Yes";
//         }
//         else{
//             cout << a - b;
//         }
        
//     }
//     else if( s == '*' && q == '=')
//     {
//         if((1LL * a * b) == c ){       
//             cout << "Yes";
//         }        
//         else{
//             cout << (1LL * a * b);
//         }
//     }

//     return 0;
// }















// problem number 3

// Given a number N
//  and an array A
//  of N
//  numbers. Determine if it's palindrome or not.

// Note:

// An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

// Input
// First line contains a number N
//  (1≤N≤105)
//  number of elements.

// Second line contains N
//  numbers (1≤Ai≤109)
// .

// Output
// Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n+5];
//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }
//     int is_palindrome = 1;
//     for(int *i=arr, *j=arr + n - 1; i<j; i++, j--)
//     {
//         if(arr[*i] != arr[*j])
//         {
//             is_palindrome = 0;
//             break;
//         }
//     }
//     if(is_palindrome){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }
//     return 0;
// }








// problem number 4


// Given a number N and an array A of N numbers. Print the smallest possible result of Ai + Aj + j - i , where 1  ≤  i < j  ≤  N.

// Input
// The first line contains a number T (1 ≤ T ≤ 100) number of test cases.

// Each test case contains two lines:

// The first line consists a number N (2 ≤ N ≤ 100) number of elements.
// The second line contains N numbers ( - 106 ≤ Ai ≤ 106).
// Output
// For each test case print a single line contains the smallest possible sum for the corresponding test case.




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t,n;
//     cin >> t;
//     for(int k=1; k<=t; k++)
//     {
//         cin >> n;
//         int arr[n+5];
//         for(int i=1;i<=n; i++)
//         {
//             cin >> arr[i];
//         }
//         int mn = INT_MAX;
//         for(int i=1;i<=n; i++)
//         {
//             for(int j=i+1; j<=n; j++)
//             {
//                 mn = min(mn,arr[i]+arr[j]+j-i);
//             }
//         }
//         cout << mn << endl;
//     } 
//     return 0;
// }








// problem number 5


// Given a number N and an array A of N numbers. Print the numbers after sorting them.

// Note:

// Don't use built-in-functions.
// try to solve it with bubble sort algorithm or Selection Sort.
// for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.
// Input
// First line contains a number N (0 < N < 103) number of elements.

// Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

// Output
// Print the numbers after sorting them.



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}