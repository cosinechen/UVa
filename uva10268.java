import java.util.Scanner;
import java.lang.Long;

class uva10268{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextLine()){
			long x = Long.parseLong(sc.nextLine());			
			String a[] = sc.nextLine().split("\\s+");
			long ans=0;
			int tmp=1;
			
			for(int i=a.length-2;i>=0;i--,tmp*=x){
	
				ans += Long.parseLong(a[i]) * (a.length-1-i) * tmp;
			}
			System.out.println(ans);
		}
	}
}
//There is a runtime error on UVA, but CodingFrenzy is OK.