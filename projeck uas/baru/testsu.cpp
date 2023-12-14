#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ProductDatabase {
private:
    struct Product {
        string name;
        int id;
        float price;
    };

    vector<Product> products;

public:
    void addProduct(const string &name, int id, float price) {
        products.push_back({name, id, price});
    }

    void displayProduct(const string &productName) {
    bool found = false;
    for (size_t i = 0; i < products.size(); ++i) {
        if (products[i].name == productName) {
            found = true;
            cout << "Data produk:" << endl;
            cout << "Nama: " << products[i].name << endl;
            cout << "ID: " << products[i].id << endl;
            cout << "Harga: " << products[i].price << endl;
            break;
        }
    }

    if (!found) {
        cout << "Produk tidak ditemukan." << endl;
    }
}
};

int main() {
    ProductDatabase database;

    // Tambahkan produk ke database
    database.addProduct("Product1", 1, 10.0);
    database.addProduct("Product2", 2, 20.0);
    database.addProduct("Product3", 3, 30.0);

    string productName;
    cout << "Masukkan nama produk: ";
    cin >> productName;

    // Cari dan tampilkan produk
    database.displayProduct(productName);

    return 0;
}

