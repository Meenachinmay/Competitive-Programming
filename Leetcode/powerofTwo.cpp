class Solution{
	public:
		bool powerofTwo(int n){
			if (x < 0) return false;
			return (x and !(x & x-1));
		}
};