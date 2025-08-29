#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            cout << "*";
        }
        cout << endl;
    }
}
 
void pattern2(int n){
    for(int j=1; j<=n;j++){
        for(int i=1;i<=j;i++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i+1); j++){
            cout << "*";
        }
        cout << endl;
    }
}

//My Approach
void pattern6(int n){
    // My approach
    /* for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    } */

    // Striver's
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i+1);j++){
            cout << j;
            
        cout << endl;
    }
}
}

void pattern7(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++) cout << " ";
        for(int k=0; k<(i*2)+1 ; k++){
            cout << "*";
        }
        for(int j=0; j<(n-i-1); j++) cout << " ";
        cout << endl;
    }
}

void pattern8(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++)cout << " ";
        for(int k=0; k<((2*n)-(2*i + 1)); k++){
            cout << "*";
        }
        for(int j=0; j<i; j++)cout << " ";
        cout  << endl;
    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

void pattern10(int n){
    for(int i=1; i<=(2*n)-1; i++){
        int stars = i;
        if(i>n) stars = (2*n)-i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n){
    int start = 0;
    for(int i=1; i<=n; i++){
        if(i%2==0) start = 0;
        else start = 1;
        for(int j=1; j<=i; j++){
            cout << start ;
            start = 1 - start;
        }   
        cout << endl;
    }
}

void pattern12(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++) cout << j;
        for(int k=1; k<=((n-i)*2); k++) cout << " ";
        for(int m=i; m>=1; m--) cout << m;
        cout << endl;
    }
}

void pattern13(int n){
    int cnt = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << cnt++ << " ";
        }cout << endl;
    }
}

void pattern14(int n){
    for(int i=1; i<=n; i++){
        char ch = 65;
        for(int j=1; j<=i; j++){
            cout << ch++;
        }
        cout << endl;
    }
}

void pattern15(int n){
    for(int i=n; i>=1; i--){
        char ch = 65;
        for(int j=1; j<=i; j++){
            cout << ch++;
        }
        cout << endl;
    }
}

void pattern16(int n){
    char ch = 65;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< ch;
        }
        ch++;
        cout << endl;
    }
}

void pattern17(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++)cout << " ";
        char ch = 65;
        for(int k=1; k<=(2*i)-1; k++){
            cout << ch;
            if(k<i) ch++;
            else ch--;
        }
        for(int m=1; m<=(n-i); m++) cout << " ";
        cout << endl;
    }
}

void pattern18(int n){
    for(int i=1; i<=n; i++){
        char ch = 'A';
        ch += (n-i);
        for(int j=1; j<=i; j++){
            cout << ch++;
        }
        cout << endl;
    }
}

void pattern19(int n){
    for(int i=n; i>=1 ;i--){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int j=1 ; j<=(2*(n-i)); j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int j=1 ; j<=(2*(n-i)); j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
}

void pattern20(int n){
    for(int i=1; i<=(2*n - 1); i++){
        int stars = i;
        int spaces = (2*(n-i));

        if(i>n){
            stars = (2*n)-i;
            spaces = (2*(i-n));
        }
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        for(int j=1; j<=spaces; j++){
            cout << " ";
        }
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern21(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || i==n || j==n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern22(int n) {
    for(int i=0; i<(2*n - 1); i++){
        for(int j=0; j<(2*n - 1); j++){
            int row = i;
            int col = j;
            int left = (n*2 -2) - i;
            int right = (n*2 -2) - j;
            int m1 = min(row,left);
            int m2 = min(col,right);
            cout << (n - min(m1,m2));
        }
        cout << endl;
    }
}
int main(){

    int n;
    cout << "Enter the value of n : ";
    cin>>n;
    

    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    pattern19(n);
    // pattern20(n);
    // pattern21(n);
    // pattern22(n);

    
    
    return 0;
}