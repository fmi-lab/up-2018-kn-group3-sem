/// Намира най-дългата дума, нейната дължина и броя на всички думи в масива str.
/// Дума е всяка последователност от малки и главни букви.

#include<iostream>

using namespace std;

int main(){
    char str[10000] = "Lorem ipsum dolor sit amet, nonummy ultrices ante dolor vitae amet natoque, mauris phasellus vitae proin quisque cras id, vivamus elit est urna dolor neque, dolor pede, et interdum. Mus cursus suscipit porttitor mollis duis, dolores commodo elit eu id id quam, vel leo eget suscipit, eu sem vivamus magna tempor etiam, et habitant elit adipiscing ultricies. Aptent nulla curabitur aliquam leo in, eget nulla eget imperdiet porttitor velit, ligula sed donec nec wisi, risus ut amet per, urna dui maecenas vestibulum mauris. Vitae hendrerit aliquet vulputate, amet aliquam condimentum et ante natoque potenti, eros a purus convallis suscipit in aliquam, sed platea auctor sed ipsum. Bibendum wisi mauris, massa wisi sem integer hac, magna suspendisse interdum ante, consectetuer scelerisque et nam sagittis. Hendrerit elit lacus, lectus duis vitae pede vel. Litora faucibus scelerisque lacus id, diam in, duis scelerisque. Natoque lectus cras fermentum natoque, vestibulum consectetuer volutpat, eros suscipit, nibh elementum. Nulla vivamus vestibulum arcu arcu nam.";
    int maxLength = 0;
    int ending = 0;
    int currentLength = 0;
    int counter = 0;

    int i;

    for(i = 0; str[i]; i++){
        if(!(str[i] >= 'a' && str[i] <='z' || str[i] >= 'A' && str[i] <= 'Z')){
            if(currentLength > maxLength){
                maxLength = currentLength;
                ending = i;
            }
            counter ++;
            currentLength = 0;
        }  else {
            currentLength ++;
        }
    }

    if(str[i-1] >= 'a' && str[i-1] <='z' || str[i-1] >= 'A' && str[i-1] <= 'Z'){
        counter ++;
    }

    cout<<"maxLength = "<<maxLength<<endl;
    cout<<"ending = "<<ending<<endl;
    cout<<"number of words = "<<counter<<endl;

    for(int i = ending - maxLength; i<ending; i++){
        cout<<str[i];
    }

    return 0;
}
