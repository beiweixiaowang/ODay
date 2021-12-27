import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        ArrayList<DDate> al = new ArrayList<DDate>();
        Scanner scan = new Scanner(System.in);
        while (scan.hasNextLine()) {
            String ss = scan.nextLine();
            String str[] = ss.split("/");
            String month = str[0];
            String day = str[1];
            String year = str[2];
            al.add(new DDate(year, month, day));
        }
        Collections.sort(al);// 排序
        for (DDate date : al) {
            System.out.println(date.month + "/" + date.day + "/" + date.year);
        }
        scan.close();
    }

}

class DDate implements Comparable<DDate> {
    String year;
    String month;
    String day;

    DDate(String year, String month, String day) {
        this.year = year;
        this.month = month;
        this.day = day;
    }

    @Override
    public int compareTo(DDate o) {
        // 按年龄从小到大排序
        if (this.year.compareTo(o.year) > 0) {
            return 1;
        } else if (this.year.compareTo(o.year) < 0) {
            return -1;
        } else {// 年数相等比较月份
            if (this.month.compareTo(o.month) > 0) {
                return 1;
            } else if (this.month.compareTo(o.month) < 0) {
                return -1;
            } else {// 年、月份相等，比较天数
                if (this.day.compareTo(o.day) > 0) {
                    return 1;
                } else if (this.day.compareTo(o.day) < 0) {
                    return -1;
                } else {// 是同一天
                    return 0;
                }
            }

        }
    }
}

