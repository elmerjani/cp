import java.util.Arrays;
import java.util.Scanner;

class Solution{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        int[] a = new int[n];
        for (int i=0; i<n; i++){
            a[i]=scanner.nextInt();
        }
        Arrays.sort(a);
        int ans=1;
        for (int i=1; i<n; i++){
            if(a[i]!=a[i-1])ans++;
        }
        System.out.println(ans);
    }
}