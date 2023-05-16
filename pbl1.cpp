#include <iostream>
#include <string>
#include <list>
using namespace std;

        class Product {
            private:
                int id;
                string name;
                int price;

            public:
                Product(int i, string n, int p) {
                    id = i;
                    name = n;
                    price = p;
                }

            int getId() {
                return id;
            }

            string getName() {
                return name;
            }

            int getPrice() {
                return price;
            }

            void setName(string n) {
                name = n;
            }

            void setPrice(int p) {
                price = p;
            }
        };
        class Customer {
            private:
                int id;
                string name;
                string address;
                string email;
                string phone;

            public:
                Customer(int i, string n, string a, string e, string p) {
                    id = i;
                    name = n;
                    address = a;
                    email = e;
                    phone = p;
                }

                int getId() {
                    return id;
                }

                string getName() {
                    return name;
                }

                string getAddress() {
                    return address;
                }

                string getEmail() {
                    return email;
                }

                string getPhone() {
                    return phone;
                }

                void setName(string n) {
                    name = n;
                }

                void setAddress(string a) {
                    address = a;
                }

                void setEmail(string e) {
                    email = e;
                }

                void setPhone(string p) {
                    phone = p;
                }
        };
        class Invoice {
            private:
                int id;
                int customerId;
                Product* productList;
                int productCount;
                int totalPrice;

            public:
                    Invoice(int id, int customerId, Product* productList, int productCount, int totalPrice) : id(id), customerId(customerId), productList(productList), productCount(productCount), totalPrice(totalPrice) {}
    // Getters and setters
                    int getID() const { return id; }
                    int getCustomerID() const { return customerId; }
                    Product* getProductList() const { return productList; }
                    int getProductCount() const { return productCount; }
                    int getTotalPrice() const { return totalPrice; }
                    void setID(int id) { this->id = id; }
                    void setCustomerID(int customerId) { this->customerId = customerId; }
                    void setProductList(Product* productList) { this->productList = productList; }
                    void setProductCount(int productCount) { this->productCount = productCount; }
                    void setTotalPrice(int totalPrice) { this->totalPrice = totalPrice; }
                        };

    // hàm thêm sản phẩm vào mảng động ds sản phẩm
    void addProduct(Product product, Product** products , int &numOfProducts) {
        Product* newProduct = new Product(product);
        products[numOfProducts] = newProduct;
        numOfProducts++;
    }
    // hàm xóa sản phẩm khỏi danh sách mảng động sp
    bool deleteProduct(int productId,  Product** products, int &numOfProducts) {
    for (int i = 0; i < numOfProducts; i++) {
        if (products[i]->getId() == productId) {
            delete products[i];
            for (int j = i; j < numOfProducts - 1; j++) {
                products[j] = products[j + 1];
            }
            numOfProducts--;
            return true;
        }
    }
    return false;
} 
    //  hàm thêm khách hàng
    void addCustomer(Customer customer,  Customer** customers, int &numOfCustomers) {
    Customer* newCustomer = new Customer(customer);
    customers[numOfCustomers] = newCustomer;
    numOfCustomers++;
}
    // hàm sửa khách hàng
bool editCustomer(int customerId, Customer customer,  Customer** customers, int numOfCustomers) {
    for (int i = 0; i < numOfCustomers; i++) {
        if (customers[i]->getId() == customerId) {
            customers[i]->setName(customer.getName());
            customers[i]->setAddress(customer.getAddress());
            customers[i]->setEmail(customer.getEmail());
            customers[i]->setPhone(customer.getPhone());
            return true;
        }
    }
    return false;
}
    // hàm xóa khách hàng
bool deleteCustomer(int customerId,  Customer** customers, int &numOfCustomers) {
    for (int i = 0; i < numOfCustomers; i++) {
        if (customers[i]->getId() == customerId) {
            delete customers[i];
            for (int j = i; j < numOfCustomers - 1; j++) {
                customers[j] = customers[j + 1];
            }
            numOfCustomers--;
            return true;
        }
    }
    return false;
}
    // hàm thêm hóa đơn
void addInvoice(Invoice invoice,Invoice** invoices, int &numOfInvoices  ) {
    Invoice* newInvoice = new Invoice(invoice);
    invoices[numOfInvoices] = newInvoice;
    numOfInvoices++;
}
    // hàm sửa hóa đơn
bool editInvoice(int invoiceId, Invoice invoice,Invoice** invoices, int numOfInvoices) {
    for (int i = 0; i < numOfInvoices; i++) {
        if (invoices[i] ->getID() == invoiceId) {

            invoices[i]->setCustomerID(invoice.getCustomerID());
            invoices[i]->setProductCount(invoice.getProductCount());
            invoices[i]->setTotalPrice(invoice.getTotalPrice());
            
            return true;
        }
    }
    return false;
}
// hàm xóa hóa đơn
bool deleteInvoice(int id,Invoice** invoices, int &numOfInvoices)
{
    for (int i = 0; i < numOfInvoices; i++) {
        if (invoices[i]->getID() == id) {
            // Xóa hóa đơn khỏi danh sách
            for (int j = i; j < numOfInvoices - 1; j++) {
                invoices[j] = invoices[j + 1];
            }
            numOfInvoices--;
            return true;
        }
    }
    return false;
}




int main(){
        int numProducts; // số lượng sản phẩm
        Product** products; // mảng động các sản phẩm
        int numCustomers; // số lượng khách hàng
        Customer** customers; // mảng động các khách hàng
        int numOrders; // số lượng đơn hàng
        Invoice** invoices; // mảng động các đơn hàng

        // khởi tạo giá trị của mảng động 
        
}
