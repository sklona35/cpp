#include <iostream>

using namespace std;

 

int N;

 

bool prime(int num)

{

        if (num == 0 || num == 1)

                 return false;

 

        for (int i = 2; i*i <= num; i++)

                 if (num%i == 0)

                         return false;

        return true;

}

 

void calc(int num, int len)

{

        if (len == N)

        {

                 cout << num << "\n";

                 return;

        }

 

        //È¦¼ö¸¸

        for (int i = 1; i <= 9; i += 2)

        {

                 if (prime(num * 10 + i))

                         calc(num * 10 + i, len + 1);

        }

}

 

int main(void)

{

        cin >> N;

 

        calc(2, 1);

        calc(3, 1);

        calc(5, 1);

        calc(7, 1);

        return 0;

}
