#include <iostream>
using namespace std;

/* 
Task
In this assignment you will create a program for a traveling door to
 door door salesperson. 
 The salesperson wants to sell doors at a 75% markup by the piece. 
  the salesperson purchases from their distributor they have to buy doors in 
  bulk bundles of 100 (much too many for one person to buy at once). Whenever the salesperson orders
   more doors the quantity of bundles needed and bundle price fluctuates. For this assignment, write a
    program that can help the door to door door salesperson calculate how much they will need to 
    charge per door. In order to have a fully functional program for the salesperson the program must:
step 1 
Ask for the price of a bundle of doors, and read the price into a floating-point variable in main memory.

*/
int main() {
//step 2 

// constant int bundleSize = 100;  // wrong 
const int bundleSize = 100;
const float markUp = 0.75; 

int quantity;
    // step 1 
 float doorBundlePrice; // Declare a float variable
        cout << "Enter price of a bundle of doors: "; // Prompt the user
        cin >> doorBundlePrice; // Read input into the variable
        cout << "Door bundle price: $" << doorBundlePrice << endl; // Display the result
/* 
step 2 :
Ask for the quantity of door bundles wanted, and read the price into an integer variable in main memory.
    int quantity;

    cout << "Enter the quantity of door bundles you want: ";
    cin >> quantity;

    cout << "You entered: " << quantity << " bundle(s)." << endl;

    return 0;
*/

        cout << "\n\n \t\t  Enter the amount of quantity wanted : ";   // amount of quanity
        cin >> quantity; 
        cout << "You entered " << quantity << " of door bundles wanted "; 


    /*
    
    Step 3 :Calculate the total amount of doors being purchased 
    using the formula below, then save that value into an integer 
    variable in main memory.
    */
// total number of doors being purchased

    int totalDoors = quantity * bundleSize;

        cout << "\n\n \t\t Total number of doors being purchased : " << totalDoors << endl;


    // formula to calculate the price per door 
    float  SingleDoorTotalPrice = doorBundlePrice / bundleSize;
    
    //formula for the total cost 
    float totalCost = doorBundlePrice * quantity;


        // The formula to calculate the sale price of a single door at a 75% markup is: 
    float single_Door_Sale_Price = SingleDoorTotalPrice + SingleDoorTotalPrice * markUp ; 


        //The formula to calculate the sale price of every door at a 75% markup
    float salePriceAllDoors = single_Door_Sale_Price * totalDoors;


        //The formula to calculate the profit on a single door is:

    float profitSingleDoor = single_Door_Sale_Price - SingleDoorTotalPrice;
    
// the formula to calculae the total profit : 
    float totalProfit = profitSingleDoor * totalDoors;
        cout << " \n Single Door Cost : $" << SingleDoorTotalPrice << endl;
        cout << "\n Total Cost : $" << totalCost << endl;
        cout << "\nSingle Door sale price : $" << single_Door_Sale_Price << endl;
        cout << "\n Sale Price of all doors : $" << salePriceAllDoors << endl;
        cout << "\n Profit on a single door : $" << profitSingleDoor << endl;
        cout << "\n Total Profit : $" << totalProfit << endl;
    return 0;
}
