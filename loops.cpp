#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "kamboh";

    // for loop
    /*for (int i = 0; i < str.length(); i++)
    {
       std::cout << str[i] << std::endl;
    }*/

    // While_looop
    // int i=str.length();
    // while (i!=-1)
    // {
    //   cout << str[i]<<"\n";
    //    i--;
    // }


    // do_while_loop

// int i=9;
//     do
//     {
//         if (i>=str.length())
//         {
//           std::cout << "number is bigger than string length" << std::endl;
//         }else{
//  std::cout << str[i] <<std::endl;
//         }
        
       
//         i++;
//     } while (i<str.length());


//for_range loop: it act like for each loop
// int arr[]={2,3,4,5};
// for (int i : arr)
// {
//     std::cout << i*2 << std::endl;
// }

    
    //loop_with_pointer
  char ch[]="ali_akbar";
for (char *mypntr = ch; *mypntr!=0; mypntr++)
{
    /* code */
    std::cout << *mypntr << std::endl;
}





    return 0;
}