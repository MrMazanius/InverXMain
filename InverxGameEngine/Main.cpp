#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
	system("Color 03");

    const char* InverxLogo = R"===(
	 _____                          
	|_   _|                         
	  | |  _ ____   _____ _ ____  __
	  | | | '_ \ \ / / _ \ '__\ \/ /
	 _| |_| | | \ V /  __/ |   >  < 
	|_____|_| |_|\_/ \___|_|  /_/\_\ v0.0.1
                                 
                                 
    )===";
    std::cout << InverxLogo;
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));

	cout << "Inverx INFO: This is a open source game engine. If someone sold you this you got scammed.\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(200));
	cout << "Loading Inverx...\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(700));
	cout << "Waiting for server response...\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "Loading Inverx GUI's\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(00));
	cout << "Getting latest ImGUI Version...\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(300));
	cout << "Checking dependencies...\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(300));
	cout << "Starting Inverx...\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(300));
	cout << "\n";

	//Credits
	cout << "Credits:\n";
	cout << "THJepTheDep - Owner\n";
	cout << "ocornut - Owner of ImGUI\n";
	cout << "Your name here!\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(300));
	

	return 0;
	exit(0);
}