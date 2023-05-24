public class leet2357 {
    public static void main(String[] args) {
        int a[]={5,4,2,9,1,0};
        int m=min(a);
        int ma=max(a);
        int c=0;
        System.out.println(c);
        while(ma!=0)
        {
          a=rem(a, m);
          m=min(a);
          ma=max(a);
          c++;
        }

        System.out.println(c);

    }

    public static int min(int a[])
    {
        int min=a[0];
        for(int i =0;i<a.length;i++)
        {
            if( a[i]!=0 && min>a[i] )
            {
                min=a[i];
            }
        }

        return min;
    }

    public static int max(int a[])
    {
        int max=a[0];
        for(int i =0;i<a.length;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }

        return max;
    }

    public static int[] rem(int a[],int min)
    {
        for(int i =0;i<a.length;i++)
        {
         a[i]=a[i]-min;
         if(a[i]<=0)
         {
            a[i]=0;
         }
        }
        return a;
    }
    
}

