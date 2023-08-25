# Write a program that allows the user to enter the `number` and generate the multiples of number about `20` times.

# Solution

	#include <iostream>

		using namespace std;

		int main(){
			int n;
			
			cout << "Enter a number : ";
			cin >> n;
			
			for(int i = 1; i <= 20; i++){
				cout << n * i << "\t";
			}
			return 0;
		}

#
-------
#
**မေးခွန်း :**  user ရှိကနေ input `number` ဆိုတဲ့ input တစ်ခုတောင်းပြီးတော့ အကြိမ် 20 ဖြစ်တဲ့ထိ user ရဲ့ `input` ကို `1` to `20` မြှောက်ခိုင်းတာပါ။

#
1. အဲ့တော့ ကျွန်တော်တို့က အရင်ဆုံး `C++` ရဲ့ **Basic Structure** ကိုရေးရပါမယ်။

		#include <iostream>

		using namespace std;
		int main(){
			//ဒီနေရာမှာ code စရေးရပါမယ်။
			return 0;
		}

2. ဒီလိုရေးပြီးတဲ့နောက်မှာ ဒီ *program* ရဲ့ မေးခွန်းအတိုင်း `user input` တောင်းရပါတော့မယ်။ အဲတော့ ပထမဆုံး user input ကို store လုပ်ဖို့အတွက်ဆိုရင် `variable` တစ်ခုလိုအပ်ပါတယ်။ ဒါကြောင့် `int n` ဆိုတဲ့ variable တစ်ခုကို အရင် ကြောငြာလိုက်ပါတယ်။
3. ဒီ Program အသုံးပြုနေတဲ့ user ဘာဆက်လုပ်ရမလဲသိအောင် console ပေါ်ကို `cout << "Enter ‌a number :";` ဆိုပြီး Display လုပ်ပြလိုက်ပါတယ်။
4. ဒါပြီးရင်တော့ user input ကိုယူပြီး `n` ဆိုတဲ့ variable ထဲမှာ သိမ်းဖိုအတွက် `cin >> n;` ဆိုပြီးတော့ရေးလိုက်ပါတယ်။ ဒီနေရာမှာဆိုရင် user က integer number တစ်ခုခု ထည့်ပြီး `Enter` ခေါက်လိုက်မယ်ဆိုရင်	user ထဲ့လိုက်တဲ့ number က `n` ဆိုတဲ့ variable ထဲကို သွားသိမ်းပါတယ်။
5. အကြိမ် `20` ထုတ်ပြရမယ်ဆိုတော့ ဘယ်နှစ်ကြိမ် `loop` ပတ်ရမလဲဆိုတာကို သိပါတယ် ဒါကြောင့် `for loop` ကို သုံးပြီးရေးရပါမယ်။

			for(int i = 1; i <= 20; i++){
				cout << n * i << "\t"; // output 
			}

6. multiple of number ဆိုတဲ့ အတွက်ကြောင့်  `1` to `20` value change နေတဲ့  loop ထဲက `i` variable နဲ့ user ထဲလိုက်တဲ့ `n` variable နဲ့ မြှောက်ပြီး `loop` ထဲမှာ တစ်ခါတည်း output ထုတ်ပြလိုက်ပါတယ်။ `"/t"` ဆိုတာလေးကတော့ ထွက်လာတဲ့ output ကို တစ်ခုနဲ့ တစ်ခု `Tab` ခြားပြီးပြခြင်းဖြစ်ပါသည်။

Example output : if the user enter a number 7,
7 14 21 28 35 42 49 56 63 70
77 84 91 98 105 112 119 126 133 140