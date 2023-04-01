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
	|_____|_| |_|\_/ \___|_|  /_/\_\		v0.0.1 - Make SURE you have GIT Installed!
                                 
                                 
    )===";
    std::cout << InverxLogo;
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));

	cout << "Inverx INFO: This is a open source game engine. If someone sold you this you got scammed.\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(200));
	cout << "Loading InverX...\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	cout << "Getting latest ImGUI Version...\n";
	system("git clone https://github.com/ocornut/imgui.git");
	std::this_thread::sleep_for(std::chrono::milliseconds(300));
	cout << "Checking dependencies...\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(300));
	cout << "Starting InverX...\n";
	system("start main.exe");
	std::this_thread::sleep_for(std::chrono::milliseconds(300));
	cout << "\n";

	//Credits
	cout << "Credits:\n";
	cout << "THJepTheDep - Owner of InverX\n";
	cout << "ocornut - Owner of ImGUI\n";
	cout << "Your name here!\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(30000));
	

	/*Remember:
	Path of Example ImGUI Exaple Used In BETA Launcher: C:\Users\theo\Downloads\imgui-docking\imgui-docking\examples\example_win32_directx9\Debug\
	*/

	return 0;
	exit(0);
}