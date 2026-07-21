#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <thread>
#include <chrono>
using namespace std;


void home_screen();
void menu();
void wait_Enter();
void ready_entry(int& option, int min, int max);

void vault(string&);
void vault_screen();
void vault_menu();
void create_password(string&);
void password(string&, bool&);
void random_password(string&, bool&);
void vault_screen_erro();
void vault_enter();

int main() {
    srand(time(NULL));
    int option = 0;
    string rpassword;
    bool password_shown = false;
    
    create_password(rpassword);
    
    home_screen();
    wait_Enter();
    
    system("cls");
    do {
      
      
      menu();
      
      ready_entry(option, 0, 6);
      
      switch(option) {
           case 1:
             system("cls");
             random_password(rpassword, password_shown);
           
             break;
           case 2:
             system("cls");
             random_password(rpassword, password_shown);
             break;
           case 3:
             system("cls");
             random_password(rpassword, password_shown);
             break;
           case 4: 
             system("cls");
           
             break;
           case 5:
             system("cls");
             vault(rpassword);
             
            
           break;
           case 6:
           system("cls");
           
           break;
           case 0:
           system("cls");
           
           break;
           default:
           system ("cls");
           
           break;
      }
    
    } while (option != 0);
}



void home_screen() {

     vector<string> homeScreen = {
             "==============================================",

             "             KAU'S PROJECT HUB  ",
 
             "       Every expert was once a beginner. ",

             "                C++ Edition",

             "==============================================",

             "              Developed by Kau",

             "              Current mission:",
 
             "              > Learn C++",
             "              > Build amazing projects",
             "              > Reach Unreal Engine",

             "----------------------------------------------",
             "            Press ENTER to continue..."
     };
     
     for(int i = 0; i < homeScreen.size(); i++) {
        cout << homeScreen[i] << endl << endl << endl;
     };
}




void menu() {
     cout << R"(
  ██████████████████████████████████████████

         ░▒▓ KAU PROJECT HUB ▓▒░

  ██████████████████████████████████████████

  [01] 💖 LOVE QUIZ
  [02] 💌 LOVE LETTER
  [03] 🌸 NICKNAME GENERATOR
  [04] ✨ RANDOM MESSAGE
  [05] 🔐 SECRET VAULT
  [06] 👑 CREDITS

  [00] EXIT

  ──────────────────────────────────────────
  STATUS: ONLINE
  VAULT: LOCKED 🔒
  USER: ALINE 💜
     )";
     
}


void wait_Enter() {
     string enter;
     
     cout << ">> ";
     getline(cin, enter);
     
     while (enter.size() !=  0) {
       cout << "APENAS ENTER JEGUE" << endl << ">> ";
       getline(cin, enter);
     };
}


void ready_entry(int& option, int min, int max) {
     
    cout << "> CHOOSE AN OPTION:" << endl << endl << endl;
      
    do {
        cout << ">> ";
        cout << "antes do cin";
        if(cin >> option) {
           cout << "passei do cin";
          if(option >= 0 && option <= max) {
            cout << "entrei no if";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
          }
          
        } else {
            cout << "entrei no else";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            option += max;
        }
        
    } while(option < min or option > max);
}

void vault(string& rpassword) {
     bool correctorno = false;
     vault_screen();
     
     do {
        password(rpassword, correctorno);
        if(correctorno == true) {
          vault_enter();
          cout << "conteudo";
        
        } else {
            system("cls");
            cout << "Press Enter to continue";
            wait_Enter();
            system("cls");
            vault_screen();
        }
     }while(correctorno == false);
}

void vault_screen() {
     cout << R"(
Press [0] to go back 

             .----------------.
            /                  \
           |    ____________    |
           |   |            |   |
           |   |   ??????   |   |
           |   |____________|   |
           |        ||          |
           |        ||          |
           |    ___ || ___      |
           |   |          |     |
           |   |  VAULT   |     |
           |___|__________|_____|

            ✦ A SECRET AWAITS ✦

            ENTER THE PASSWORD:

            >> )";
}

void create_password(string& rpassword) { 
    vector <string> passwords = { 
           "L!n_2026",
           "El3ph4nt_gun",
           "Pink_panter"
    };
    int number = rand() % 2;
    number = rand() % passwords.size();
    rpassword = passwords[number];
    
}


void password(string& rpassword, bool& correctorno) {
    string password;
    
    
       
    if (getline(cin, password)) {
       if(password == rpassword) {
          correctorno = true;
       } else if (password != "0") {
           correctorno = false;
       }
          
    } 
    
}


void random_password(string& rpassword, bool& password_shown) {
    
    if(!password_shown) {
       int chance = rand() % 6;
       if(chance == 1) {
       cout << "this is password: " <<  rpassword;
         password_shown = true;
         wait_Enter();
       }
    }
}

void vault_enter() {
    cout << R"(
        ==================================================

        Loading module)";
    for(int i = 0; i < 3; i++) {
       cout << "." << flush;
       
    }
}

    