#include<vector>
#include<iostream>

//template<class T>
/*
T podniz(vector<T>& v){
    //T d = 1;
    typename vector<T>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        T tmp = *it;
    }
    return tmp;
}*/

template<class T>
T podniz(vector<T>& v){
    T d = 1;
    //T prom = v.size();
    for(int i = 0; i < v.size() ; i=i+d){
        d++;
        if(v[i] < v[i+d]){
            return " ";
        }else{
            return d + " " + "(*" + v[i] + "*)";
            break;
        }
    }
}
int main(){
    vector<int> t1;
    t1.push_back(1);
    t1.push_back(2);
    t1.push_back(3);
    t1.push_back(4);
    t1.push_back(5);
    cout << podniz(t1) << endl;

}
