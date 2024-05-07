// #include<bits/stdc++.h>
// using namespace std;

// class Riya{
//     private:
//     int pen=25;
//     friend void anchal(Riya);
// };

// void anchal(Riya obj){
//     cout<<obj.pen;
// };

// int main(){
//     Riya obj;
//     anchal(obj);
// }







// #include<bits/stdc++.h>
// using namespace std;

// class animal{
//     public:
//     string ch;

//     animal(string c);
// };

// animal::animal(string c){
//     ch = c;
//     cout<<ch;
// }

// int main(){
//     animal obj("cat");

// }




 #include<bits/stdc++.h>
using namespace std;

class car{
    private:
    int as,bs;

    public:
    // int sum(int a,int b);
    void set(int a,int b) {
        as = a;
        bs = b;
    }
    int get(int a,int b){
        return a+b;
    }
};

// int car::sum(int a,int b){
//     as = a;
//     bs = b;
//     return a+b;

// }

int main(){
    car obj;
    // cout<<obj.sum(12,10)<<endl;
    // cout<<obj.as<<" "<<obj.bs;

    cout<<obj.get(10,12);
}



