#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    std::vector<std::string> tasks;
    
    std::cout << "Welcome to Task List Tool!" << std::endl;
    std::cout << std::endl;
    std::cout << "Menu Options:" << std::endl;
    std::cout << "1. Add Task" << std::endl;
    std::cout << "2. View Tasks" << std::endl;
    cout << "3. Remove Task" << endl;
    std::cout << "4. Quit" << std::endl;
    std::cout << std::endl;
    std::cout << "Task list system initialized and ready!" << std::endl;
    
    int n;
    while (n = 5){
        cin >> n;
        cin.ignore();
        
        switch (n) {
            case 1:
              cout << "Choose an option: ";
              for (int i = 0; i < n; i++) {
              std::string task;
              std::getline(std::cin, task);
              tasks.push_back(task);
              cout << "Task \"" << task << "\" added successfully!" << endl;
              
              std::cout << "Total tasks: " << tasks.size() << std::endl;
    
    } 
              break;
            case 3:
              cout << "Choose an option: ";
              int taskNumber;
              std::cin >> taskNumber;
    
              if (taskNumber < 1 || taskNumber > tasks.size()) {
                std::cout << "Error: Invalid task number. Please enter a number between 1 and " << tasks.size() << "." << std::endl;
                break;
              } else {
                  
                 std::string removedTask = tasks[taskNumber - 1];
                 tasks.erase(tasks.begin() + (taskNumber - 1));
        
                 std::cout << "Task \"" << removedTask << "\" removed successfully!" << std::endl;
                }
                if (tasks.empty()) {
                    
                std::cout << "No tasks remaining." << std::endl;
                std::cout << "Total tasks: " << tasks.size() << std::endl;
               break; 
              } else {
                  
                  std::cout << "Remaining Tasks:" << std::endl;
                  for (int e = 0; e < tasks.size(); e++) {
                  std::cout << (e + 1) << ". " << tasks[e] << std::endl;
                  }
                  std::cout << "Total tasks: " << tasks.size() << std::endl;
                  
                }
              break;
               
            case 2:  
              cout << "Choose an option: ";
              if (tasks.empty()) {
                std::cout << "No tasks available." << std::endl;
                break;
              } else {
                  std::cout << "Your Tasks:" << std::endl;
                  for (int i = 0; i < tasks.size(); i++) {
                  std::cout << (i + 1) << ". " << tasks[i] << std::endl;
                      
                  }
                
                std::cout << "Total tasks: " << tasks.size() << std::endl;
    
                break;
            case 4: 
              cout << "Choose an option: ";
              cout << "Thank you for using Task List Tool!" << endl;
              return 0;
           default:
             cout << "Choose an option: ";
             cout << "Invalid choice. Please try again." << endl;
             break;
        }
    }
}
    return 0;
}