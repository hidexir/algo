#include <iostream>
//go version
//package main

//import "fmt"

//func fibo(n int) int {
	//fmt.Println(n, "呼び出されました")
	//if n == 0 {
		//fmt.Println("return", n) 
		//return 0
	//}
	//if n == 1 {
		//fmt.Println("return", n)
		//return 1
	//}
	//result := fibo(n-1) + fibo(n-2)
	//fmt.Println(n, "項目は", result, "です")
	//return result
//}

//func main() {
	//result := fibo(6)
	//fmt.Println("答えは", result)
//}


using namespace std;

int fibo(int N) {

  cout << "fibo ("<< N <<")を呼び出しました。"<< endl;

  if(N == 0) return 0;

  else if (N == 1) return 1;

  int result = fibo(N - 1) + fibo(N - 2);

  cout << N << "項目 = " << result << endl;

  return result;
  
}


int main() {
 int res = fibo(6);
 cout << "結果は" << res << endl;
}
