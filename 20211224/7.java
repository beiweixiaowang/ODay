import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int M = scanner.nextInt();
        int N = scanner.nextInt();
        int ai[]  = new int[N];
        for(int i = 0 ; i<N ;i++){
            ai[i] = scanner.nextInt();
        }
        Arrays.sort(ai);
        //先排序，每次的最大即为右边减去左边
        int score = 0;  
        int l = 0;
        int t = N - 1;
        int count = 1;//记录交换次数
        while(count <= M && l <= t){
            score += ai[t] - ai[l];
            l++;
            t--;
            count++;
        }
        System.out.println(score);
    }

}
