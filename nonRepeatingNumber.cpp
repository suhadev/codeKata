#include <iostream>
using namespace std;
int main()
{
    int n, a[n], b[n], c[n], counter = 0, nonDuplicateCount = 0, duplicateCount = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
       // cout << "checking for " << a[i] << endl;
		duplicateCount =0;
        for (int k = 0; k < n; k++)
        {
            if (a[i] == c[k])
            {
               // cout<<"element already captured"<<endl;
                duplicateCount++;
            }
        }
        if (duplicateCount == 0)
        {
            counter = 0;
            for (int j = i + 1; j < n; j++)
            {
                //cout << "current " << a[j] << endl;
                if (a[i] == a[j])
                {
                    //cout << "matching,increment" << endl;
                    counter++;
                    c[i] = a[i];
                }
            }
            
        }
        else
        {
            continue;
        }
        //cout<<"counter Value"<<counter;
        if (counter == 0)
            {
                //cout << "no duplicate present " << a[i] << endl;
                b[nonDuplicateCount] = a[i];
                nonDuplicateCount++;
            }
    }
    for (int i = 0; i < nonDuplicateCount; i++)
    {
        cout << b[i];
    }
}