    #include <iostream>
    using namespace std;

    int main() {
        
        int T=0;
        cin >> T;
        while(T--){
            
            int N=0;
            int temp=0;
            cin >> N;
            int a[N] = {0};
            
            // taking the inputs
            
            for(int i=0;i<N;i++)
                cin >> a[i];
                
            int mid=0;
            
            if(N%2==0){
                mid = N/2 -1;
            }
            else{
                mid = (N-1)/2 - 1;
            }
            
            for(int i=0;i<=mid;i++)
            {   
                temp = a[i];
                a[i]=a[N-1-i];
                a[N-1-i]=temp;
            }
            
            for(int i=0;i<N;i++)
                cout << a[i] <<" ";
        }
            cout << endl;
        
        return 0;

    }
