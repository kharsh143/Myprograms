#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
#include<ctype.h>
#include<iomanip.h>

class student
{
	int admno;
	char name[35];
	float m_eng;
	float m_maths;
	float m_sc;
	float m_cmp;
	float perc;
	char grade;
     public:
	student()
	{
		m_eng=0;
		m_maths=0;
		m_sc=0;
		m_cmp=0;
		perc=0;
		grade= ' ';
	}
	void getdata();
	void putdata();
	void read();
	int getadmno()
	{
		return admno;
	}
	void calcres();
	void disp1(int);
	float ret_m_eng()
	{
		return m_eng;
	}
	float ret_m_maths()
	{
		return m_maths;
	}
	float ret_m_sc()
	{
		return m_sc;
	}
	float ret_m_cmp()
	{
		return m_cmp;
	}
};

void del(int rno)
{
	student stud;
	ifstream fio("student.dat",ios::in);
	ofstream file("temp.dat",ios::out);
	char found='f',confirm='n';
	while(!fio.eof())
	{
		fio.read((char*)&stud,sizeof(student));
		if(stud.getadmno()==rno)
		{
			stud.putdata();
			found='t';
			cout&lt;&lt;"    R u sure that u want 2 delete???";
			cin&gt;&gt;confirm;
			if(confirm=='n')
			file.write((char*)&stud,sizeof(student));
		}
		else
		file.write((char*)&stud,sizeof(student));
	}
	if (found=='f')
	cout&lt;&lt;"Record no found";
	fio.close();
	file.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
}

void modify(int rno)
{
	student stud;
	int flag=0,rec=0;
	fstream fin("student.dat",ios::in|ios::out|ios::binary);
	if(fin==NULL)
	{
		cout&lt;&lt;"\n File does not exist.";
		return;
	}
	while(fin.read((char*)&stud,sizeof(student)))
	{
		rec++;
		if(rno==stud.getadmno())
		{
			gotoxy(21,16);cout&lt;&lt;"ษออออออออออออออออออออออออออออออออออออออป";
			gotoxy(21,17);cout&lt;&lt;"บ                                      บ";
			gotoxy(21,18);cout&lt;&lt;"บ STUDENT DETAILS AT PRESENT ARE :     บ";
			gotoxy(21,19);cout&lt;&lt;"บ                                      บ";
			gotoxy(21,20);cout&lt;&lt;"ศออออออออออออออออออออออออออออออออออออออผ";
			stud.putdata();
			gotoxy(22,42);cout&lt;&lt;"ษออออออออออออออออออออออออออออออออออออป";
			gotoxy(22,43);cout&lt;&lt;"บ                                    บ";
			gotoxy(22,44);cout&lt;&lt;"บ Press any key to modify            บ";
			gotoxy(22,45);cout&lt;&lt;"บ                                    บ";
			gotoxy(22,46);cout&lt;&lt;"ศออออออออออออออออออออออออออออออออออออผ";
			getch();
			clrscr();
			gotoxy(12,10);cout&lt;&lt;"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
			gotoxy(12,11);cout&lt;&lt;"บ                                                      บ";
			gotoxy(12,12);cout&lt;&lt;"บ ENTER THE NEW DETAILS OF THE STUDENT  :              บ";
			gotoxy(12,13);cout&lt;&lt;"บ                                                      บ";
			gotoxy(12,14);cout&lt;&lt;"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";
			stud.read();
			fin.seekg((rec-1)*sizeof(student),ios::beg);
			fin.write((char*)&stud,sizeof(student));
			flag=1;
		}
	}
	if(flag==0)
	{
		gotoxy(14,20);cout&lt;&lt;"ษอออออออออออออออออออออออออออออออออออออออออออออออออออป";
		gotoxy(14,21);cout&lt;&lt;"บ                                                   บ";
		gotoxy(14,22);cout&lt;&lt;"บ THIS ROLL NUMBER DOES NOT EXIST                   บ";
		gotoxy(14,23);cout&lt;&lt;"บ                                                   บ";
		gotoxy(14,24);cout&lt;&lt;"ศอออออออออออออออออออออออออออออออออออออออออออออออออออผ";

	}
	else
	{
		gotoxy(24,39);cout&lt;&lt;"ษออออออออออออออออออออออออออออออออป";
		gotoxy(24,40);cout&lt;&lt;"บ                                บ";
		gotoxy(24,41);cout&lt;&lt;"บ RECORD MODIFIED                บ";
		gotoxy(24,42);cout&lt;&lt;"บ                                บ";
		gotoxy(24,43);cout&lt;&lt;"ศออออออออออออออออออออออออออออออออผ";
		return;
	}
	fin.close();
}


