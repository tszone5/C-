//______________________________________________//NUMBER GUESSING SYSTEM//__________________________________________

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Guess a number between 1 and 100:\n";

    do {
        cin >> guess;
        attempts++;
        if (guess > secretNumber)
            cout << "Too high! Try again:\n";
        else if (guess < secretNumber)
            cout << "Too low! Try again:\n";
        else
            cout << "Correct! You guessed it in " << attempts << " attempts.\n";
    } while (guess != secretNumber);

    return 0;
}


//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


 //--------------------------- Multiplication Table Generator-----------------------------------------------


  #include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}


//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//-------------------------------------Simple ATM Interface--------------------------------------------------//

#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    int choice, amount;

    while (true) {
        cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: " << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient Balance\n";
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}





