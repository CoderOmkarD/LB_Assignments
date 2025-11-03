class Logic {
    void FindFactorial(int n)
    {
         int iCnt=0;
            int iSum=1;

        for(iCnt=1;iCnt<=n;iCnt++)
        {
            iSum=iSum*iCnt;
        }
        System.out.println("The Factorial of "+n+ " is :"+iSum);
    }
}

class program16_3 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.FindFactorial(5);
    }
}
