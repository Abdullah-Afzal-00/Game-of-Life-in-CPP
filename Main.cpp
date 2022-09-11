#include <iostream>
#include "Grid.cpp"
#include "HomePage.cpp"

using namespace std;

int main(){
    int choice = 0 ; 
    HomePage hmp;
    Grid g;
    hmp.print();
    hmp.Rules();
    do{
        if(choice < 0 or choice > 2) printf("\x1B[31mEnter the Valid Choice \033[0m\n");
        hmp.playMenu();
        cout<<"Enter Choice : ";
        cin>>choice;
    }while(choice < 0 or choice > 2 );

    if(choice == 1){

    }
    else if(choice == 2){
        g.create_R_Penotomio();
    }

    while(true){
        g.printGrid();
        Sleep(1000);
        system("cls");
        g.Scan();
        //Sleep(1000);
    }
    
    return 0;
}