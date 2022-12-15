#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

struct Element{
    string email;
    string password;
    Element *next;
};
struct List{
    Element *head, *tail;
    int n;
};

List *createList(){
    List *ls;
    ls = new List;

    ls->n=0;
    ls->head=NULL;
    ls->tail=NULL;

    return ls;
}

void addToEnd(List *L,string emailData,string passwordData){
    Element *e;
    e=new Element;
    e->email = emailData;
    e->password = passwordData;
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
int convertToASCII(string letter)
{
    char x;
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i);
        //cout << int(x) << endl;
    }
    return int(x);
}
void addToFile(List *ls,string emailData,string passwordData){
    string fileValue,Email,Password,EmailNext,PasswordNext;
    fstream file;
    file.open("string.txt",ios::app);
    Element *tmp;
    tmp = ls->head;
    while(tmp!=NULL){
////        tmp->email =email;
////        while(file>>email>>fileValue){
////            if (fileValue==emailData) {
////               cout<<"it have already";
////            } else {
////                file<<tmp->email<<","<<tmp->password;
////            }
////        }
//        tmp->email=Email;
//        convertToASCII(emailData);
//        //tmp->email->next=PasswordNext;
//        tmp->password=Password;

//        if(tmp->email!=emailData){
//        //cout<<emailData<<" "<<passwordData;
//          file<<emailData<<" "<<passwordData;
//        }else if(tmp->email==emailData){
//            cout<<"already have";
//        }
////         file<<tmp->email;
////         file<<tmp->password;

        file<<emailData<<" "<<passwordData;
        tmp=tmp->next;


    }
    cout<<endl;
    file<<endl;
    file.close();
    file.open("string.txt");
    while (file>>fileValue){
        cout <<fileValue<< "\n";
    }
    file.close();
}


main()
{
    int n;
    List *L;
    L = createList();
    string email, password,reEnter;
    fstream file;
    file.open("string.txt",ios::app);
    cout<<"Please input option 1 for log in 2 for sign up : "; cin>>n;
    if(n == 1){
        //cout<<
    }else if(n==2){
        //cout<<":)";
    cout<<"email: "; cin>>email;
    cout<<"password: "; cin>>password;
    cout<<"re-enter password: "; cin>>reEnter;
    if(password==reEnter){
        addToEnd(L,email,password);
        addToFile(L,email,password);
    }else{

    }
}
//    convertToASCII("liza");



//    cout<<"Display from head:"<<endl;
//    displayFromHead(MyList);
//    cout<<endl;
//    cout<<"Display from tail:"<<endl;
//    displayFromTail(MyList);


    file.close();

    return 0;
}
