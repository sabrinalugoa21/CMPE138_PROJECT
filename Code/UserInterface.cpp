#include <iostream>
#include <string>
using namespace std; 

/**********FUNCTIONS**************/
int main_menu();
void User_menu();
void Manager_menu();
void EventPlanner_menu();
void Trainer_menu();
void Cook_menu();
string login();
/********************************/

int main()
{
    string username;
    string password; 
    //int type_of_user;

    //type_of_user = main_menu();

    
    username, password = login();
    //sql code here that determines if user, employee, or manager
    if() //sql code here for user 
    {

    }
    else if () // sql code here for manager
    {

    }
    else if () //sql code here for event planner
    {

    }
    else if () //sql code here for trainer 
    {

    }
    else if () //sql code her for cook 
    {

    }
    else //sql code for janitor
    {

    }


    return 0;
}

int main_menu()
{
    int choice  = 0;
    cout << "Choose from the following: " << endl;
    cout << "(1) Employee" << endl;
    cout << "(2) User" << endl;
    cout << "(3) Quit" << endl; 
    
    cout << "Enter an option: " << endl;
    cin >> choice;

    return choice;
}
//User's menu 
void User_menu()
{
    int choice  = 0;
    string name; 

    cout << "What do you want to do? " << endl;
    cout << "(1) View events schedule" << endl;
    cout << "(2) View Cafeteria schedule" << endl;
    cout << "(3) View gym courses schedule" << endl; 
    //cout << "(4) Sign up for a gym membership" << endl;
    cout << "(5) Quit" << endl;
    
    cout << "Enter an option: " << endl;
    cin >> choice;

    while (choice < 5)
    {
        if (choice == 1)
        {
            //php code
        }
        else if (choice == 2)
        {
            //php code
        }
        else if (choice == 3)
        {
            //php code
        }
        else 
        {
            //php code 
        }

    }

}

void Manager_menu()
{
    cout << "What do you want to do? " << endl;
    cout << "(1) Update Schedule" << endl;
    cout << "(2) Update Employees" << endl;  //add, delete, mod
    cout << "(3) Update Volunteers" << endl;  //add, delete, mod
    cout << "(4) Quit" << endl;
    
    cout << "Enter an option: " << endl;
    cin >> choice;

    while (choice < 4)
    {
        if (choice == 1)
        {
            //php code
        }
        else if (choice == 2)
        {
            //php code
        }
        else 
        {
            //php code
        }

    }    
}

void EventPlanner_menu()
{
    cout << "What do you want to do? " << endl;
    cout << "(1) Add an Event" << endl;
    cout << "(2) Delete an Event" << endl;  
    cout << "(3) Update an Event" << endl;  
    cout << "(4) Quit" << endl;
    
    cout << "Enter an option: " << endl;
    cin >> choice;

    while (choice < 4)
    {
        if (choice == 1)
        {
            //php code
        }
        else if (choice == 2)
        {
            //php code
        }
        else 
        {
            //php code
        }

    }    
}

void Trainer_menu()
{
    cout << "What do you want to do? " << endl;
    cout << "(1) Add a course" << endl;
    cout << "(2) Add a trainee" << endl;  
    cout << "(3) Delete a course" << endl; 
    cout << "(4) Delete a trainee" << endl;
    cout << "(5) Update a course" << endl;
    cout << "(6) Update a trainee" << endl; 
    cout << "(7) Quit" << endl;
    
    cout << "Enter an option: " << endl;
    cin >> choice;

    while (choice < 7)
    {
        if (choice == 1)
        {
            //php code
        }
        else if (choice == 2)
        {
            //php code
        }
        else if (choice == 3)
        {
            //php code
        }
        else if (choice == 4)
        {
            //php code
        }
        else if (choice == 5)
        {
            //php code
        }
        else 
        {
            //php code
        }
    }    
}

void Cook_menu()
{
    cout << "What do you want to do? " << endl;
    cout << "(1) Add meals" << endl;
    cout << "(2) Delete meals" << endl;  
    cout << "(3) Update meals" << endl; 
    cout << "(4) Quit" << endl;
    
    cout << "Enter an option: " << endl;
    cin >> choice;

    while (choice < 7)
    {
        if (choice == 1)
        {
            //php code
        }
        else if (choice == 2)
        {
            //php code
        }
        else if (choice == 3)
        {
            //php code
        }
        else 
        {
            //php code
        }
        
    }
}

string login()
{
    string username;
    string password; 

    cout << "Username: ";
    cin >> username;
    cout << endl;

    cout << "Password: ";
    cin >> password;
    cout << endl;
}