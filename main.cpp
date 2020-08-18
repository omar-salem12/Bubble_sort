#include <iostream>

using namespace std;

void Swap(int *x,int *y) {

  int temp ;
  temp = *x;
  *x =*y;
  *y = temp;

}
void BubbleSort(int arr[],int n) {


   int flag;
   for(int i =0;i<n-1;i++) { // the for loop for all pass.

      flag = 0; // to make this sorting algorithms adaptive

      for(int j =0;j<n-j-1;j++) { // this fo loop comparsion items for each pass
                                // to obtain the one element sorted

           if(arr[j]>arr[j+1]) {

              Swap(&arr[j],&arr[j+1]);
              flag = 1;
           }

      }
          if(flag ==0) break;
   }

}

int main()
{

 int arr [] = {1,4,6,3,7,8,4};

for(int i =0;i<7;i++) {

    cout <<arr[i]<<" ";
}
cout <<endl;

BubbleSort(arr,7);

for(int i =0;i<7;i++) {

    cout <<arr[i]<<" ";
}

    return 0;
}
