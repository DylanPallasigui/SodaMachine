/******************************************************************************
Author: Dylan Pallasigui
Date: 2/3/2023
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //initalize variables
    int choice;
    int size;
    
    //display menu
    cout << "Soft drink prices\n" << endl;
    
    cout << "Coke - $1.50 20oz or $1.75 2Liter" << endl;
    cout << "Pepsi - $1.00 20oz or $2.00 2Liter" << endl;
    cout << "Mt. Dew - $.75 20oz or $1.90 2Liter" << endl;
    cout << "Dr. Pepper - $1.25 20oz or $2.25 2Liter\n" << endl;
    
    cout << "Soft drink selection menu\n" << endl;
    
    cout << "Coke ---------------------------------- 1" << endl;
    cout << "Pepsi --------------------------------- 2" << endl;
    cout << "Mt. Dew ------------------------------ 3" << endl;
    cout << "Dr. Pepper --------------------------- 4\n" << endl;
    
    //get choice
    cout << "Please enter the drink of your choice." << endl;
    
    cin >> choice;
    
    //switch when choice entered, error if 1,2,3,4 not entered. Break when done correctly and exits.
    switch(choice){
        case 1:
        //get size
        cout<<"Enter choice: "<<choice<<endl;
        cout << "What size of beverage would you like (1 - 20 oz bottle, 2 - 2 liter): ";
        cin >> size;
        
        //If else for getting size, display price when correct, error if wrong.
        if(size == 1){
            cout<<"Coke was selected, size is 20 oz bottle, you owe: $1.50\n"<<endl;
        }else if(size == 2){
            cout<<"Coke was selected, size is 2 liter bottle, you owe: $1.75\n"<<endl;
        }else{
            cout << "Error, please enter 1 or 2 for your size." << endl;
        }
        
        cout<<"Program exiting..."<<endl;
        
        break;
        
        case 2:
        //get size
        cout<<"Enter choice: "<<choice<<endl;
        cout << "What size of beverage would you like (1 - 20 oz bottle, 2 - 2 liter): ";
        cin >> size;
        
        //If else for getting size, display price when correct, error if wrong.
        if(size == 1){
            cout<<"Pepsi was selected, size is 20 oz bottle, you owe: $1.00\n"<<endl;
        }else if(size == 2){
            cout<<"Pepsi was selected, size is 2 liter bottle, you owe: $2.00\n"<<endl;
        }else{
            cout << "Error, please enter 1 or 2 for your size." << endl;
        }
        
        cout<<"Program exiting..."<<endl;
        
        break;
        
        case 3:
        //get size
        cout<<"Enter choice: "<<choice<<endl;
        cout << "What size of beverage would you like (1 - 20 oz bottle, 2 - 2 liter): ";
        cin >> size;
        
        //If else for getting size, display price when correct, error if wrong.
        if(size == 1){
            cout<<"Mt. Dew was selected, size is 20 oz bottle, you owe: $0.75\n"<<endl;
        }else if(size == 2){
            cout<<"Mt. Dew was selected, size is 2 liter bottle, you owe: $1.90\n"<<endl;
        }else{
            cout << "Error, please enter 1 or 2 for your size." << endl;
        }
        
        cout<<"Program exiting..."<<endl;
        
        break;
        
        case 4:
        //get size
        cout<<"Enter choice: "<<choice<<endl;
        cout << "What size of beverage would you like (1 - 20 oz bottle, 2 - 2 liter): ";
        cin >> size;
        
        //If else for size, display price when correct, error if wrong.
        if(size == 1){
            cout<<"Dr. Pepper was selected, size is 20 oz bottle, you owe: $1.25\n"<<endl;
        }else if(size == 2){
            cout<<"Dr. Pepper was selected, size is 2 liter bottle, you owe: $2.25\n"<<endl;
        }else{
            cout << "Error, please enter 1 or 2 for your size." << endl;
        }
        
        cout<<"Program exiting..."<<endl;
        
        break;
        
        default:
        //error checking
        cout << "Error, please enter 1 or 2 or 3 or 4." << endl;
    }

    return 0;
}