#include <iostream>
#include <string>

// 引数で受け取った文字列"こんにちは"を"Hello"に翻訳する関数
void translate(std::string& text)
{
  text = "Hello";
}

int main()
{
  std::string text = "こんにちは";
  
  translate(text);

  std::cout << text << std::endl;
}
