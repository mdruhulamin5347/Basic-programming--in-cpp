#include <bits/stdc++.h>
using namespace std;


//                       dynamic variable dicleration

int main(){
    int *n = new int;
    cin >> *n; 
    cout << *n << endl;
    *n = 30;
    cout << *n << endl;
    delete n;
    cout << *n << endl;
    cout << "hello program" << endl;
    return 0;
}






//                       dynamic array using in c++

int main(){
    int *a = new int[5];
    for(int i=0; i<5; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<5; i++)
    {
        cout << a[i] << " ";
    }
}





//                    dynamic array return from function


int* fun(){
    int *a = new int[5];
    for(int i=0; i<5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main(){
    int *b = fun();
    for(int i=0; i<5; i++)
    {
        cout << b[i] << " ";
    }
}






//                         dynamic array length incrase in c++


int main(){
    int *a = new int[5];
    for(int i=0; i<5; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int *b = new int[10];
    for(int i=0, j=5; i<5; i++,j++)
    {
        b[i] = a[i];
        cin >> b[j];
    }
    delete[] a;
    for(int i=0; i<10; i++)
    {
        cout << b[i] << " ";
    }
    
}

