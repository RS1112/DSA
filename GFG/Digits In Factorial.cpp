class Solution{
    public:
    int digitsInFactorial(int num)
    {
        if (num < 0){
      return 0;
   }
   if (num <= 1){
      return 1;
   }
   double d = 0;
   for (int i=2; i<=num; i++){
      d += log10(i);
   }
   return floor(d) + 1;
    }
};