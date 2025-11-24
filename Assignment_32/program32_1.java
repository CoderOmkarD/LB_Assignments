/*
Input : iRow : 5
        iCol : 5
Output :

*       *       *       *       #
*       *       *       #       *
*       *       #       *       *
*       #       *       *       *
#       *       *       *       *

*/

import java.util.Scanner;
class Pattern
{
    public void Display(int iRow,int iCol)
    {   
        int i=0,j=0;
        int k=iRow;
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
               if (i+j==k+1)
                {
                    System.out.print("#\t");
                }    
                else
                {
                    System.out.print("*\t");

                }    
            }
            System.out.println();
        }
    }
}
class program32_1
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