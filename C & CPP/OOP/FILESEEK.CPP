#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
  fstream st;
  st.open("Demo.txt",ios::out);
  if(!st)
  {
    cout<<"File Creation Failed";
  }
  else
  {
    cout<<"New File Is Created";
    st<<"Hello Friends";
    cout<<"File Pointer Position :"<<st.tellp()<<endl;
    st.seekp(-1,ios::cur);
    cout<<"As Per Tellp"<<st.tellp()<<endl;
    st.close();
  }
  st.open("Demo.txt",ios::in);
  st.seekg(5,ios::beg);
  cout<<st.tellg();
  cout<<endl;
  st.seekg(1,ios::cur);
  cout<<st.tellg();

getch();
}