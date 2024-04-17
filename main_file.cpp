#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;


void login();
void registration();
void forgot();

int main(){

    int c;
    cout<<"\t\t\t_____________________________\n\n\n";
    cout<<"\t\t\t Welcome to SoftBoss  \n\n\n";
    cout<<"\t\t\t____________ Menu ___________\n\n\n";
    cout<<"                             \n\n";
    cout<<"\t| Press 1 To login |"<<endl;
    cout<<"\t| Press 2  sign up|"<<endl;
    cout<<"\t| Press 3 To forgot|"<<endl;
    cout<<"\t| Press 4 To exit|"<<endl;
    cout<<"\n\t\t Please enter your choice";
    cin>>c;
    cout<<endl;

    switch(c){

        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout<<"thank you";

        deafault:
            system("cls");
            cout<<"\t\t\t Please select from the options given above \n"<<endl;
            main();
    }
}

void login (){
    int count;
    string userId, password, id, pass;
    system("cls");
    cout<<"\t\t\t Please Enter the Username and password: "<<endl;
    cout<<"\t\t\t USERNAME ";
    cin>>userId;
    cout<<"\t\t\t PASSWORD ";
    cin>>password;

    ifstream input("records.txt");

    while(input>>id>>pass){
        if(id==userId && pass==password){
            count=1;
            system("cls");
        }
    }
    input.close();

    if(count==1)
    {
        cout<<userId<<"\n your login is successful \n Thanks for log in | \n";
        main();
    }else{
        cout<<"\n login error \n please check your Username and password\n";
        main();
    }
}

void registration(){
    string ruserId, rpassword, rid, rpass;
    system("cls");
    cout<<"\t\t\t Enter the Username : ";
    cin>>ruserId;
    cout<<"\t\t\t Enter the password : ";
    cin>>rpassword;

    ofstream f1("records.txt", ios::app);
    f1<<ruserId<<' '<<rpassword<<endl;
    system("cls");
    cout<<"\n\t\t\t Registration is successful! \n";
    main();

}
void forgot(){
    int option;
    system("cls");
    cout<<"\t\t\t you forgot your password? no worries \n";
    cout<< "press 1 to search your id by username"<<endl;
    cout<< "press 2 to go back to the main menu"<<endl;
    cout<< "\t\t\t Enter your choice : ";
    cin>>option;

    switch(option){

        case 1: {
            int count = 0;
            string suserId, sId, spass;
            cout<<"\n\t\t\t Enter the username which you remembered : ";
            cin>>suserId;

            ifstream f2("records.txt");
            while(f2>>sId>>spass){
                if(sId==suserId){
                    count=1;
                }
            }
            f2.close();
            if(count==1){

                cout<<"\n\n your account is found: \n";
                cout<<"\n\n your password is : "<<spass;
                main();
            }
            else{
                cout<<"\n\t sorry your account is not found! \n";
                main();
            }
            break;
        }

        case 2 :
            {
                main();
            }
        default:
            cout<<"\t\t\t Wrong choice! Please try again later"<<endl;
            forgot();
    }
}
