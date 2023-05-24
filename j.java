public class j {
    public static void main(String[] args) {
        int a[][]={{1,2,3,4},{1,0,0,2},{1,2,0,3},{1,0,0,0}};

        for(int i=0;i<a.length;i++)
        {

            int n=-1;
            n=zero(a[i]);
        }
    }
    static int zero(int a[])
    {
        int n=-1;
        for(int i =0;i<a.length;i++)
        {
            if(a[i]==0)
            {
                n++;
            }
        }

        return n;
    }
}
