class Logic {
    int iCnt = 0;
    int iSum = 0;

    void SumEvenNumbers(int n) {
        for (iCnt = 1; iCnt <= n; iCnt++) {
            if (iCnt % 2 == 0) {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("The Sum of Even Numbers upto  " + n + "  is " + iSum);
    }
}

class Program20_1 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.SumEvenNumbers(78);
    }
}