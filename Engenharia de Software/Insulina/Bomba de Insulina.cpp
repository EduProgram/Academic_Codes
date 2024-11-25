#include <iostream>

// Camada de Interface do Usuário
class UserInterface{
public:
    static double getGlucoseLevel(){
        // Simulacao da obtencao do nível de glicose do usuário
        double glucoseLevel;
        std::cout << "Informe o nível de glicose: ";
        std::cin >> glucoseLevel;
        return glucoseLevel;
    }

    static void displayMessage(const std::string& message){
        std::cout << message << std::endl;
    }
};

// Camada de Lógica de Controle
class ControlLogic{
public:
    static double calculateInsulinDose(double glucoseLevel){
        // Simulacao do cálculo da dosagem de insulina
        return glucoseLevel * 0.1;
    }

    static void administerInsulin(double insulinDose){
        // Simulacao da administracao de insulina
        UserInterface::displayMessage("Dose de insulina administrada: " + std::to_string(insulinDose) + " unidades.");
    }
};

// Camada de Hardware
class InsulinPump{
public:
    void run(){
        // Coleta de dados
        double glucoseLevel = UserInterface::getGlucoseLevel();

        // Cálculo de dosagem
        double insulinDose = ControlLogic::calculateInsulinDose(glucoseLevel);

        // Administracao de insulina
        ControlLogic::administerInsulin(insulinDose);
    }
};

int main(){
    InsulinPump insulinPump;
    insulinPump.run();

    return 0;
}
