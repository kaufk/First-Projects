#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>

using namespace std;


void menu(); 
void add_task(vector<string>& task);
void view_task(vector<string>& task, int);
void remove_task(vector<string>& task, int);

int main() {
    int n;
    vector<string> tasks;

    

    while (n = 5) {
        menu();
        cout << "    > ";
        cin >> n;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
     
        switch (n) {
        case 1:
            system("cls");
            add_task(tasks);
            break;
        case 2:
            system("cls");
            view_task(tasks, size(tasks));
            break;
        case 3:
            system("cls");
            remove_task(tasks, size(tasks));
            break;
        case 4:

            return 0;

        }

        
    }
    return 0;

}

void menu() {
	cout << R"( 

    Welcome to Task List Tool 


    Menu Options:
    [1] Add Task
    [2] View Task
    [3] Remove Task
    [4] Quit


    Task lits system initialized and ready!
)";


}

void add_task(vector<string>& task) {
    int n;
    string newtask;
    cout << "\n\n    How many tasks do you want to add?\n\n" << "    > ";
   
    if (cin >> n) {
        cin.ignore();
        system("cls");

        for (int i = 0; i < n; i++) {
            cout << "    Enter your task:\n\n" << "    > ";
            getline(cin, newtask);
            task.push_back(newtask);
            
            cout << "\n\n    The task \"" << newtask << "\" was successfully added.\n\n";
        }
        this_thread::sleep_for(chrono::seconds(3));
        system("cls");
        
    }else {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
     }

}


void view_task(vector<string>& task, int number) {
    cout << "\n\n    Your Tasks:\n\n";
    if (number > 1) {
        for (int i = 0; i < number; i++) {
            cout << "    > " << task[i] << endl;

        }
    }
    else {
        cout << "    No tasks available. ";

    }
    this_thread::sleep_for(chrono::seconds(5));
    system("cls");
}


void remove_task(vector<string>& task, int number) {
    string remove;
    int n;
    bool found = false;

    cout << "    How many tasks do you want to remove?\n\n    > ";

    if (number == 0) {
        cout << " there are no taskks available.";
        this_thread::sleep_for(chrono::seconds(5));
        system("cls");
    }
    else {
        if (cin >> n) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            for (int i = 0; i < n; i++) {
                if (n > 0 && n <= number) {
                    cout << "    Which task do you remove?\n\n    > ";

                    getline(cin, remove);
                    for (int e = 0; e < number; e++) {
                        if (task[i] == remove) {
                            task.erase(task.begin() + i);
                            cout << "    Task removed.";
                            found = true;
                            this_thread::sleep_for(chrono::seconds(5));
                            system("cls");
                            break;
                        }
                    }
                    if (found == false) {
                           cout << "    Task not found.";
                           this_thread::sleep_for(chrono::seconds(5));
                           system("cls");
                    }
                }
                else {
                    cout << "Numbwer invalid. Please enter a number from 1 to " << number; 
                    this_thread::sleep_for(chrono::seconds(5));
                    system("cls");
                }
            }
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("cls");
        }

    }
}