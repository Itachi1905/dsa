or (int i = 2; i <= n; i++) {
        int x = i*i ;
        while( x < n ) {
            arr[x-1] = 0;
            x = x + i;
            cout<<arr[x-1]<<" ";
        }
    }