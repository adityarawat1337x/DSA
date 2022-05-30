class Solution {
public:
    int divide(int dividend, int divisor) {
        long D = dividend;
        long d = divisor;
        bool negative = false;
        if (D < 0)
        {
            D = -D;
            negative = !negative;
        }
        if (d < 0)
        {
            d = -d;
            negative = !negative;
        }
        if      (d >  D) return 0;
        else if (d == D) return (negative)?-1:1;
        long result = 0;
        int nbits = 0;
        for (long aux = d; (aux > 0) && (nbits < 32); ++nbits, aux >>= 1);
        d <<= 32 - nbits;
        for (int i = 0; i <= 32 - nbits; ++i)
        {
            result <<= 1;
            if (D >= d)
            {
                result |= 1;
                D -= d;
            }
            d >>= 1;
        }
        return (negative)?-result:std::min<long>(result, 0x7FFFFFFF);
    }
};