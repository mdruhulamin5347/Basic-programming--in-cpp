


//     string constrator 


#include <bits/stdc++.h>
using namespace std;

int main(){
      //number 1
    // string s("hello Ruhul");
      //number 2
    // string s("Hello Ruhul",5);
     // number 3
    // string s="Hello Ruhul";
    // string t(s,5);
     // number 4
    string s(3,'R');
    cout << s << endl;
    return 0;
}






//     string sorting using sort functin


#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Md.Ruhul Amin";
    sort(s.begin(),s.end());
    cout << s << endl;
    return 0;
}








//     range base forloop



#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Md.Ruhul Amin";
    for(char c : s)
    {
        cout << c << endl;
    }
    return 0;
}






//          reverse funstion use

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}





//           function create in class

#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    string sub;
    int math;
    int english;    
    Student(string name, int roll, string sub, int math, int english){
        this->name = name;
        this->roll = roll;
        this->sub = sub;
        this->math = math;
        this->english = english;
    }
    void total_mark(){
        cout << "Math and English -> Total mark " << " " << math + english << endl;
    }

};

int main(){
    Student ruhul("Md.Ruhul Amin", 534793, "math", 79,69);
    cout << ruhul.name << " " << ruhul.roll << " " << ruhul.sub <<" "<<ruhul.math<<" "<< ruhul.english<< endl;
    ruhul.total_mark();

    return 0;
}





//         dynamic object copy process


#include <bits/stdc++.h>
using namespace std;

class Cricketer{
public:
    string country;
    int jercy;
    Cricketer(string country, int jercy)
    {
        this->country = country;
        this->jercy = jercy;
    }
};

int main(){
    Cricketer* dhoni = new Cricketer("india",7);
    Cricketer* kohli = new Cricketer("india",18);
    cout << dhoni->country <<" "<<dhoni->jercy<< endl;
    *kohli = * dhoni;
    delete dhoni;
    cout << kohli->country << " " << kohli->jercy<< endl;
    return 0;
}