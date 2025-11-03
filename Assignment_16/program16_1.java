class Logic {
    void CalculateSum(int n)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            iSum = iSum + iCnt;
        }

        System.out.println("The Sum of the " + n + " number is " + iSum);
    }
}

class program16_1 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.CalculateSum(10);
    }
}
