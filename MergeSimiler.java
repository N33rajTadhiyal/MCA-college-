class MergeSimiler {
    public static void main(String[] args) {
        int a[][]={{1,2},{3,4},{2,1}};
        int b[][]={{1,2},{2,1},{3,1}};
        int k[][]=bb(a, b);
        for(int i =0;i<k.length;i++)
        {
            for(int j =0;j<2;j++)
            {
                System.out.println(k[i][j]);
            }
        }
    }

    public static int[][] bb(int a[][],int b[][])
    {
         int ret[][]=new int[a.length][2];

        for(int i =0;i<a.length;i++)
        {
            for(int j =0;j<2;j++)
            {
                if(a[i]==b[i])
        {
                ret[i]=a[i];
                ret[i][j]=a[i][j]+b[i][j];
        }
            }
        }

        return ret;
    }
}