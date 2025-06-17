#include<iostream>
using namespace std;

// int main(){
//     int arr1[]={10,20,30};
//     cout<<arr1[0];
// return 0;
// }
// size of an array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<n;
// return 0;
// }

// traversing the array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,50};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
    
// return 0;
// }

// traversing the array from using range based for loop

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[]={1,2,3,4,5};
//     for (int x:arr)
//     {
//         /* code */
//         cout<<x<<" ";
//     }
    
    
// return 0;
// }

//modifications of array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         arr[i]=arr[i]*2;

//     }
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
    
    
// return 0;
// }

// modification of array using another method  

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     for(int &x:arr){
//         x=x*2;
//     }
//     for(int x:arr){
//         cout<<x<<" ";
//     }
// return 0;
// }

// WAP to check whether the array is sorted or not

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         if (arr[i]>arr[i+1])
//         {
//             /* code */
//             cout<<"array is not sorted";
//             break;
//         }
        

//     }
//     cout<<"array is sorted";
// return 0;
// }

//WAP to count the number of  distinct element in  array



    


// wap of sum of all elements in array

// int main(){
//     int sum=0;
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         sum=sum+arr[i];

//     }
//     cout<<sum;
    
// }

// WAP to print average
// int main(){
//     float sum=0;
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         sum=sum+arr[i];
//     }
//     cout<<"average is"<<sum/n;
// }        



//WAP to find maximum number in array

// int main(){
//     int arr[]={1,2,3,4,3,5,2};
//     int max=arr[0];
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         if (arr[i]>max)
//         {
//             /* code */
//             max=arr[i];
//         }
        
//     }
//     cout<<max;
    

// }

// Refrence variable
// int main(){
//     int arr[]={1,2,3,4};
//     for(int &x:arr){
//         x=x*2;
//     }
//     for(int x:arr){
//         cout<<x<<" ";
//     }
// }

// 

// int main(){
//     string &&s="shikhar";
//     s = "welcome "+s;
//     cout<<s;
// }

// Address and derefrence operator
// int main(){
//     int a=5;
//     cout<<&a<<endl;                      // this will gave you the adress of a or also known as refrence operator
//     cout<<*&a;                           // this is derefence operator ,it give the value stored in tha address 
// }

// void fun(int arr[]){                   //the reason behind this bhevaiour  is that in function it is taken as  pointer not as arrry that  is void fun(int*arr) 
//     int n=sizeof(arr)/sizeof(arr[0]);        
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
    
// }
 
// int main(){
//     int arr[]={10,20,30,40};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     fun(arr); 
// }    

// int main(){
//     int arr[]={10,20,30};
//     int *ptr=arr;
//     cout<<sizeof(arr)<<"\n";
//     cout<<sizeof(ptr)<<"\n";
//     cout<<ptr[0]<<"\n";
//     cout<<*arr<<"\n";
//     cout<<*(arr+1);
// }

// Arthmetic operation in pointers are ++ , -- , ptr+int , ptr-int , ptr1-ptr2


// int main(){
//     int arr[]={10,20,30,40,50};
//     int *ptr=arr;
//     cout<<*ptr<<" "<<ptr<<"\n";
//     int *ptr1=++ptr;
//     cout<<*ptr1<<" "<<ptr1<<"\n";
//     ptr--;
//     cout<<*ptr<<" "<<ptr<<"\n";
//     int *ptr2=ptr+3;
//     cout<<*ptr2<<" "<<ptr2<<"\n";
//     cout<<ptr2-ptr;


// }
// int main(){
//     char arr[]={'a','b','c'};
//     char *ptr=arr;
//     cout<<sizeof(arr)<<" "<<sizeof(ptr)<<"\n";

// }

// int main(){
//     int arr[]={10,20};
//     int *ptr=arr;
//     ++*ptr;
//     cout<<*ptr<<" "<<ptr<<"\n";

// }

// int main(){
//     int arr[]={10,20};
//     int *ptr=arr;
//     *++ptr;
//     cout<<*ptr<<" "<<ptr;
// }