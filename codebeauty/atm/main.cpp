#include <iostream>

using namespace std;

void showMenu()
{
  cout << "╔════════════════════╗" << endl;
  cout << "║    ATM MENU        ║" << endl;
  cout << "╠════════════════════╣" << endl;
  cout << "║ 1. Check Balance   ║" << endl;
  cout << "║ 2. Deposit         ║" << endl;
  cout << "║ 3. Withdraw        ║" << endl;
  cout << "║ 4. Exit            ║" << endl;
  cout << "╚════════════════════╝" << endl;
  cout << "Enter your choice: ";
}

int main()
{
  // check balance, deposit, withdraw, show menu
  bool status = true;
  int choice = 0;
  double balance = 0;
  double deposit = 0;
  double withdraw = 0;

  while (status)
  {
    showMenu();
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Your balance is: " << balance << endl;
      break;

    case 2:
      cout << "Enter amount to deposit: ";
      cin >> deposit;
      balance += deposit;
      cout << "Successfully deposited " << deposit << " to your account" << endl;
      cout << "Your new balance is: " << balance << endl;
      break;

    case 3:
      cout << "Enter amount to withdraw: ";
      cin >> withdraw;
      if (withdraw > balance)
      {
        cout << "Insufficient balance" << endl;
        cout << "Your balance is: " << balance << endl;
        break;
      }
      balance -= withdraw;
      cout << "Successfully withdrawn " << withdraw << " from your account" << endl;
      cout << "Your new balance is: " << balance << endl;
      break;

    case 4:
      cout << "Thank you for using our ATM" << endl;
      return 0;

    default:
      cout
          << "Invalid choice"
          << endl;
      break;
    }
  }

  return 0;
}