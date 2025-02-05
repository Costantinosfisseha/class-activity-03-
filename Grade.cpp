#include <iostream>
using namespace std;
int main() {
unsigned int Score;
cout<<"Enter Your Score: "<<endl;
cin>>Score;
if(Score <60){
    cout<<"FAIL"<<endl;
}
else if(Score >= 60 && Score <= 69){
    cout<<"PASS"<<endl;
}
else if(Score >= 70 && Score <= 89){
    cout<<"Good"<<endl;
}
else{
    cout<<"EXCELLENT";
}
    return 0;
}