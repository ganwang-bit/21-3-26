////import java.util.Arrays;
////class MyArrays {
////    private int[] arr;
////    public static final int cap=10;
////    private int size;
////    public MyArrays() {
////        this.size=0;
////        this.arr=new int[cap];
////    }
////    public void add(int pos,int n){
////        if(pos-1>size||size==this.arr.length){
////            System.out.println("添加失败");
////            return;
////        }
////        for (int i = size; i >=pos ; i--) {
////            this.arr[i]=this.arr[i-1];
////        }
////        arr[pos-1]=n;
////        size++;
////    }
////    public String toString(){
////        return Arrays.toString(this.arr);
////    }
////}
////public class Test {
////    public static void main(String[] args) {
////        MyArrays arr=new MyArrays();
////        arr.add(1,10);
////        arr.add(2,20);
////        arr.add(2,20);
////        arr.add(2,20);
////        arr.add(2,20);
////        arr.add(2,20);
////        arr.add(2,20);
////        arr.add(2,20);
////        arr.add(2,20);
////        arr.add(2,20);
////        arr.add(2,20);
////        arr.add(2,20);
////        System.out.println(arr);
////    }
////}
//import java.util.Arrays;
//class MyArray {
//    private int[] arr;
//    private static final int cap=10;
//    private int size;
//    public MyArray(){
//        this.size=0;
//        this.arr=new int [cap];
//    }
//    public void add(int pos,int n){
//        if(this.size==this.arr.length){
//            this.arr=Arrays.copyOf(this.arr,10*(size/10+1));
//        }
//        if(pos-1>size){
//            System.out.println("添加失败");
//            return;
//        }
//        for (int i = size; i >=pos ; i--) {
//            this.arr[i]=this.arr[i-1];
//        }
//        this.arr[pos-1]=n;
//        size++;
//    }
//    public String toString(){
//        return Arrays.toString(this.arr);
//    }
//    public void display (){
//        for (int i = 0; i <this.size ; i++) {
//            System.out.print(this.arr[i]+" ");
//        }
//    }
//}
//public class Test {
//    public static void main(String[] args) {
//        MyArray arr=new MyArray();
//        for (int i = 0; i <25 ; i++) {
//            arr.add(i+1,i);
//        }
//        arr.add(1,2);
//        arr.add(28,29);
//        arr.add(27,30);
//        System.out.println(arr);
//        arr.display();
//    }
//}
