//Name : Ruth Getahun Kifle
//ID No : UGR/5870/16
#include <iostream>
using namespace std;

#define tax_const1 4.2

int main() {
    // Introductory message
    cout << "C++ is a general purouse programing language that gives a clear structure to programs its also an object oriented programming. \n";
    cout << "C++ is a compiled language\n" ;

    string prod_name ;
    cout << "What is product name? \n" ;
    cin >> prod_name ;

    int prod_cat ;
     cout << "What is product catagory(from 1 to 5)? \n" ;
     cin >> prod_cat ;

     if (prod_cat > 5)
       cout << "The number entered in not in the range, please enter by the given range\n" ;

    int initial_inv_qua ;
     cout << "What is the initial inventory quality? \n" ;
     cin >> initial_inv_qua ;

    float prod_price ;
    cout << "What is product price?(Write in a decimal form) \n" ;
    cin >> prod_price ;

    int num_item_sold ;
    cout << "What is the number of item sold? \n " ;
    cin >> num_item_sold ;

    int new_inv(initial_inv_qua - num_item_sold) ;
    cout << "What is the new inventory? \n" ;
    cin >> new_inv ;

    float tot_sales{num_item_sold * prod_price} ;
    cout << "What is the total sales amount?(Wirte in decimal form) \n" ;
    cin >> tot_sales ;
    
    string num1 = "Low Inventory" ;
    string num2 = "Sufficent Inventory" ;
    if (new_inv < 10) 
      cout << num1 ;
    else 
      cout << num2 ;
    cout << "\n" ;
    
    auto helper_sales = tot_sales ;
    cout << helper_sales ;
    cout << "\n" ;
    
    decltype(initial_inv_qua)helper_inv = initial_inv_qua ;
    cout << helper_inv ;
    cout << "\n" ;
    
    int new_inv2 = initial_inv_qua ;
    initial_inv_qua -= num_item_sold ;
    cout << new_inv2 ;

    float tot_sales2 = num_item_sold ;
    num_item_sold *= prod_price ;
    cout << tot_sales2 ; 
    cout << "\n" ;

    string inv_status = (new_inv2 < 10) ? "Low inventory\n" : "Sufficent inventory\n" ;

    switch(prod_cat){  
      case 1: 
        cout << "Category 1 : Elecrronics\n" ;
        break ;
      case 2:
        cout << "Category 2 : Groceries\n" ;
        break ;
      case 3:
        cout << "Category 3 : Clothing\n" ;
        break ;
      case 4:
        cout << "Category 4 : Stationary\n" ;
        break ;
      case 5:
        cout << "Category 5 : Miscellaneous/n" ;
        break ;
    }

    for(int i = 1; i <= num_item_sold; i++){
       cout << "The price is : "  << prod_price << endl;
    }
  // Summary
  cout << "Tax rate 1 = " << tax_const1 ;
  cout << "\n" ;

  const float tax_const2 = 5.6f ;
  cout << "Tax rate 2 =" << tax_const2 ;
  cout << "\n" ;

  cout <<  "Product name :" << prod_name ;
  cout << "\n" ;
  cout <<  "Product category :" << prod_cat ;
  cout << "\n" ;
  cout << "Product's initial involentary uality :" << initial_inv_qua ;
  cout << "\n" ;
  cout << "Product price :" << prod_price ;
  cout << "\n" ;
  cout <<"Number of item sold :" << num_item_sold ;
  cout << "\n" ;
  cout << "New inventory :" << new_inv ;
  cout << "\n" ;
  cout << "Total sales amount :" << tot_sales ;
  cout << "\n" ;
  cout << tot_sales2 ;
  cout << "\n" ;
  cout << inv_status ;
  cout << "\n" ;
  cout << "Sales helper :" << helper_sales ;
  cout << "\n" ;
  cout << "Inventory helpers :" << helper_inv ;
  cout << "\n" ;
  cout << new_inv2 ;
  cout <<"\n" ;
  cout << tot_sales2 ;
  cout << "\n" ;

    return 0; }
