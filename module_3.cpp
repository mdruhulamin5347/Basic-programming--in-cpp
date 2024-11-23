
// using class and object in c++

// #include <bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//     char name[100];
//     int roll;
//     char section[5];
//     double gpa;
// };

// int main(){
//     Student ruhul;
//     char temp[100] = "MdRuhulAmin";
//     strcpy(ruhul.name,temp);    
//     ruhul.roll = 534793;
//     char sec[5] = "A";
//     strcpy(ruhul.section,sec);
//     ruhul.gpa = 3.81;    
//     cout << ruhul.name << " " << ruhul.roll << " " << ruhul.section << " " << ruhul.gpa << endl;
//     return 0;
// }




// user input data




// #include <bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//     char name[100];
//     int roll;
//     char section[5];
//     double gpa;
// };

// int main(){
//     Student ruhul;
//     cin >> ruhul.name >> ruhul.roll >> ruhul.section >> ruhul.gpa;  
//     cout << ruhul.name << " " << ruhul.roll << " " << ruhul.section << " " << ruhul.gpa << endl;
//     return 0;
// }



// using with space input character


// #include <bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//     char name[100];
//     int roll;
//     char section[5];
//     double gpa;
// };

// int main(){
//     Student ruhul;
//     Student arafat;
//     cin.getline(ruhul.name,100);
//     cin >> ruhul.roll >> ruhul.section >> ruhul.gpa;  
//     cin.ignore();
//     cin.getline(arafat.name,100);
//     cin >> arafat.roll >> arafat.section >> arafat.gpa; 
//     cout << ruhul.name << " " << ruhul.roll << " " << ruhul.section << " " << ruhul.gpa << endl;
//     cout << arafat.name << " " << arafat.roll << " " << arafat.section << " " << arafat.gpa << endl;

//     return 0;
// }






// using constractor in c++


// #include <bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//     char name[100];
//     int roll;
//     char section;
//     double gpa;
//     Student(const char* name,int roll,char section,double gpa){
//         strcpy(this->name, name);
//         this->roll = roll;
//         this->section = section;
//         this->gpa = gpa;
//     }
// };

// int main(){
//     Student ruhul("Md Ruhul Amin", 534793, 'A', 3.81);
//     Student arafat("Md Arafat", 660211,'A',3.87);
//     cout << ruhul.name << " " << ruhul.roll << " " << ruhul.section << " " << ruhul.gpa << endl;
//     cout << arafat.name << " " << arafat.roll << " " << arafat.section << " " << arafat.gpa << endl;

//     return 0;
// }






// object return to function 



// #include <bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//     char name[100];
//     int roll;
//     char section;
//     double gpa;
//     Student(const char* name,int roll,char section,double gpa){
//         strcpy(this->name, name);
//         this->roll = roll;
//         this->section = section;
//         this->gpa = gpa;
//     }
// };
// Student fun(){
//     Student ruhul("Md Ruhul Amin", 534793, 'A', 3.81);    
//     return ruhul;
// }
// int main(){
//     Student ruhul = fun();
//     Student arafat("Md Arafat", 660211,'A',3.87);
//     cout << ruhul.name << " " << ruhul.roll << " " << ruhul.section << " " << ruhul.gpa << endl;
//     cout << arafat.name << " " << arafat.roll << " " << arafat.section << " " << arafat.gpa << endl;

//     return 0;
// }







// Dynamic object return in function



// #include <bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//     char name[100];
//     int roll;
//     char section;
//     double gpa;
//     Student(const char* name,int roll,char section,double gpa){
//         strcpy(this->name, name);
//         this->roll = roll;
//         this->section = section;
//         this->gpa = gpa;
//     }
// };
// Student* fun(){  
//     Student * r = new Student("Md Ruhul Amin", 534793, 'A', 3.81);
//     return r;
// }
// int main(){
//     Student* ruhul = fun();
//     Student arafat("Md Arafat", 660211,'A',3.87);
//     cout << ruhul->name << " " << ruhul->roll << " " << ruhul->section << " " << ruhul->gpa << endl;
//     cout << arafat.name << " " << arafat.roll << " " << arafat.section << " " << arafat.gpa << endl;

//     return 0;
// }









// array sorting using sort function in c++



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr,arr+n,greater<int>());
//     for(int i=0; i<n ; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }