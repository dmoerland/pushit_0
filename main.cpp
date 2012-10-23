#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ()
{

    // Declare Functions
    double noChange(double, int);
    double pickAnother(double, int);
    void ranking(double, double);
    
    // Declare integers
    
    int count;                // The number of the experiment
    double win;               // The number of wins using a particular strategy
    
    
    win=0;
    count=1;
    //noChange(win, count);
    //pickAnother(win, count);
    ranking(noChange(win, count), pickAnother(win, count));
        
    return 0;
}






// 1000x sticking with the first door choosen

double noChange(double win, int count)
{
    
    int carDoor,                 // The number of the door which the car is behind
    choiceDoor;                  // The number of the door which the contestant chooses
    double winPercentOne;           // What percentage of the time the trategy worked

    
    while (count<1000)
    {
        carDoor = rand() % 3 + 1;
        choiceDoor = rand() % 3 + 1;
        
        count=count+1;
        
        
        if (carDoor==choiceDoor)
        {
            win=win+1;
            
        }
        
    }
        
        
    winPercentOne=(win/1000)*100;
    cout << setprecision(4);
    cout << "Strategy one worked " << winPercentOne << "% of the time"<< endl;

    
    return(winPercentOne);
}




// 1000x always picking another door

double pickAnother(double win, int count)
{
    
    int carDoor,                 // The number of the door which the car is behind
    choiceDoor,                  // The number of the door which the contestant chooses
    newChoice;
    double winPercentTwo;           // What percentage of the time the trategy worked
    
    
    while (count<1000)
    {
        carDoor = rand() % 3 + 1;
        choiceDoor = rand() % 3 + 1;
        newChoice = rand() % 3 +1;
        count=count+1;
        
        
        while (choiceDoor == newChoice)
        {
            newChoice = rand() % 3 + 1;
        }
        
        
        if (carDoor==newChoice)
        {
            win=win+1;
            
        }
        
    }
    
    
    winPercentTwo=(win/1000)*100;
    cout << setprecision(4);
    cout << "Strategy two worked " << winPercentTwo << "% of the time"<< endl;
    
    
    return(winPercentTwo);
}