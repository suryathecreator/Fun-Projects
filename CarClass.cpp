#include <iostream>
#include <cstdlib>
#include <thread>        
#include <chrono>   
using namespace std;

class Car 
{
public:
    int year;
    int speed;
    string make;
    void Constructor(int yr, string mk)
    {
        year = yr;
        make = mk;
        speed = 0;
    }
    void Accelerate()
    {
        speed += 5;
    }
    void Brake()
    {
        speed -= 5;
    }

};



int main()
{
Car values;
int input, opp, yr, n = 1;
string mk;


cout << "To start, please enter the Year and Make of your car seperated by one(1) space. ";
cin >> yr >> mk;
values.Constructor(yr, mk);
cout << "**** ! Welcome to 🅁 🄰 🄲 🄴 🅁  🅆 🄾 🅁 🄻 🄳  ! ****" << endl;
cout << "**** ! TO WIN: GET TO THE SAME SPEED AS YOUR OPPONENT ! ****" << endl;
cout << "Your car will be a " << yr << " " << mk << "!" << endl;
cout << "Your opponent's car is a " << yr << " Bugatti!" << endl;
this_thread::sleep_for(chrono::seconds(1));
cout << "Get ready to race in: ③ ... ② ... ① ... GO!" << endl;
while (n > 0)
{
    opp = (rand() % 10) + 5;
    values.speed = rand() % 10;
    cout << "Speed: " << values.speed << endl;
    cout << "Would you like to brake(1), accelerate(2), or forfeit(any #)? ";
    cin >> input;
    if (input == 1)
    {
        values.Brake();
    }
    else if (input == 2)
    {
        values.Accelerate();
    }
    else
    {
        cout << "You lost!" << endl;
        exit(0);
    }
    if (values.speed < 0)
    {
        cout << "Your resultant speed was: 0" << endl;
    }
    else
    {
    cout << "Your resultant speed was: " << values.speed << endl;
    }
    cout << "The opponent's speed was: " << opp << endl;
    if (values.speed == opp)
    {
        cout << "You won!" << endl;
    }
    else
    {
    cout << "You lost!" << endl;
    }
    cout << "Play again(y = 1, n = any #)?  ";
    cin >> input;
    if (input != 1)
    {
        cout << "See you!" << endl;
        exit(0);
    }
    cout << "------------------------------------------------------------------" << endl;


}


return 0;
}