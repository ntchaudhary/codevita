/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		String st=sc.nextLine();
		int count=0;
		char ch[]=st.toCharArray();
		for(char c:ch)
		{
		    if(c=='(')
		    {
		        count++;
		    }
		    if(c==')')
		    {
		        count--;
		    }
		    if(((int)c>=97)&&((int)c<=122))
		    {
System.out.print(count+" ");
		    }
		}
		System.out.print(" #");
	}
}
