/*	Question Link: https://www.spoj.com/problems/ADDREV/
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n1, n2,new1=0,new2=0;
		cin>>n1>>n2;
		
		long long sum=0, carry=0, rem1, rem2, res=0,newSum=0;
		int count=0;
		while(n1!=0){
			rem1 = n1%10;
			new1 = new1*10 + rem1;
			n1 /= 10;
		}
		while(n2!=0){
			rem2 = n2%10;
			new2 = new2*10 + rem2;
			n2 /= 10;
		}
		sum = new1 + new2;
		
		while(sum!=0){
			count++;
			carry = sum%10;
			newSum = newSum*10 + carry;
			sum /= 10;
		}
		while(count--){
			long long aim = pow(10,count);
			if(newSum% aim == 0){
				newSum /= pow(10,count);
			}
		}
		cout<<newSum<<endl;
	}
}
