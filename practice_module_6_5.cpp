

// problem number 1

// Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

// Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

// This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

// Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

// You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

// Input
// The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.

// Output
// Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    for(int i=1; i<=n; i++)
    {
        cin >> s;    
        if(10 < s.size())
        {
            cout << s.front() << s.size() - 2  << s.back() << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    
    return 0;
}









// problem number 2 



// Anton likes to play chess, and so does his friend Danik.

// Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.

// Now Anton wonders, who won more games, he or Danik? Help him determine this.

// Input
// The first line of the input contains a single integer n (1 ≤ n ≤ 100 000) — the number of games played.

// The second line contains a string s, consisting of n uppercase English letters 'A' and 'D' — the outcome of each of the games. The i-th character of the string is equal to 'A' if the Anton won the i-th game and 'D' if Danik won the i-th game.

// Output
// If Anton won more games than Danik, print "Anton" (without quotes) in the only line of the output.

// If Danik won more games than Anton, print "Danik" (without quotes) in the only line of the output.

// If Anton and Danik won the same number of games, print "Friendship" (without quotes).


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char ch[100001];
    for(int i=0; i<n; i++)
    {
        cin >> ch[i];
    }
    int anton=0;
    for(int i=0; i<n; i++)
    {
        if(ch[i]=='A')
        {
            anton++;
        }        
    }

    cout << danik << endl;
    if(danik > anton)
    {
        cout << "Danik" << endl;
    }
    else if(anton > danik)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}









// problem number 3


// Given a string S
// . For each word in S
//  reverse its letters then print it.

// Note: words are separated by space.

// Input
// Only one line contains a strings S
//  (1≤|S|≤106)
//  where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces.

// Output
// Print the answer required above.


#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    stringstream ss(s);
    string word;
    ss >> word;
    reverse(word.begin(),word.end());
    cout << word ;
    while(ss >> word)
    {
        reverse(word.begin(),word.end());
        cout << " " << word;
    }    
    return 0;
}







// problem number 4


// Given a string S
// . Print number of times that "EGYPT" word can be formed from S
// 's characters.

// Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and "eGyPt" are the same.

// Input
// Only one line contains a string S(1≤|S|≤106)
//  where |S| is the length of the string and it consists of lowercase and uppercase English letters.

// Output
// Print the answer required above.




#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'e' || s[i] == 'E')
        {
            e++;
        }
        else if(s[i] == 'g' || s[i] == 'G')
        {
            g++;
        }
        else if(s[i] == 'y' || s[i] == 'Y')
        {
            y++;
        }
        else if(s[i] == 'p' || s[i] == 'P')
        {
            p++;
        }
        else if(s[i] == 't' || s[i] == 'T')
        {
            t++;
        }
    }
    int nm = min({e,g,y,p,t});
    cout << nm;
    
    return 0;
}









// problem number 5


// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".



#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string cm;
    cm = s;
    reverse(s.begin(),s.end());
    if(cm == s)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}










// problem number 6

// Given a string S
// . Print S
//  after replacing every sub-string that is equal to "EGYPT" with space.

// Input
// Only one line contains a string S
//  (1≤|S|≤103)
//  where |S| is the length of the string and it consists of only uppercase English letters.

// Output
// Print the result as required above.




#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T')
        {
            s.replace(i,5," ");
        }
    }
    cout << s;
    return 0;
}








// problem number 7 


// A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

// Input
// The first line of the input contains an integer t
//  (1≤t≤103
// ) — the number of testcases.

// The description of each test consists of one line containing one string consisting of six digits.

// Output
// Output t
//  lines, each of which contains the answer to the corresponding test case. Output "YES" if the given ticket is lucky, and "NO" otherwise.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).



#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;    
    for(int i=1; i<=n; i++)
    {
        cin >> s;
        int f_sum = 0;
        int l_sum = 0;
        for(int j=0; j<6; j++)
        {
            int digit = s[j] - '0';
            if(j >=0 && j<=2)
            {
                f_sum += digit;
            }
            else if(j >= 3 && j <= 5)
            {
                l_sum += digit;
            }            
        }
        if(f_sum == l_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }

    return 0;
}











// problem number 8



// In an ICPC contest, balloons are distributed as follows:

// Whenever a team solves a problem, that team gets a balloon.
// The first team to solve a problem gets an additional balloon.
// A contest has 26 problems, labelled A
// , B
// , C
// , ..., Z
// . You are given the order of solved problems in the contest, denoted as a string s
// , where the i
// -th character indicates that the problem si
//  has been solved by some team. No team will solve the same problem twice.
// Determine the total number of balloons that the teams received. Note that some problems may be solved by none of the teams.

// Input
// The first line of the input contains an integer t
//  (1≤t≤100
// ) — the number of testcases.

// The first line of each test case contains an integer n
//  (1≤n≤50
// ) — the length of the string.

// The second line of each test case contains a string s
//  of length n
//  consisting of uppercase English letters, denoting the order of solved problems.

// Output
// For each test case, output a single integer — the total number of balloons that the teams received.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        unordered_set<char> store;
        for(char ch : s)
        {
            if(store.count(ch))
            {
                count++;               
            }
            else
            {
                count += 2;
                store.insert(ch);
            }
        
        }
        cout << count << endl;
    }
    return 0;
}