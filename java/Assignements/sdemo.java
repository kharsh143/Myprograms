//Ass.No 8
class sdemo
{
public static void main(String arg[])
{
String str=new String("JAVA");
System.out.println("length of string\t"+str.length());

String str1=new String("Programming..");
String str2=new String("Language...");
String str3=new String("object oriented");
System.out.println(str1);
System.out.println(str2);
System.out.println(str3);
System.out.println("******************************************");
String s4=new String("ABC");
String s5=new String("ABC");
System.out.println(s4.equals(s5)); //it retruns true or false
System.out.println("******************************************");
String s6=new String("ABC");
String s7=new String("abc");
System.out.println(s6.equalsIgnoreCase(s7)); //returns true or false

System.out.println("************S9 S10******************************");
String s8=new String("abc");
String s9=new String("def");
String s10=new String("abc");
System.out.println(s8.compareTo(s9));//returns -3
System.out.println(s9.compareTo(s10));//returns +3
System.out.println("************S11******************************");

String s11=new String("JAVA object Programming..");
System.out.println(s11.startsWith("JAVA"));
System.out.println(s11.endsWith("Programming.."));

System.out.println("*****************S12*************************");
String s12=new String("JAVA programing language");
System.out.println(s12.charAt(0));
System.out.println(s12.replace('p','T'));
System.out.println(s12.indexOf("pro"));//after 15index it returns -1
System.out.println(s12.lastIndexOf("age"));
System.out.println("*****************S13.*************************");
String s13=new String("JAVA programing language");
System.out.println(s13.substring(8));
System.out.println(s13.substring(2,10));
System.out.println(s13.toLowerCase());
System.out.println(s13.toUpperCase());
System.out.println("*****************Counting Length*************************");

String sl=new String("java programing language");
System.out.println(sl);
System.out.println("length of string \t"+sl.length());

System.out.println();
char[] ch=sl.toCharArray();
for(int i=0;i<ch.length;i++)
{
System.out.print(ch[i]+" ");
}
String s15=new String("    byeee");
System.out.println(s15.trim());

}
}



/*
OUTPUT:
E:\java\Assignements>javac sdemo.java

E:\java\Assignements>java sdemo
length of string        4
Programming..
Language...
object oriented
******************************************
true
******************************************
true
************S9 S10******************************
-3
3
************S11******************************
true
true
*****************S12*************************
J
JAVA Trograming language
5
21
*****************S13.*************************
graming language
VA progr
java programing language
JAVA PROGRAMING LANGUAGE
*****************Counting Length*************************
java programing language
length of string        24

j a v a   p r o g r a m i n g   l a n g u a g e byeee
*/