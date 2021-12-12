  int arr[amount+1];
    memset(arr,0,sizeof(arr));

    for(int i=0;i<n;i++){
        for(int j=coins[i];j<=amount;j++){
            if(arr[j]!=0){
              arr[j]=min(arr[j],arr[j-coins[i]]+1);
            }
            else{
                arr[j]=arr[j-coins[i]]+1;
            }
            
        }
       
    }
   
    return arr[amount];