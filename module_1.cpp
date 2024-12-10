

#include <iostream>

//                                             print syntax for c++


int main(){
    std:: cout << "Hello Md.Ruhul Amin";
    return 0;
}

int main(){
    int n = 500;
    char c = 'R';
    double d = 3.86;
    std:: cout << "Hello Md.Ruhul Amin" << std:: endl << n << std:: endl << c << std:: endl << "My Diploma Result Is:" << " "<< d << std::endl;

    return 0;
}






//                       input syntax for c++


int main(){
    int n ;
    char c ;
    double d ;
    std:: cin >> n >> c >> d;
    std:: cout << "Hello Md.Ruhul Amin" << std:: endl << n << std:: endl << c << std:: endl << "My Diploma Result Is:" << " "<< d << std::endl;

    return 0;
}




//                type costing in c++


int main(){
    char c;
    std:: cin >> c ;
    std:: cout << (int)c;
    return 0;
}




//                 EOF using in c++

int main(){
    int n;
    while (std:: cin >> n)
    {
        std:: cout << n << std:: endl;
    }    
    return 0;
}





//            setprecision in c++

#include <iomanip>
using namespace std;

int main(){
    double d;
    cin >> d;    
    cout <<fixed << setprecision(2) << d << endl;
     
    return 0;
}





//                  ternary operator using in c++

int main()
{
    int n ;
    cin >> n;
    (n%2==0) ? cout << "Even\n" : cout << "Odd\n";
    return 0;
}




//               switch case in c++


int main(){
    int n;
    cin >> n;
    switch (n%2)
    {
    case 0:
        cout << "Even\n";
        break;
    
    case 1:
        cout << "Odd\n";
        break;
    }
}






//                   min max swap buldin function using in c++

#include <algorithm>
int main(){
    int a,b;
    cin >> a >> b;
    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}






//              string in c++

int main(){
    char s[100];
    cin.getline(s,100);
    cout << s;
    return 0;
}

int main(){
    string s;
    cin >> s;
    cout << s;
    return 0;
}