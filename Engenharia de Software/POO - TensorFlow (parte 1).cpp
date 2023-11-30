#include <iostream>
#include <vector>

// Classe base para representar um Tensor
class Tensor {
public:
    virtual void print() const = 0;
};

// Classe para representar um Tensor Float
class FloatTensor : public Tensor {
private:
    std::vector<float> data;

public:
    FloatTensor(const std::vector<float>& input) : data(input) {}

    void print() const override {
        for (const auto& value : data) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
};

// Classe para representar um Tensor Inteiro
class IntTensor : public Tensor {
private:
    std::vector<int> data;

public:
    IntTensor(const std::vector<int>& input) : data(input) {}

    void print() const override {
        for (const auto& value : data) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
};

// Classe para representar um Modelo
class Model {
public:
    virtual void train() = 0;
    virtual void predict() = 0;
};

// Classe para representar um Modelo Linear
class LinearModel : public Model {
public:
    void train() override {
        std::cout << "Treinando o modelo linear" << std::endl;
    }

    void predict() override {
        std::cout << "Realizando previsões com o modelo linear" << std::endl;
    }
};

int main() {
    std::vector<float> floatData = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<int> intData = {1, 2, 3, 4, 5};

    FloatTensor floatTensor(floatData);
    IntTensor intTensor(intData);

    floatTensor.print();
    intTensor.print();

    LinearModel linearModel;
    linearModel.train();
    linearModel.predict();

    return 0;
}


