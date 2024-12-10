



//       array of object


#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int mark;
};
int main(){
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin >> a[i].roll >> a[i].mark;
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }
    return 0;
}














//                  min max find in array object



#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int mark;
};
int main(){
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin >> a[i].roll >> a[i].mark;
    }
    Student mn;
    mn.mark = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(a[i].mark < mn.mark)
        {
            mn = a[i];
        }
    }
    cout << mn.name << " " << mn.roll << " " << mn.mark << endl;   
    return 0;
}

















//             sort in array of object



#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int mark;
};
bool cmp(Student l, Student r){
    return l.mark > r.mark ? true : false;
}
int main(){
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {   
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].mark ;
    }  
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }
    return 0;
}






#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int mark;
};
bool cmp(Student l, Student r){
    
    // if(l.mark == r.mark)
    // {
    //     return l.roll < r.roll ? true : false;
    // }
    // else
    // {
    //     return l.mark > r.mark ? true : false;
    // }
    return l.mark == r.mark ? l.roll < r.roll : l.mark > r.mark;
}
int main(){
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {   
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].mark ;
    }  
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }
    return 0;
}