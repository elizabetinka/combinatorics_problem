//
// Created by Елизавета Кравченкова on 03.05.2023.
//
#include <iostream>
#include <vector>
int main2(){
    std::vector<int> v {1,2,3,4,5};
    uint64_t ans=0;
    for (int64_t i=0;i<120;++i){
        std::next_permutation(v.begin(),v.end());
        int f = v[0];
        int s = v[1];
        int t = v[2];
        int fo = v[3];
        int fi = v[4];
        bool flag=true;
        if (f<s && s<t){
            flag=false;
        }
        if (f>s && s>t){
            flag=false;
        }
        if (s<t && t<fo){
            flag=false;
        }
        if (s>t && t>fo){
            flag=false;
        }
        if (t<fo && fo<fi){
            flag=false;
        }
        if (t>fo && fo>fi){
            flag=false;
        }
        if (flag){
            ans++;
            //std::cout<<f<<" "<<s<<" "<<t<<" "<<fo<<" "<<fi<<std::endl;
        }
    }
    std::cout<<"ANS: "<<ans;
    return 0;
}
