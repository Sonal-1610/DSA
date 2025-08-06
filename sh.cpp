#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
public:
    int code;
    string name;
    double price;

    Item(int c, string n, double p) {
        code = c;
        name = n;
        price = p;
    }

    void display() const {
        cout << "Code: " << code << ", Name: " << name << ", Price: " << price << endl;
    }
};

int main() {
    vector<Item> items;
    int choice;

    while (true) {
        cout << "\n==== ITEM MANAGEMENT MENU ====\n";
        cout << "1. Add Item\n";
        cout << "2. Delete Item\n";
        cout << "3. Display Items\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int code;
            string name;
            double price;
            cout << "Enter item code: ";
            cin >> code;
            cin.ignore(); // clear newline
            cout << "Enter item name: ";
            getline(cin, name);
            cout << "Enter item price: ";
            cin >> price;
            items.push_back(Item(code, name, price));
            cout << "Item added successfully!\n";
            break;
        }
        case 2: {
            int delCode;
            cout << "Enter code of item to delete: ";
            cin >> delCode;
            bool removed = false;
            for (auto it = items.begin(); it != items.end(); ++it) {
                if (it->code == delCode) {
                    items.erase(it);
                    removed = true;
                    cout << "Item deleted successfully!\n";
                    break;
                }
            }
            if (!removed) {
                cout << "Item not found!\n";
            }
            break;
        }
        case 3: {
            if (items.empty()) {
                cout << "No items to display!\n";
            } else {
                cout << "\n---- ITEM LIST ----\n";
                double total = 0;
                for (const auto &item : items) {
                    item.display();
                    total += item.price;
                }
                cout << "--------------------\n";
                cout << "Total Amount of Items: " << total << endl;
            }
            break;
        }
        case 4:
            cout << "Exiting program...\n";
            return 0;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
}
