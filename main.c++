#include <iostream>

#include <ctime>



int main(){

    int initialBalance = 2000000;

    int choice = 1;

    char name[100];

    char productName[100];

    int unitPrice;

    int balance;

    int total;

    int quantityReceived;

    time_t now;

    struct tm *currentTime;

    time(&now);

    do{
    
        std::cout << "\n================= Smart Till POS ==============\n"<< std::endl;

        std::cout <<  "\n Enter your Name: " << std::endl;

        std::cin >>name;

        std::cout << "\n Enter the Product Name: "  << std::endl;

        std::cin >> productName;

        std::cout << "\n Enter the unit price: " <<std::endl;

        std::cin >> unitPrice;

        std::cout << "\n Enter quantity Received: " << std::endl;

        std::cin >> quantityReceived;

        total = quantityReceived * unitPrice;

        balance  = initialBalance - total;

        

        printf("\n Name: %s \n Product Name: %s \n Unit Price: %d \n Total: %d \n Balance: %d ", name, productName, unitPrice, total,balance);

        currentTime = localtime(&now);

        std::cout << "\n Received Date:"<< asctime(currentTime)<<"\n Date of Purchase: "<<asctime( currentTime)<<std::endl;

        std::cout  << "\n\nEnter 0 to continue or 1 to exit: ";

        std::cin >> choice;



    }while (choice != 1);

    






    return 0;
}