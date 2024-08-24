// practice for loop

//print counting from 1 to 100====>>>>;

// #include<iostream>
// using namespace std; 
// int main(){
//      int n=100;
//      for(int i=0 ; i<n ; i++){
//         cout<< i+1<<" ";
//      }
//      cout<<endl;
//     return 0;
// }

// print counting from 100 to 1=====>>>

// #include<iostream>
// using namespace std;
// int main(){
//  for (int i=100 ; i>=1; i--){
//     cout<< i<<" ";
//  }
//  cout<<endl;
//     return 0;
// }

// print your name 50 times ======>>>

// #include<iostream>
// using namespace std;
// int main(){
// int n=50;
// for(int i=0; i<50;i++){
//     cout<<"Yadav Uday"<<" ";
// }cout<<endl;
//     return 0;
// }

// Print counting from 0 to -10 =====>>>

// #include<iostream>
// using namespace std;
// int main(){
//      for(int i=0; i>= -10; i--){
//          cout<<i <<" ";

//      }cout<<endl;
//     return 0;
// }

// Print table of 7 ========>>>>>

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<< i*7<<" ";
//     }cout<<endl;
//     return 0 ;
// }

// Print characters from A to Z =======>>>>

// #include<iostream>
// using namespace std;
// int main(){
//     for(char i='A'; i<='Z';i++){
//         cout<< i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Print characters from a to z =======>>>>

// #include<iostream>
// using namespace std;
// int main(){
//     for(char i='a'; i<='z';i++){
//         cout<< i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// what is cin.ignore

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     string name;

//     cout << "Enter a number: ";
//     cin >> num;

//     // Ignore the newline character left in the input buffer by cin
//     cin.ignore();

//     cout << "Enter your name: ";
//     getline(cin, name); //it takes spaces also
//     // cin>>name; //it is not

//     cout << "Number: " << num << ", Name: " << name << endl;

//     return 0;
// }

// what is cin.fail =====>>>

// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;

//     // Check if the input failed
//     if (cin.fail()) {
//         cout << "Invalid input! Please enter a number." << endl;
//     } else {
//         cout << "Your age is " << age << "." << endl;
//     }

//     return 0;
// }

// explin switch case =======>>>>>>

// #include <iostream>
// using namespace std;

// int main() {
//     int day;
//     cin>>day;

//     switch (day) {
//         case 1:
//             cout << "Monday" << endl;
//             break;
//         case 2:
//             cout << "Tuesday" << endl;
//             break;
//         case 3:
//             cout << "Wednesday" << endl;
//             break;
//         case 4:
//             cout << "Thursday" << endl;
//             break;
//         case 5:
//             cout << "Friday" << endl;
//             break;
//         case 6:
//             cout << "Saturday" << endl;
//             break;
//         case 7:
//             cout << "Sunday" << endl;
//             break;
//         default:
//             cout << "Invalid day" << endl;
//     }

//     return 0;
// }