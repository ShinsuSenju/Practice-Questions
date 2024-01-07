class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        int steps = 2;
        if(a==e)
        {
            if(c!=a)
               return 1;
            else
            {
                if((b<d && d<f) || (b>d && d>f))
                    steps = 2;
                else
                    return 1;
            }
        }
        if(b==f)
        {
            if(d!=b)
                return 1;
            else
            {
                if((a<c && c<e)||(a>c && c>e))
                    steps = 2;
                else
                    return 1;
            }
        }
        if((d-f)==(c-e))
        {
            if(((c<a && a<e)||(c>a && a>e))&&(a-e)==(b-f))
                steps = 2;
            else
                return 1;
        }
        if((d-f) == (e-c))
        {
            if(((c<a && a<e)||(c>a && a>e))&&(a-e)==(f-b))
                steps = 2;
            else
                return 1;
        }
        
        return 2;
    }
};