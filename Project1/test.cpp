#include <iostream>

void setValues(int *val, int *sum);
void sortArray(int *val);
void showArray(int *val);

int main() {

	int val[5];
	int sum = 0;
	double avg;

	setValues(val, &sum);

	avg = sum / 5.0;
	
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Avg: " << avg << std::endl;

	sortArray(val);
	showArray(val);

}

void showArray(int* val) {
	for (int i = 0; i < 5; i++) {
		std::cout << "val[" << i << "] = " << val[i] << std::endl;
	}
}

void setValues(int *val, int *sum) {

	for(int i=0; i<5; i++){
		std::cout << i + 1 << "��° ���� �Է��ϼ��� " << ": ";
		std::cin >> val[i];

		*sum += val[i];
	}
}

void sortArray(int *val) {
	int input;

	while (1) {
		std::cout << "���ڸ� �Է��ϼ���. (1: ��������, 2: ��������) : ";
		std::cin >> input;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(1000, '\n');
		}
		else if (input >= 1 && input <= 2) {
			break;
		}
	}


	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			switch(input){
				case 1:
					if(val[i] > val[j]){
						int temp = val[i];
						val[i] = val[j];
						val[j] = temp;
					}
					break;
				case 2:
					if(val[i] < val[j]){
						int temp = val[i];
						val[i] = val[j];
						val[j] = temp;
					}
					break;
			}
		}
	}
}