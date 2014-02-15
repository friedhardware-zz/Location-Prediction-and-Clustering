#include <cstdlib>
#include <fstream>
#include <iostream>


using namespace std;


void menu();
void readFile();

int main(int argc, char *argv[])
{
    menu();
    system("PAUSE");
    return EXIT_SUCCESS;
}

void menu(){
	int choice;
	cout<<"Hello World!! This is an implementation of SEQ.\n";
	cout<<"Please select what you want to do.\n";
	cout<<"1.1 Create test data.\n";
	cout<<"1.2 Save test data.\n";
	cout<<"1.3 Load test data.\n";
	cout<<"2.1 Query the model.\n";
	cout<<"3.1 Optimize the model.\n";
	cin>>choice;
	
}

void readFile(){
          string line;
          ifstream myfile ("DataSets/gps_volunteer_02.txt");
          if (myfile.is_open())
           {
             while ( myfile.good() )
              {
               getline (myfile,line);
               cout << line << endl;
               }
            myfile.close();
            } else cout << "Unable to open file"; 
       }
