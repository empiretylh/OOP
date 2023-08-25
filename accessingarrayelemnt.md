# Accesing array element with looping

`array [ ]` ထဲမှာ ရှိတဲ့ element တစ်ခုချင်းစီ ကို access လုပ်ဖို့ဆိုရင် array index တွေတစ်ခုချင်းစီကို လိုက်ရေးရပါတယ်။(`array[5]`) ဒီလိုပဲ ကျွန်တော်က ဒီသင်ခန်းစာမှာ loop ပတ်ပြီးတော့ `array[ ]` ထဲက element တွေကို access လုပ်ပြမှာဖြစ်ပါတယ်။ array တွေကို access လုပ်တဲ့နေရာမှာ `for` loop ကိုပဲ အသုံးပြုကြတာများပါတယ်။ `for` loop ကို အသုံးပြုတဲ့နေရာမှာ array ရဲ့ size ကိုသိရပါမယ်။ တကယ်လို့ array size မသိဘူးဆိုရင် `sizeof()` function ကိုသုံးပြီးတော့ array size ကိုသိနိုင်ပါတယ်။ ဒါဆိုရင် array size သိတဲ့ program ကို အရရေးကြည့်ပါမယ်။

	#include <iostream>

	using namespace std;

	int main(){
		int arr[10] = {2,3,4,5,8,7,6,8,9,10,1};

		for(int i = 0; i < 10; i++){
			cout << arr[i] << "\t";
		}
		return 0;
	}

`for loop` ရဲ့ looping ရဲ့ initial value `i` ကို `0` ထားလိုက်ပါတယ်။ ဘာကြောင့်လဲဆိုတော့ array ရဲ့ index က `0` က နေစတာကြောင့် ဖြစ်ပါတယ်။ 	ဒါဆိုရင် array size က 10 ဖြစ်တဲ့အတွက်ကြောင့် `i < 10;` ထားလိုက်ပါတယ်။ ပြီးရင် `for loop` ထဲမှာ `cout << arr[i];` ဆိုပြီး array element တွေကို access လုပ်လိုက်ပါတယ်။		
#
---
# Accessing unknown array sizes's elemets with looping
ကျွန်တော်တို့က array size ကိုမသိဘူးဆိုရင် `sizeof()` function ကို သုံးပြီးတော့ array size ကိုတွက်လို့ရပါတယ်။ **`sizeof()` function က data type တွေရဲ့ size ကိုထုတ်ပေးတာပါ။** ဥပမာ - integer တစ်ခုရဲ့ size က 4 ဖြစ်ပါတယ်။ တကယ်လို့ integer 3 ခုကို array ထဲမှာ ထည့်ထားရင် အဲ့ဒီ array ရဲ့ size က `12` ဖြစ်နေပါလိမ့်မယ်။ ဒါကြောင့် ဒီ Program မှာ `array` ရဲ့ `sizeof()` ကို တည်ပြီးတော့ integer တစ်ခုရဲ့ `sizeof()` ကို စားလိုက်ရင် array ရဲ့ size ကိုရှာလို့ရမှာဖြစ်ပါတယ်။

	int arr[] = {7,6,5,4};
	int arrsize =  sizeof(arr); //size of array
	int intsize = sizeof(arr[0]); //size of integer
	int actualsize =  arrsize / intsize;

	for(int i = 0; i < actualsize; i++){
			cout << arr[i] << "\t";
		}
#
---
#
# Accesing two dimension array elements with nested loop
two dimension array တွေကို loop လုပ်တဲ့နေရာမှာ nested loop တွေသုံးရပါတယ်။ 2D array မှာဆိုရင် `row` နဲ့ `column` ရှိပါတယ်။ `row` ရော `column` ရောအတွက် `loop` တစ်ခါစီပတ်ဖို့လိုပါတယ်။ outside မှာရှိတဲ့ loop ကို `row` အတွက်သတ်မှတ်ပြီး၊ inside loop ကိုတော့ `column` indexing အတွက်ဖြစ်ပါတယ်။ 
	
		array[row][column] 

![atael](https://www.cs.ubc.ca/~pcarter/cs189/image/2darrayrc.png)

# Example

	 // 2D array
	    int matrix[3][3] = {
	        {1, 2, 3},
	        {4, 5, 6},
	        {7, 8, 9}
	    };

		// Accessing elements using nested loops
		for (int i = 0; i < 3; i++) { //for row
		    for (int j = 0; j < 3; j++) { //for column
		        cout << matrix[i][j] << " ";
		    }
		    cout << endl; // Move to the next line after each row
		}

