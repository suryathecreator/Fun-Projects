#include <iostream>
using namespace std;

int rev(int, int, int);

int main() 
{
    int input, step = 0, output, out = 0;

    cout << "What is the non-negative number you want me to reverse? ";
    cin >> input;

    if (input < 0) 
    {
        cout << "Your number is negative. " << endl;
        return 0;
    }

    output = rev(input, step, out);
    cout << output << endl;

    return 0;


}

int rev(int input, int step, int out)
{
   int reversed;

   if (input == 0)
   {
       return out;
   }

   if (step == 0)
   {
       
       out = input % 10;
       input = input/10;
       step++;  
   } 

   else  
   {
       out = (out * 10) +  (input % 10);
       input = input/10;
   }

   return rev(input, step, out);

}