

//                problem number 1

// Problem Statement

// You will be given two strings S and X. You need to replace all X from string S with a '#' sign.

// Input Format

// First line will contain T, the number of test cases.
// Next T lines will contain a line with S and X.
// Constraints

// 1 <= T <= 1000
// 1 <= |S|, |X| <= 1000
// |X| <= |S|
// Output Format

// For each test cases output the modified string S.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        string s, x;
        cin >> s >> x;

        for (int i = 0; i < s.size(); i++ ) {
            i = s.find(x, i);
            if (i == -1) { 
                break;
            }
            s.replace(i, x.size(), "#");
            
        }
        
        cout << s << endl;
    }

    return 0;
}




//                 problem number 2

// Problem Statement

// Write a program to determine if a given string contains the word "Jessica." If the word is present in the string, the program should output "YES," otherwise it should output "NO."

// NOTE: You need to find only "Jessica"; not "jessica" or "JeSsica" or any other form. Words are separated by spaces.

// Input Format

// Input will contain a string S containing names. There is a space in between two names.
// Constraints

// 1 <= |S| <= 1000; Here |S| means the length of the string.
// Output Format

// Output YES or NO according to the question.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int is_exists = 0;
    while (ss >> word)
    {   
        if(word == "Jessica")
        {
            is_exists = 1;
        }

    }
    if(is_exists)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    return 0;
}





//                 problem number 3

// Problem Statement

// You will be given data for N students, where each student will have a name (nm), class (cls), section (s) and student ID (id). The Headmaster decided to change the sections of the students. He wants to reverse their sections. Now he needs your help to do so.

// Your task is reverse their section and print all the students data. That means the section of the first student will be replaced by the section of the last student, the section of the second student will be replaced by the section of the second last student and so on. See the sample input and output for more clarifications.

// Input Format

// First line will contain N.
// Next N lines will contain nm, cls, s, and id respectively.
// Constraints

// 1 <= N <= 100
// 1 <= |nm| <= 100 and will contain only English alphabets.
// 1 <= cls <= 10
// 'A' <= s <= 'Z'
// 1 <= id <= 100
// Output Format

// Output all the students data after reversing their section.

#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    string s;
    int id;
};

int main(){
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id;
    }
    for(int i=0,j=n-1; i<j; i++,j--)
    {
        string temp = a[i].s;
        a[i].s = a[j].s;
        a[j].s = temp;
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;

    }
    return 0;
}






//                     problem number 4



// Problem Statement

// You will be given data for N students, where each student will have a name (nm), class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).

// Your task is to sort the students data according to the eng_marks in descending order. If multiple student have the same eng_marks then sort them according to the math_marks in descending order. If multiple student have the same math_marks then sort them accoding to the id in ascending order as the id will be unique.

// Input Format

// First line will contain N.
// Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.
// Constraints

// 1 <= N <= 1000
// 1 <= |nm| <= 100 and will contain only English alphabets.
// 1 <= cls <= 10
// 'A' <= s <= 'Z'
// 1 <= id <= 10^9
// 0 <= math_marks, eng_marks <= 100
// Output Format

// Output the data in sorted order as instructed.



#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    string s;
    int id;    
    int math_mark;
    int eng_mark;
};

bool cmp(Student l,Student r)
{
    if(l.eng_mark == r.eng_mark)
    {
        if(l.math_mark == r.math_mark)
        {
            return l.id < r.id;
        }
        else
        {
            return l.math_mark > r.math_mark;
        }        
    }
    else
    {
        return l.eng_mark > r.eng_mark;
    }
    
}

int main(){
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_mark >> a[i].eng_mark;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
    {
        cout << a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_mark<<" "<<a[i].eng_mark<<endl;

    }
    return 0;
}








//                    problem number 5

// Problem Statement

// You will be given data for N students, where each student will have a name (nm), class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).

// Your task is to sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order. If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.

// Input Format

// First line will contain N.
// Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.
// Constraints

// 1 <= N <= 100
// 1 <= |nm| <= 100 and will contain only English alphabets.
// 1 <= cls <= 10
// 'A' <= s <= 'Z'
// 1 <= id <= 1000
// 0 <= math_marks, eng_marks <= 100
// Output Format

// Output the students data in descending order according to the total marks.


#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    string s;
    int id;
    int math_mark;
    int eng_mark;
    int total_mark;
};

bool cmp(Student l, Student r){
    return l.total_mark == r.total_mark ? l.id < r.id : l.total_mark > r.total_mark;
}

int main(){
    int n; 
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].name>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_mark>>a[i].eng_mark;
        a[i].total_mark = a[i].math_mark + a[i].eng_mark;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
    {
        cout << a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_mark<<" "<<a[i].eng_mark<<endl;

    }
    return 0;
}