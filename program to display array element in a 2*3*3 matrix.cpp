//programm to display array element in a 2*3*3 matrix
 #include <iostream>//Tells the compilar to include hender file
using namespace std; 
//This is the main function where execution of programm begin
int main()
{
    // declare and initialize an array
    // This array can store upto 18 elements  
    int a[2][3][3] = {
                            {
                                {1, 2,3},
                                {4,5,6},
                                {7,8,9}
                            }, 
                            {
                                {10,11,12}, 
                                {13,14,15}, 
                                {16,17,18}
                            }
                        };
                        
    for (int i = 0; i < 2;i++)// select block of matrix either block one which is 0 or two which is 1 
    {
        for (int j = 0; j < 3;j++)//print the array element in the first block of matrix
        {
            for (int k = 0; k < 3;k++)//print the array element in the second block of matrix
            {
     cout << "a[" << i << "][" << j << "][" << k << "] = " << a[i][j][k] << endl;//prints the element of the array
            }
        }
    }

    return 0;
}
