
//           topic String

//                 Capacity function operation in string


#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "hello ruhul";
    int n = s.size();          // use size function
    int mx = s.max_size();     // use max_size function
    int cap = s.capacity();    // use capacity function
    int em = s.empty();        // use empty function
    s.resize(11);              // use resize function
    s.clear();                 // use clear funtion
    int emp = s.empty();       // use empty function
    cout << emp;
    return 0;
}









//                      Element access funstion in string


#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello Ruhul";
    cout << s[0]   << endl;                  // using second parenthisis

    cout << s.at(6) << endl;                  // using at funstion

    cout << s.front() << endl ;               // using front function

    cout << s.back() << endl  ;              // using back funstion



    return 0;
}








//                  Modifiers function in string


#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello Ruhul";
    s += " Amin";              // using operator
    s.append(" Amin");         // using append funstion
    s.push_back('R');          // using push_back funstion
    s.pop_back();              // using pop_back funstion
    s.push_back(' ');          // using push_back funstion
    s = "Arafat";              // using =  operatior
    s.assign(" Ruhul");        // using assign funstion
    s.erase(3,1);              // using erase funstion
    s.replace(2,1,"h");       // using replace funstion
    s.insert(2,"hello");       // using insert funstion
    cout << s << endl;         

    return 0;
}








//          using iterator    in string



#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "HelloRuhul";
    // for(int i=0; i<s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    for(auto it=s.begin();it<s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}








//         input string with space


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin.ignore();
    getline(cin,s);
    cout << n << endl;
    cout << s;
    return 0;
}




//          stringstrem



#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Assalamuayalikum Md.Ruhul Amin Arafat";
    stringstream ss;
    ss << s;
    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }
    
    return 0;
}