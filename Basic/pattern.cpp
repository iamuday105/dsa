// Square pattern ============>>>>

// #include<iostream>
// using namespace std;
// int main(){
//   int n=4;
//   int m=4;

//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Rectanular Pattern =========>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//   int n=3;
//   int m=4;

//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Hollow square ============>>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//   int n=4;
//   int m=4;

//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(i==0 || j==0 || i==n-1 || j==m-1){
//                cout<<"*"<<" ";
//             }else{
//                 cout<<" "<<" ";
//             }
            
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Hollow Rectangle ==============>>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//   int n=3;
//   int m=5;

//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(i==0 || j==0 || i==n-1 || j==m-1){
//                cout<<"*"<<" ";
//             }else{
//                 cout<<" "<<" ";
//             }
            
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Half Pyramid ==============>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"enter n: ";
//       cin>>n;

//      for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){  
//             cout<<"*"<<" ";   
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Inverted Half Pyramid =============>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//       cout<<"enter n:";
//       cin>>n;

//      for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){  
//             cout<<"*"<<" ";   
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Hollow Half Pyramid==================>>>>>>.

// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//      cout<<"enter n:";
//       cin>>n;

//      for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){ 
//             if( i==n-1 || j==0|| j==i){
//                 cout<<"*"<<" ";   
//             }else{
//                 cout<<" "<<" ";
//             }
           
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Inverted Hollow Half pyramid ===========>>>>>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//      cout<<"enter n:";
//       cin>>n;

//      for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){ 
//             if(i==0 || j==0 || j==n-i-1){
//                 cout<<"*"<<" ";   
//             }else{
//                 cout<<" "<<" ";
//             }
           
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Numeric Half Pyramid ============>>>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//      cout<<"enter n:";
//       cin>>n;

//      for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){ 
//              cout<<j+1<<" ";
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Inverted Numeric Half Pyramid ===============>>>>

// #include<iostream>
// using namespace std;
// int main(){
//       int n;
//      cout<<"enter n:";
//       cin>>n;

//      for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){ 
//              cout<<j+1<<" ";
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Full Pyramid ==================>>>>>>>>>>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//       int n; 
//      cout<<"enter n:";
//       cin>>n;
//      for(int i=0;i<n;i++){
//       int k=0;
//         for(int j=0;j<n*2-1;j++){   
//              if(j<n-i-1){
//                 cout<<" "<<" ";
//              }else{
//                if(k<(i+1)*2-1){
//                 cout<<"*"<<" ";
                
//                }else{
//                 cout<<" "<<" ";
//                }
//                 k++;
//              }
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// Inverted Half Pyramid ==================>>>>>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//       int n; 
//      cout<<"enter n:";
//       cin>>n;
//      for(int i=0;i<n;i++){
//           int k=0;
//         for(int j=0;j<n*2-1;j++){   
       
//           if(j<i){
//             cout<<" "<<" ";
//           }else{
//             //  if(k<(n*2-1)-(i*2)){
//              if(j<(n*2-1)-i){
//                 cout<<"*"<<" ";
//              }else{
//                 cout<<" "<<" ";
//              }
      
//               k++;
//           }
//         }
//         cout<<endl;
//      }
//     return 0;
// }

// 

// Easy Full pyramid ============>>>>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//      cout<<"enter n:";
//       cin>>n;
//      for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//     for(int k=0;k<i+1;k++){
//         cout<<"* ";
//     } 
//         cout<<endl;
//      }
//     return 0;
// }

// Easy Inverted Full Pyramid ===========>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//      cout<<"enter n:";
//       cin>>n;
//      for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//       for(int k=0;k<n-i;k++){
//         cout<<"* ";
//        } 
//         cout<<endl;
//      }
//     return 0;
// }
 
// Solid Diamond pattern ==========>>>>

// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//      cout<<"enter n:";
//       cin>>n;
//      for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//     for(int k=0;k<i+1;k++){
//         cout<<"* ";
//     } 
//         cout<<endl;   
//      }


//        for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//       for(int k=0;k<n-i;k++){
//         cout<<"* ";
//        } 
//         cout<<endl;
//      }
//     return 0;
// }


// Hollow full pyramid ================>>>>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//       int n; 
//      cout<<"enter n:";
//       cin>>n;
//      for(int i=0;i<n;i++){
//       int k=0;
//         for(int j=0;j<n*2-1;j++){   
//              if(j<n-i-1){
//                 cout<<" "<<" ";
//              }else{
//                if(k<(i+1)*2-1){
//                 if(i==n-1 || k==0 || k==i*2){
//                   cout<<"*"<<" ";
//                 }else{
//                     cout<<" "<<" ";
//                 }
//                }else{
//                 cout<<" "<<" ";
//                }
//                 k++;
//              }
//         }
//         cout<<endl;
//      }
//     return 0;
// }

