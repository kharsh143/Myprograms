#include<iostream>
#include<string>
 
 class Human
 {
 	public:
 		string name;
 		void introduce()
 		{
 			cout<<"This is"<<name;
		 }
 	
 	
 };
 int main()
 {
 	Human harsh;
 	harsh.name="Harsh";
 	harsh.introduce();
 }
