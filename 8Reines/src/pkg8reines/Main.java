/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg8reines;

import java.util.Scanner;







public class Main {
public static int x[]=new int[100];
    
public static void essaie(int n,int num){
int i;
if(n == num)
{
affiche(num);
}else{
for(i=0;i<num;i++){
if(isFree(i,n)==1){
x[n] =i;
essaie(n+1,num);
}
}
}
}
    
public static void affiche(int num){
int i,j;
System.out.println("+----------------+");
for(i=0;i<num;i++){
System.out.print("|");
    for(j=0;j<num;j++){
        if(j==x[i]){
        System.out.print("R");
        }else{
        System.out.print("*");
        }
}
    System.out.println("|");
}
System.out.println("+----------------+\n");
}

public static int isFree(int ix,int iy){
int i;
for(i=0;i<iy;i++){
if((x[i]==ix) || Math.abs(x[i]-ix)==Math.abs(i-iy)){
    return 0;
}
}
return 1;    
}

  public static void main(String[] args) {
        int num=0;
        System.out.println("Please select a number for the ECHIQUIER");
        Scanner in = new Scanner(System.in);
        String a= in.nextLine();
        in.close();
        num = Integer.parseInt(a);
       essaie(0,num);
       
       
}

    
     
}









