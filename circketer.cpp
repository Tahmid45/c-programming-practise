#include<bits/stdc++.h>
using namespace std;

class Cricketer
{public:
	int jersey_no;
	char country[100];
};
int main(){

    Cricketer *dhoni = new Cricketer();
    dhoni->jersey_no = 54;
    strcpy(dhoni->country,"india");
    Cricketer *kohli = new Cricketer();
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country,dhoni->country);
    delete dhoni;
    cout<<kohli->country<<" "<<kohli->jersey_no<<endl;
return 0;
}
