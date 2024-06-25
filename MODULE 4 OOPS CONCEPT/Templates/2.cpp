#include<iostream>
template<typename t>
void sw(t&a,t&b){t temp=a;a=b;b=temp;}

template<typename t>
void sort(t arr[],size_t s){
    for(size_t i=0;i<s-1;i++)
        for(size_t j=i+1;j<s;j++)
            if(arr[i]>arr[j])sw(arr[i],arr[j]);
}

template<typename t>
void print(t arr[],size_t s){
    for(size_t i=0;i<s;i++)std::cout<<arr[i]<<" ";
    std::cout<<std::endl;
}

int main(){
    int ia[]={5,2,8,3,1,6,4};size_t is=sizeof(ia)/sizeof(ia[0]);
    double da[]={3.5,1.2,4.8,2.1,5.6};size_t ds=sizeof(da)/sizeof(da[0]);
    std::string sa[]{"Greg","Nathan","Billy","Vicky","Andy"};size_t ss=sizeof(sa)/sizeof(sa[0]);
    std::cout<<"\nBefore sorting:\n"<<std::endl;
    std::cout<<"Integer array: ";print(ia,is);
    std::cout<<"Double array: ";print(da,ds);
    std::cout<<"String array: ";print(sa,ss);
    
	sort(ia,is);sort(da,ds);sort(sa,ss);
    
	std::cout<<"\nAfter sorting:\n"<<std::endl;
    std::cout<<"Integer array: ";print(ia,is);
    std::cout<<"Double array: ";print(da,ds);
    std::cout<<"String array: ";print(sa,ss);
    return 0;
}
