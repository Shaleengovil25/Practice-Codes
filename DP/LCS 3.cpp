#include <iostream>
#include <cstring>
using namespace std;

int lcs3(string s1, string s2, string s3, int m, int n, int o, int cache[101][101][101]){
    if(m == 0 || n == 0 || o == 0){
        return 0;
    }   
    if(cache[m][n][o] >=0){
        return cache[m][n][o];
    }
    if(s1[m-1] == s2[n-1] && s2[n-1] == s3[o-1]){
        return  1+lcs3(s1,s2,s3,m-1,n-1,o-1,cache);
    }
    cache[m][n][o] = max(lcs3(s1,s2,s3,m-1,n,o,cache),max(lcs3(s1,s2,s3,m,n-1,o,cache),lcs3(s1,s2,s3,m,n,o-1,cache)));
    return cache[m][n][o];
}

int lcs3(string s1, string s2, string s3, int m, int n, int o){
    int cache[101][101][101];
    memset(cache,-1,sizeof(cache));
    return lcs3(s1,s2,s3,m,n,o,cache);    
}

int main() {
	// your code goes here
	string s1,s2,s3;
	cin >> s1 >> s2 >> s3;
	
	int m = s1.length();
	int n = s2.length();
	int o = s3.length();
	
	cout << lcs3(s1,s2,s3,m,n,o);
	return 0;
}

INPUT:
gene
genome
gender

OUTPUT:
4

Explanation:
"gene" is present in all 3 strings.
 gen    e
 gen om e
 gen d  e r
