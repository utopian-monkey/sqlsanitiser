#include <iostream>
#include <string.h>
using namespace std;

int main(string username, string password)
{
   string arr[]= {"--"," or "," #","/*", ";"," ","'",};
   username= username+" ";
   password=password+" ";
   for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
   {
        for(int j=0;j<username.length()-arr[i].length();j++)
        {
            if(username.substr(j,arr[i].length())==arr[i])
            {
                username.replace(j,arr[i].length(),"");
            }
        }
        for(int j=0;j<password.length()-arr[i].length();j++)
        {
            if(password.substr(j,arr[i].length())==arr[i])
            {
                password.replace(j,arr[i].length(),"");
            }
        }
   }

   cout<<" The sanitised username is "<<username<<endl;
   cout<<" The sanitised password is "<<password<<endl;
}
