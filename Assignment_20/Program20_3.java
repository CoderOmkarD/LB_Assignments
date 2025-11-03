class Logic {
    int iCnt = 0;
    int iSumOfFactor = 0;

    void CheckPerfect(int n) {
        for (iCnt = 1; iCnt <= n / 2; iCnt++) {
            if (n % iCnt == 0) {
                iSumOfFactor = iSumOfFactor + iCnt;
            }

        }
        if (n == iSumOfFactor) {
            System.out.println(n + "  is a Perfect Number");
        } else {
            System.out.println(n + "  is not a Perfect number");
        }
    }
}

class Program20_3 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.CheckPerfect(6);
    }
}