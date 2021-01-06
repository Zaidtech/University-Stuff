// To check if the string is a Lapindrome ie of the type ga | ga
//  ro |t| or
//  __     __
#include <iostream>
#include <string>
using namespace std;

string inorder(string);

int main(){
    int T=0;
    cin >> T;
    string words[T];
    // Getting inputs...
    for(int i=0; i<T; i++){
        cin >> words[i];
    }
     string str1 = "";
    string str2 = "";
    for (int i=0;i<T;i++){
        str1 = "";
        str2 = "";  
        for(int j=0; j<words[i].length(); j++)
        {
            if(j< words[i].length()/2)
            {
                str1 = str1+words[i][j];
            }
            else if(j >=words[i].length()/2)
            {   
                if (words[i].length() %2 ==0)
                {   
                    str2 = str2 + words[i][j];
                }
                else
                    str2 = str2 + words[i][j+1];
                }
                
        }       
                cout << "str1 is : "<< str1 << "\n ";
                cout << "str2 is : "<< str2 << "\n";
                
                str1 = inorder(str1);
                str2 = inorder(str2);
                cout << "Sorted str1 is :" << (str1) << "\n";
                cout << "Sorted str2 is :" << (str2) << "\n";

                // CHECKING FOR LAPINDROME OR NOT ... BUT THE CONDTION IS FAILING            
                if(str1 !=str2){
                    cout << "NO \n ";
                }
                else cout << "YES \n";

    }
       
}

inline string inorder(string word){
    for(int i=0; i<word.length(); i++){
        char temp ;
        for(int j =1; j<word.length(); j++){
            if(word[j] < word[j-1]){
                temp = word[j];
                word[j] = word[j-1];
                word[j-1] = temp;
            }

        }
    }
    return word;
}


           