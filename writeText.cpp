#include<iostream>
#include<fstream>
using namespace std;

int main(){
  fstream myFile;
/*  //Writing into Text file
  //If text file is not available then it'lll crate one
  myFile.open("myText.txt",ios::out); //write mode
  if(myFile.is_open()){ //Opening the file
    myFile<<"Hello World\n";
    myFile<<"This is second Line\n";
    myFile.close();
  }
  */

// override original file
   myFile.open("myText.txt",ios::out); //write
   if(myFile.is_open()){
     myFile<<"Hello Everyone\n";
     myFile.close();
   }

//To avoid this we need another method append
   myFile.open("myText.txt",ios::app); //Apppend
   if(myFile.is_open()){
     myFile<<"This is Append Mode\n";
     myFile<<"We can add new text here without overriding original text\n";
     myFile.close();
   }


}
