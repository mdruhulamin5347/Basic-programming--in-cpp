

// problem number 1


// Problem Statement

// You will be given an array A of size N. Initially, you need to print the array by sorting it in ascending order. Afterward, you need to print the array sorted in descending order.

// Input Format

// First line will contain N.
// Next line will contain the array A.
// Constraints

// 1 <= N <= 10^5
// -10^9 <= A[i] <= 10^9 Where 0 <= i < N
// Output Format

// Print two lines. First line will contain the array sorted in ascending order. Next line will contain the array sorted in descending order.


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
//     sort(arr,arr+n);
//     for(int i=0; i<n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     sort(arr,arr+n,greater<int>());
//     for(int i=0; i<n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }









// problem number 2 


// Problem Statement

// You will be given an array A and the size of that array N. You need to create a function named sort_it(). After taking the input for the size in main function, call that function by giving the size as parameter and take the array input inside that function. After that, you need to sort the array in descending order. Then, return that array from the function and receive it in the main function. Finally, print the sorted array in the main function.

// Input Format

// First line will contain N.
// Second line will contain the array A.
// Constraints

// 1 <= N <= 10^5
// -10^9 <= A[i] <= 10^9 Where 0 <= i < N
// Output Format

// Ouptut the array in descending order.




// #include <bits/stdc++.h>
// using namespace std;

// int* sort_it(int n){
//     int* arr = new int[n+5];
//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr,arr+n,greater<int>());
//     return arr;
// }

// int main(){
//     int n;
//     cin >> n;
//     int* arr = sort_it(n);
//     for(int i=0; i<n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }









// problem number 3



// Problem Statement:

// Amena has just learned alphabets. She can read write from a to z only in lowercase. But, Amena always writes in alphabetic order (alphabetic order means from a to z in sorted order) what she saw. Also she writes a line as a word. For example, she writes monkey as ekmnoy. Her mother wants to test her reading and writing skills. Her mother gave her some lines, can you tell what she will write?

// Note: Input will be given by EOF.

// Input Format

// Input consist of a line S. The line will contain lowercase letters and spaces. It is possible that there are multiple spaces together and the line end with spaces.
// Constraints

// 1 <= |S| <= 10^5
// Output Format

// Output what Amena will write.
// Sample Input 0



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     char s[100001];    
//     while (cin.getline(s, 100001)) {
//         int len = strlen(s);  
//         int str = 0;         
//         for (int i = 0; i < len; ++i) {
//             if (s[i] != ' ') {
//                 s[str++] = s[i]; 
//             }
//         }        
//         s[str] = '\0';        
//         sort(s, s + str);        
//         cout << s << endl;
//     }

//     return 0;
// }










// problem number 4


// Problem Statement

// A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

// Input Format

// First line will contain T, the number of test cases.
// For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.
// Constraints

// 1 <= T <= 1000
// 1 <= ID <= 3
// 1 <= |Name| <= 100
// 'A' <= Section <= 'Z'
// 0 <= Total Marks <= 100
// Output Format

// Ouptut the information as asked in the question.


// #include <bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//     int id;
//     char name[1001];
//     char sec;
//     int marks;  
// };

// int main(){
//     int t;
//     cin >> t;
//     for(int i=1; i<=t; i++ )
//     {
//         Student obj;
//         int mx = INT_MIN;
//         Student mxsdt;
//         for(int j=1; j<=3; j++)
//         {            
//             cin >> obj.id >> obj.name >> obj.sec >> obj.marks;
//             if(obj.marks > mx){
//                 mx = obj.marks;
//                 mxsdt = obj;
//             }
//         }       
//         cout << mxsdt.id << " " << mxsdt.name << " " << mxsdt.sec << " " << mxsdt.marks << endl;     
        
//     }
//     return 0;
// }






// problem number 5


// Problem Statement

// You will be given an array A and the size of that array N. Additionally, you will be given a sum S. Your task is to determine whether it is possible to select three distinct indexed values from the array such that their summation equals S.

// Input Format

// First line will contain T, the number of test cases.
// First line of each test case will contain N and S.
// Second line of each test case will contain the array A.
// Constraints

// 1 <= T <= 100
// 1 <= N <= 100
// 1 <= S <= 1000
// 1 <= A[i] <= 1000 Where 0 <= i < N
// Output Format

// Output "YES" if it is possible, otherwise output "NO".




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t,n,s;
//     cin >> t;
//     for(int m=1; m<=t; m++)
//     {
//         cin >> n >> s;
//         int arr[n];
//         int is_true = 0;
//         for(int l=0; l<n; l++)
//         {
//             cin >> arr[l];
//         }
//         for (int i = 0; i < n - 2; i++) {
//             for (int j = i + 1; j < n - 1; j++) {
//                 for (int k = j + 1; k < n; k++) {
//                     if (arr[i] + arr[j] + arr[k] == s) {
//                         is_true = 1;
//                         break; 
//                     }  
//                     if(is_true)
//                     {
//                         break;
//                     }                                                 
//                 }
//                 if(is_true)
//                 {
//                     break;
//                 }
//             }            
//         }
//         if(is_true)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }