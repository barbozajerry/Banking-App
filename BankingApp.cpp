#include<iostream> 
#include<iomanip> 
#include<limits>

using namespace std; 

int main()  { 
    double initInv; // Initial Investment 
    double monDep; // monthly Deposit
    double anInt; // Annual Interest 
    double numYears; // Number of years 
    double months; 
    double totalAmount; // Total Amount
    double initAmount; // Initila Amount 
    double totalYearlyInterest; 
    double openIvt; 
    double total;
    char userKey;
 
    //This prints "Press any key to continue . . ."
   //system("pause"); // Mac or Linux use "read" for Windows you use "pause"
    system("read -p 'Press enter to continue . . .' var");
   //Get data
   cout << "********************************" << endl;
   cout << "********** Data Input **********" << endl;
   cout << "Initial Investment Amount: $";
    while (!(cin >> initInv) || initInv < 0) {
    {
        if (!cin)
        {
            cout << "Invalid input\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
}
        cout << "Please enter a positive number: " << endl << "Initial Investment Amount: $";
        
        }

    //cout << "\nInitial Investment Amount: $" << initInv << '\n';
}

   cout << "Monthly Deposit: $";
      while (!(cin >> monDep) || monDep < 0) {
    {
        if (!cin)
        {
            cout << "Invalid input\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
}
        cout << "Please enter a positive number: " << endl << "Monthly Deposit: $";
        
        }


}
   //cin >> monDep;
   cout << "Annual Interest: %";
      while (!(cin >> anInt) || anInt < 0) {
    {
        if (!cin)
        {
            cout << "Invalid input\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
}
        cout << "Please enter a positive number: " << endl << "Annual Interest: %";
        
        }

}
   cout << "Number of years: ";
     while (!(cin >> numYears) || numYears < 0) {
    {
        if (!cin)
        {
            cout << "Invalid input\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
}
        cout << "Please enter a positive number: " << endl << "Number of years: " ;
        
        }

}
   //cout << "Press any key to continue . . .";
   //cin.ignore();
   months = numYears * 12;
   openIvt = initInv;
   //cout << "Press any key to continue . . ."; // prints out the message
   //cin >> userKey; // waits for user input
   
   //Prints "Press any Key to continue . . ."
   //system("pause");
   //system("PAUSE");
   system("read -p 'Press enter to continue . . .' var");

       //Set total amount to initial investment to be updated
   totalAmount = initInv;

   //Display year data without monthly deposits
   cout << "\n     Balance and Interest Without Additional Monthly Deposits\n";
   cout << "====================================================================" << endl;
   cout << "   Year\t\tYear End Balance\tYear End Earned Interest\n";
   cout << "--------------------------------------------------------------------" << endl;


   for (int i = 0; i < numYears; i++) {
       //Calculate yearly interest
       initAmount = (totalAmount) * ((anInt / 100));
       //year end total
       totalAmount += initAmount;
       //Print results to table showcasing only two decimal points
       cout << right << setw(5) << (i + 1) << setw(20) << right << "$" << fixed 
       << setprecision(2) << totalAmount << "\t\t\t\t$" << initAmount << "\n" << endl;

   }

   totalAmount = initInv;

   cout << "\n\n     Balance and Interest With Additional Monthly Deposits" << endl;
   cout << "===================================================================" << endl;
   cout << "  Year\t\tYear End Balance\tYear End Earned Interest\n";
   cout << "-------------------------------------------------------------------" << endl;

   for (int i = 0; i < numYears; i++) {
        //yearly interest = zero from the start of the year
       totalYearlyInterest = 0;

       for (int j = 0; j < 12; j++) {
            //monthly interest
           initAmount = (totalAmount + monDep) * ((anInt / 100) / 12);
           //month end interest
           totalYearlyInterest +=  initAmount;
           //month end total
           totalAmount +=  monDep + initAmount;
        }

       cout << right << setw(5) << (i + 1) << right << setw(20) <<  "$" <<  fixed << 
       setprecision(2) << left << setw(12) << totalAmount << right << setw(21)  << "$" 
       << left << totalYearlyInterest << endl << endl;
   }
    cout << "     Balance and Interest with Additional Monthly Deposits" << endl;
    cout << "===========================================================================================" << endl;
    cout << " Month\t Opening Amount   Deposited Amount    $ Total    $ Interest     Closing Balance" << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;

    initAmount = 0;
    totalAmount = 0;

    for (int i = 0; i < months; i++) {
            totalYearlyInterest = 0;
        initAmount = ((totalAmount + monDep) * ((anInt / 100) / 12));
        total = openIvt + monDep;
        totalAmount = total + initAmount;
        
        cout << right <<setw(4) << (i + 1) << right << setw(10) << fixed << setprecision(2) << "$"
            << setw(16) << left << openIvt << "$" << right << monDep << setw(10) << "$"
            << setw(14) << left << total << "$" << left << initAmount << right << setw(12) << "$"
            << right << totalAmount << endl << endl;
        openIvt = totalAmount;
    }
    return 0;
}




