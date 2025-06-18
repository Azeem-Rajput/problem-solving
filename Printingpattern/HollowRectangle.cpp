# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+2;j++){
            if((i>=2 && i<=n-1) && (j>=2 && j<=n+2-1)){
                cout<<"  ";      //idhar double space hai because else wale block ke printf me mene * ke bad space diya hai
            }
            else{
                cout<<"* ";
            } 
            
        }
    cout<<endl;
}
}