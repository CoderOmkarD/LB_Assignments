/*
Input : iRow : 4
        iCol : 4
Output :

1       2       3       4
        2       3       4
                3       4
                        4

*/

import java.util.Scanner;
class Pattern
{
    public void Display(int iRow,int iCol)
    {   
        int i=0,j=0;
        if(iRow!=iCol)
        {
            System.out.println("Invalid Input");
            System.out.println("The No. of rows and columns must be same");
            return;
        }
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {   
                if(j>=i)
                {
                System.out.print(j +"\t");
                }
                else
                {
                    System.out.print("\t");
                }
            }
            System.out.println();
        }
    }
}
class program31_5
{   
    public static void main(String[] args) 
    {   
        int iValue1 =0;
        int iValue2 =0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the no. of Rows:");
        iValue1= sobj.nextInt();

        System.out.println("Enter the no. of Rows:");
        iValue2= sobj.nextInt();

        Pattern pobj =new Pattern();

        pobj.Display(iValue1,iValue2);

        sobj=null;
        pobj=null;

        
    }
}