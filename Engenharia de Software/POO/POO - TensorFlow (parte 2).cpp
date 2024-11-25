#include <iostream>
#include <vector>

class Tensor {
public:
    Tensor(int shape) : shape_(shape) {}

    virtual void print() const {
        std::cout << "Tensor de forma " << shape_ << std::endl;
    }

    virtual void operacao() {
        std::cout << "Operação em Tensor base" << std::endl;
    }

    int getShape() const {
        return shape_;
    }

private:
    int shape_;
};

class TensorNumerico : public Tensor {
public:
    TensorNumerico(int shape, std::vector<double> data) : Tensor(shape), data_(data) {}

    void print() const override {
        std::cout << "Tensor Numérico de forma " << getShape() << std::endl;
    }

    void operacao() override {
        std::cout << "Operação em Tensor Numérico" << std::endl;
    }

private:
    std::vector<double> data_;
};

int main() {
    Tensor tensor(3);
    tensor.print();
    tensor.operacao();

    std::vector<double> data = {1.0, 2.0, 3.0};
    TensorNumerico tensorNumerico(3, data);
    tensorNumerico.print();
    tensorNumerico.operacao();

    return 0;
}

