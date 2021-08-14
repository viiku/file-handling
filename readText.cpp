#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
  fstream myFile;
  myFile.open("myText.txt",ios::in); //reading form text file
  if(myFile.is_open()){
    string line;
    while(getline(myFile,line)){
        cout<<line<<endl;
    }
    myFile.close();
  }
}
