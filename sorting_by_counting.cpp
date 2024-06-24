#include <iostream>
#include <vector>





std::vector <int> making_new_array_up_to_range(std::vector <int> arry) {
	int minn = arry[0];
	int maxx = arry[0];
	for (size_t i = 1; i < arry.size(); i++) {
		if (arry[i] < minn) {
			minn = arry[i];
		}
		else if (arry[i] > maxx) {
			maxx = arry[i];
		}
	
	}
	//std::cout << minn << "\t" << maxx;

	//std::vector <int> empty_v (maxx - minn);
	std::vector <int> minmax{ minn,maxx };

	return minmax;
	}

void fillin_array(std::vector <int> arry, std::vector <int>& n_arry, int min) {
	for (int i = 0; i < arry.size(); i++) {
	//	n_arry[arry[i]] += arry[i];
		n_arry[arry[i] - min] += 1;
	}
	//for (int j = 0; j < n_arry.size(); j++) {
	//	std::cout << n_arry[j] << "\t";
	//}

}











	




int main() {

	
	std::vector <int> arr { 4, 7, 2, 1, 1 };
	//int min = 0;
	//int max = 10;
	

	std::vector <int> minmax = making_new_array_up_to_range(arr);

	int min = minmax[0];
	int max = minmax[1];

	std::vector <int> n_sized_ar(max - min + 1);
	//n_sized_ar.resize(max - min);



	std::cout << min << "\t" << max << "\n";

	fillin_array(arr, n_sized_ar, min);
	std::vector <int> res_arr;
	for (int j = 0; j < n_sized_ar.size(); j++) {

		//std::cout << n_sized_ar[j] << "\t";
		while (n_sized_ar[j] != 0) {
		
			res_arr.push_back(j + min);
			n_sized_ar[j]-= 1;
		}





	}

	for (int j = 0; j < res_arr.size(); j++) {
		std::cout << res_arr[j] << "\t";

	}



}
