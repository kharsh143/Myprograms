#include<iostream.h>
#include<conio.h>
class ooload
{
  int a;
  public:
  void setdata(int b)
  {
   a=b;
  }
  void operator ++()
  {
    a=++a;
  }

  void show()
  {
    cout<<"A="<<a<<endl;
  }
};
void main()
{
ooload o;
  int n,temp,sum=0,i;
  clrscr();
  cout<<"Enter The Number";
  cin>>n;

  temp=n;
  o.setdata(n);
  o.show();

  for(i=1;i<n;i++)
  {
    ++o;
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
  cout<<"After Overload"<<endl;
  o.show();
  if(temp==sum)
  {
   cout<<"Perfect"<<endl;
  }
  else
  {
   cout<<"Not Perfect"<<endl;
  }
 getch();
}