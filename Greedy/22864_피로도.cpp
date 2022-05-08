#include <bits/stdc++.h>

using namespace std;

int fatigue, workload, recovery_amount;
int _damage, _work, _recovery, _limit;
int hours = 24;

int max_workload = 0;

int main(void){
    cin >> _damage >> _work >> _recovery >> _limit;

    fatigue = 0;
    workload = 0;
    
    while (hours > 0)
    {
        if (fatigue + _damage <= _limit){
            fatigue += _damage;
            workload += _work;
        }
        else{
            fatigue -= _recovery;
            if (fatigue < 0){
                fatigue = 0;
            }
        }


        hours--;
    }
    
    cout << workload << endl;

    // if (_damage > _limit){
    //     cout << max_workload << endl;
    //     return 0;
    // }

    // for (int i = 1; i <= hours; i++){
    //     fatigue = i * _damage;
    //     workload = i * _work;
    //     recovery_amount = (hours - i) * _recovery;

    //     if ((fatigue-recovery_amount <= _limit) && (max_workload < workload)){
    //         max_workload = workload;
    //     }

    // }
    // cout << max_workload << endl;

}