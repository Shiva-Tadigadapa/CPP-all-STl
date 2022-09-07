#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){


      /*---------------------------------------------------.getlne()---------------------------------------*/

    
    /* string s1;
    //cin>>s1; // ex : hello my name is shiva; then the string will take (hello as input) so we use // getline(cin,s1); //
   getline(cin,s1); */

    

    /*----------------------------------------------------.append()---------------------------------------*/

   /* string s1 = "my name ";
    string s2 = "shiva";
    s1.append(s2);  // here append attaches both s1 and s2 as an sentence || we can use '+' ex : s1+s2; //
    cout<<s1;  */


    
    /*----------------------------------------------------.clear()---------------------------------------*/

   /*  string s1 = "hello bro what are";
       s1.clear(); // by .clear() the string empty's itself;
    cout<<s1; // output = null(blank) */



    /*----------------------------------------------------.empty()--------------------------------------*/

  /*  string s1 = "hello bro what are";
    s1.clear(); // by .clear() the string empty's itself;
    // if(!s1.empty())
     if(s1.empty()){ // empty() checks if the string is empty or not ;
    cout<<s1;} // output = null(blank)*/
    


    /*----------------------------------------------------.compare()-------------------------------------*/

    /*string s1 = "abc";
    string s2 = "xyz";
    cout<< s2.compare(s1) << endl;*/
    


    /*----------------------------------------------------.erase()----------------------------------------*/

   /* string s1 = "balashiva";
    s1.erase(3,5);// .erase((index number to start eraseing) , (number of char to erase))
    cout<<s1; // output = bala */ 



   /*-----------------------------------------------------.find()----------------------------------------*/

    /*string s1 = "balashiva";
     int s2 = s1.find("shiva");// .find(("we have to enter the word to search or find"));
     cout<<s2; // output = 4 ; because shiva is starting from index '4' ; */
      


   /*-----------------------------------------------------.insert()----------------------------------------*/

    /* string s1 = "balava";
     string s2 = s1.insert(4,"shi");// .insert((we have to enter index from where we want to insert the word) , ("we have to enter the word to insert"));
     cout<<s2; // output = balashiva ; because we have inserted shi at from index '4' ;  */
    


    /*-----------------------------------------------------.size || lenght()----------------------------------------*/
 
     /*   string s1 = "balashiva is here";
    cout<<s1.size() || s1.length(); // 17 because length of the string is 17(including '\0' end point); */



     /*-----------------------------------------------------.substr()----------------------------------------*/

       /* string s1 = "balashiva is alive";
      string s2 = s1.substr(4,14);// .substr((we have to enter index from where we want to do a sub-string) , (we have to enter the length of the sub-string starting from index));
      cout<<s2; // output = shiva is alive ; because from 4th index the sub string is made of length of 17 ;  */



     /*-----------------------------------------------------.stoi()----------------------------------------*/

       /* string s1 = "500";
       int x = stoi(s1); // stoi(s1) converts a string to integer we can't print direct x = s1
       cout<<x; // without converting string to num; */



    /*-----------------------------------------------------.to_string()----------------------------------------*/

      /*int x = 100;
      string s1 = to_string(x); // converts interger to string
      cout<<s1;*/





    
    /*-----------------------------------------------------.sort()----------------------------------------*/

      /*string s1 = "zxcvbnmlkjhgfdsaqwertyuiop";
      sort(s1.begin(),s1.end()); // from s1.begin()=staring of the string to s1.end()=end of the string
      cout<<s1;*/

  return 0;

}






