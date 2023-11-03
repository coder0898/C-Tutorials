#include <iostream>

using namespace std;

int main()
{
    // First condition statement- IF statement
    //example voting eligibility program

    int candidateAge;

    cout<<"Welcome to Voter Eligibility Site!!!"<<"\n";
    cout<<"Enter Your Age:";
    cin >> candidateAge;
   
    if (candidateAge >= 18)
    {
        cout<<"Your Eligibility is checked, You are eligible to vote\n";
    }
    else if (candidateAge <=0)
    {
        cout<<"Your are not born yet!!!";
    }
    else if (candidateAge > 100)
    {
        cout<<"Your are too old to vote";
    }else
    {
       cout<<"Your Eligibility is checked, You are not eligible to vote sorry!!!\n";
    }
    

    return 0;
}
