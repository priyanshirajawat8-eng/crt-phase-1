#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "=== Customer Support Menu ===" << endl;
    cout << "1. Account Issues" << endl;
    cout << "2. Payment Problems" << endl;
    cout << "3. Technical Support" << endl;
    cout << "4. Order Status" << endl;
    cout << "5. Speak to Representative" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected Account Issues." << endl;
            break;

        case 2:
            cout << "You selected Payment Problems." << endl;
            break;

        case 3:
            cout << "You selected Technical Support." << endl;
            break;

        case 4:
            cout << "You selected Order Status." << endl;
            break;

        case 5:
            cout << "Connecting to Customer Representative..." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}