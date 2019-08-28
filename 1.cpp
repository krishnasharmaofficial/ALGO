    #include <iostream>
    using namespace std;
    int main()
    {
        int n, p, q, i, res;
        cout << "Enter 2  positive integer: "<<endl;
        cin >> p;
        cin>> q;
        for (int i = p; i <= q; i++) {
          for(int j=1;j<=10;j++)
          {
          	res = i*j;
          	  cout << i << " * " << j << " = " << res<<endl;
		  }
        cout<<endl;
		}
        
    }
