



// problem number 1


// You are given an array a
//  of n
//  integers. You have two kinds of operations

// increment any element in a
//  (increase it by one).
// decrement any element in a
//  (decrease it by one).
// What is the minimum number of operations to make the number of even elements equal to the number of odd elements, or detect that this is impossible?

// Input
// The first line contains a single integer t(1≤t≤10)
//  the number of test cases.

// The first line of each test case contains an integer n(1≤n≤105)
//  the number of elements in the array a
//  .

// The second line of each test case contains n
//  integers ai(1≤ai≤105)
//  the elements of the array a
// .

// Output
// For each test case, print the minimum number of operations required, or −1
//  if it's impossible


#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin >> arr[j];
        }
        
        int even = 0, odd = 0;        
        for(int j=0; j<n; j++)
        {
            if(arr[j]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }            
        }
        int operation = abs((n/2) - even);
        if(n%2 != 0)
        {
            cout << "-1" <<endl;
        }
        else
        {
            cout << operation << endl;
        }        
    }
    return 0;
}








// problem number 2


// Given a number N
//  and a character C
// . Print the character(C
// ) N
//  times.

// Note: Solve this problem using function.

// Input
// The first line contains a number T
//  (1≤T≤50)
//  the number of test cases.

// Next T
//  lines contains a number N
//  and a character C
//  (1≤N≤100)
// .

// Output
// Print T
//  lines, for every line print the character(C
// ) N
//  times separated by space.






#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n;
        char ch;
        cin >> n >> ch;
        cout << ch;
        for(int j=1; j<n; j++)
        {
            cout  << " " << ch;
        }
        cout << endl;

    }
    return 0;
}






//problem number 3

// Question: Make a class named Student. Write a program to take a positive integer N as input and make an Student array of size N. 
// Student 
// {
// 	name;
// 	roll;
// 	marks;
// }
// Your task is to reverse the array and print the array of Student.
// Note: name will not contain any spaces.


#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

int main(){
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        Student temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}








// problem number 4




// Question: Take a sentence S as input and then take another string word X as input. Then count how many times the word X appeared in the sentence. The words in the sentence are separated by spaces.



// Sample Input
// Sample Output
// Sanju Samson shamanta samson jessica Bhatta Asif John takla john abraham john baby Shark tank 
// john
// 2





#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string cmp;
    int count = 0;
    getline(cin,s);
    cin >> cmp ;
    stringstream ss(s);
    string word;
    while(ss >> word){   
        if(word == cmp)
        {
            count++;
        }
    }
    cout << count ;
    return 0;
}

