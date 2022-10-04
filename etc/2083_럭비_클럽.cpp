#include<bits/stdc++.h>

using namespace std;

string name;
int age, weight;

int main(void){
    cin >> name >> age >> weight;

    while (!(name=="#"&&(age==0&&weight==0)))
    {
        cout << name << ' ';
        if(age > 17 || weight >= 80){
            cout << "Senior";
        }
        else{
            cout << "Junior";
        }
        cout << '\n';

        cin >> name >> age >> weight;
    }
}
