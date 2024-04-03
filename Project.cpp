#include <iostream>
#include<string>
#include<array>
#include <vector>
int NumOfUsers =0;

enum Options
{
    Add = 1,
    Fetch,
    Quit
};
class Person 
{
    public:
    int Age;
    std::string Name;
    void Addperson (std::string UserName, int UserAge)
    {
        Name=UserName;
        Age=UserAge;
    }

};
std::vector<Person> Users;
void MainMenu (void)
{
        std::cout<<"User SignUp Aplication\n";
        std::cout<<"1: Add Record \n";
        std::cout<<"2: Fetch Record \n";
        std::cout<<"3: Quit \n";
        std::cout<<"Enter Option: ";
}

void AddRecord ()
{
    std::string LocalName;
    int LocalAge;
    Person LocalPerson;
    std::cout<<"Add User. please enter user name and age:\n";
    std::cout<<"Name:";
    std::getline(std::cin >> std::ws, LocalName);
    std::cout<<"Age:";
    std::cin>>LocalAge;
    LocalPerson.Addperson(LocalName,LocalAge);
    Users.push_back(LocalPerson);
    NumOfUsers++;
    std::cout<<"User record added successfully\n";
}

void FetchRecord()
{
    int LocalID;
    std::cout<<"please enter user ID\n";
    std::cout<<"User ID:";
    std::cin>>LocalID;
    std::cout<<"User Name: "<<Users[LocalID].Name<<"\n";
    std::cout<<"User Age: "<<Users[LocalID].Age<<"\n";
}
int main ()
{

    int Input;
    while (1)
    {
        MainMenu();
        std::cin>>Input;
        if (Input == Add)
        {
            AddRecord();
        }
        else if (Input == Fetch)
        {
            FetchRecord();
        }
        else if (Input == Quit)
        {
            break;
        }
        else 
        {
            std::cout<<"INVALID OPTION\n";
        }

    }
    return 0;
}