void printO(int a,int b){
    if(a<=0||b<=0){
        cout<<"Invalid input";
    }
    else{
        for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<"O";
        }
        cout<<"\n";
    }
    }
}
