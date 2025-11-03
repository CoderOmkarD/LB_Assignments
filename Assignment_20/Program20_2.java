class Logic {
    int iCnt = 0;
    int iSum = 0;

    void PrintReverse(int n) {
        for (iCnt = n; iCnt >= 1; iCnt--) {
           System.out.println(iCnt);
        }
        
    }
}

class Program20_2 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.PrintReverse(10);
    }
}