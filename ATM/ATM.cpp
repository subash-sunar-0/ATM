/* ***************************************************************************************/
/*****************************************************************************************/
/************************* TITLE:ATM MACHINE USING C++ PROGRAMMING ************************/
/******************************* AURTHOR: SUBASH SUNAR ***********************************/
/**************************************** VERSION: 1***************************************/
/*************** DESCRIPTION: This is a simple ATM MACHIN written in c++ language*********/
/***************************************************************************************** */
/******************************************************************************************* */

#include<iostream>

int balance=10000;

void Display(){
    std::cout<<"==================WELLCOME TO ATM======================\n \n";
    std::cout<<"1.Balance inquiry\n2.Deposit\n3.withdraw\n4.quit\n";
    std::cout<<"=======================================================\n \n";
    
}

void BalanceInquiry(){
    std::cout<< "your current balance is "<< balance<<std::endl;

}

int Deposit(){
    std::cout<<"Enter your amount to Deposit\n";
    int amount;
    std::cin>>amount;

    balance=balance+amount;
    std::cout<<"Your current balance is " <<balance<<std::endl;
    return balance;
}

void withdraw(){
    std::cout<<"Enter the amount you want to withdraw\n";
    int withdraw_Amount;
    std::cin>>withdraw_Amount;
    balance= balance-withdraw_Amount;
    if (balance<0)
    {
        
        std::cout<<"Not Enough Balance\n";
    }
    else{
        std::cout<<"you have sucessfully withdraw Rs."<<withdraw_Amount<<std::endl;
        std::cout<<"your remanning balance is "<<balance<<std::endl;
    }
    
}

void quit(){

    std::cout<<"===================THANKYOU FOR USING OUR SERVICE=================\n\n";

}

int main(int argc, char const *argv[])
{
    bool run= true;

    while (run)
    {
        int choice;
        Display();

        std::cout<<"Enter your choice\n";
        std::cin>>choice;
        if (choice==1)
        {
            
            BalanceInquiry();
            
        }
        else if(choice==2){
            Deposit();
            
        }
        else if(choice==3){
            withdraw();
            
        }
        else if(choice==4){
            quit();
            run=false;
        }
        else if(choice<1 && choice>=5){
            std::cout<<"INVALID CHOICE";
            Display();
            
            
        }
    
    }
    
    
    return 0;
}

