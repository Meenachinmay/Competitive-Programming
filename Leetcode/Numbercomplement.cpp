class Solution {
public:
    int findComplement(int num) {
        unsigned int mask = ~0;
        while (num & mask) mask <<= 1;
        return ~num^mask;
    }
};

/*int findComplement(int num){
int i = 0;
int j = 0;
while (i < num){
	i += pow(2,j);
	j++;	
}
return i-num;
}
*/