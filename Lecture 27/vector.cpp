#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char *argv[]) {
    vector<int> v;
    vector<int> v1(5,1);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v[1] = 5;
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    v1.push_back(3);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    vector<int> v2 = {1,2,3,4,5};
    vector<int> view;
    view.push_back(4);
    view.push_back(41);
    view.push_back(141);
    view.push_back(42);
    view.pop_back();
    view.erase(view.begin() + 1);
    for (int i = 0; i < view.size(); i++) {
        cout<<view[i]<<" ";
    }
    view.insert(view.begin()+1, 50);
    cout<<endl;
    for (int i = 0; i < view.size(); i++) {
        cout<<view[i]<<" ";
    }
    view.clear();
    cout<<"Size of view: "<<view.size()<<endl;
    cout<<"Capacity of view: "<<view.capacity()<<endl;
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(122);
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
    cout<<arr[arr.size() - 1]<<endl;
    cout<<arr.back()<<endl;
    vector<int> a;
    a = arr;
    cout<<endl;
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto i : arr) {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    sort(ans.begin(), ans.end(), greater<int>());
    for (int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    sort(ans.rbegin(), ans.rend());
    for (int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<binary_search(ans.begin(), ans.end(), 54)<<endl;
    cout<<binary_search(ans.begin(), ans.end(), 55)<<endl;
    cout<<find(ans.begin(),ans.end(),54) - ans.begin()<<endl;
    return 0;
}
