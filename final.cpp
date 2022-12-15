#include<iostream>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;
struct Element{
    string userTyp;
    string email;
    string password;
    Element*next;
};
struct List{
    Element *head, *tail;
    int n;
};
List* createEmptyUserList(){
    List *L;
    L=new List;
    L->n=0;
    L->head = NULL;
    L->tail= NULL;
    return L;
}
void addUser(List *L,string userTyp,string email,string password){
    Element *e;
    e=new Element;
    e->userTyp = userTyp;
    e->email = email;
    e->password = password;
    e->next = NULL;
    if(L->n == 0){
        L->head = e;
        L->tail=e;
        L->n=L->n+1;
        }else{
        L->tail->next = e;
        L->n=L->n+1;
        L->tail=e;
    }
}
main(){

    string email, password,data;
    int AccessOpt, UserOpt;
    List *L;
    L=createEmptyUserList();

    ofstream file;
    ifstream infile;
    string filename = "users.txt";
    cout<<"Admin or User?";
    cin >>UserOpt;
    if(UserOpt ==2 ) {//User
        cout<< "Choose 1 to Login or 2 to Sign up:";
        cin >> AccessOpt;
        if(AccessOpt == 1 ){ //Login

        }
        else if(AccessOpt ==2){ //Sign up
            cout<< "Email:" ;
            cin >> email;
            infile.open(filename.c_str(), ios::in);
            //while(infile.eof()!=true){
                //infile >> data;
                data = "";
                getline(infile, data);

             std::vector< std::string > tokens;
                while ( std::cin >> data ) {
                   tokens.push_back( data );
                }

               //addUser(L,);
                cout << "Data:" <<data;
            //}
            cout<< "Password:";
            cin >> password;
            file.open(filename.c_str(),ios::app);
            file<<"User,"<<email<<","<<password<<"\n";

        }
        else{

        }
    }


}




