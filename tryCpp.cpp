#include <iostream>
#include <string>

int main()
{
    //Defining the variables
    int age = 0;
    int yourClass = 0;
    std::string yourName = " ";

    //outputing strings
    std::cout<<"trying out wewewewsome cpp"<<"!\n";
    std::cout<<"how old are you? ";
    

    //recieving inputs
    std::cin>>age;
    std::cout<<"Wow! you look good at "<<age<<"!\n";

    std::cout<<"what class are you? ";
    std::cin>>yourClass;
    std::cout<<"Wow! You are in class "<<yourClass<<"!\n";

    std::cout<<"what is your name ?";
    std::cin>>yourName;
    std::cout<<"Hello "<<yourName;

	std::cout << "How old are you ?";
	std::cin >> yourName;
	std::cout << "Hello " << yourName;
	std::cout << "what is your name ?";
	std::cin >> yourName;
	
    

    //end part
    return 0;

}