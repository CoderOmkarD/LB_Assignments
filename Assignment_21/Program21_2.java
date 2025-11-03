class Logic {

    int iCnt = 0;
    int iEvenCount = 0;
    int iOddCount = 0;

    void CountEVenOddRange(int n) {

        for (iCnt = 1; iCnt <= n; iCnt++) {
            if (iCnt % 2 == 0) {
                iEvenCount++;
            } else {
                iOddCount++;
            }
        }

        System.out
                .println("From 1 To " + n + " There is " + iEvenCount + "  Even numbers and  " + iOddCount + "  Odd Numbers");
    }  
}

class Program21_2 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.CountEVenOddRange(12);
    }
}