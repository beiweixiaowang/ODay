import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()){
            int n =scanner.nextInt();
            LinkedList<Integer> list = new LinkedList<>();
            for(int i =1;i<=n;i++){
                list.add(i);
            }
//            list.remove(2-1);
//            list.remove(2-1);
//            System.out.println(list);
            int c =1;
            while (list.size()!=1){

                for(int i=0;i<list.size();i++){
                    if(c %3==0){
                        list.remove(i);
                        i--;//下标要不变
                    }
                    c++;

                }
            }
            System.out.println(list.get(0));
        }


    }

}
