 #include<iostream>
 using namespace std; 
 int main() {   
     int n = 0;
    
     int sl = 0;
     int n1, n2;
   
     char w;
    cin >> n >> w;
     for (int i = 0;; i++) {
         n1 = 2 * (i * i) - 1;            
         n2 = 2 * ((i + 1) * (i + 1)) - 1;    
         if (n >= n1 && n < n2) {
          sl = 2 * i - 1;                   
             break;
         }
     }
     int c = sl;                             
     int flag = 1;                          
     for (int i = 0; i < sl; i++) {
         for (int j = 0; j < (sl - c) / 2; j++)cout << ' '; 
         for (int j = 0; j < c; j++) cout << w;
         if (flag) c -= 2; else c += 2;
         if (c == 1)flag = 0;
         cout <<  endl;
     }
     cout << n - n1;                
     return 0;
}
