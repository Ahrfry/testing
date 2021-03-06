#include <iostream>
using namespace std;

class MyString
{
  private:
    char*  Buffer;

  public:
    MyString(const char* InitialInput){
      if(InitialInput !=NULL){
        Buffer = new char strlen(InitialInput) +1;
        strcpy(Buffer(Buffer, InitialInput);
       }
      else
        Buffer=NULL;
    }

  ~MyString (){
    cout<<"Invoking destructor, clearing up"<<endl;
    if(Buffer !=NULL)
      delete[] Buffer;
  } 

  int GetLength(){
    return strlen(Buffer);
  } 

  const char*GetString(){
    return Buffer;
    }
};

int main()
{

  MyString SayHello("Hello from String class");
  cout<<"String buffer in MyString is"<<SayHello.GetLength();
  cout<<"characters long"<<endl;

  cout<<"Buffer contains: ";
  cout<<"Buffer contains: "<<SayHello.GetString()<<endl;
}


