#include <gtest/gtest.h>
#include "../src/EnvioPostal.h"


TEST(Test_Envio_Postal, Test_Clase1_SiMenorQue3)
{
    /// AAA

    // Arrange - configurar el escenario
    EnvioPostal envio1(1,34,1);

    // Act - ejecute la operación
    float actual = envio1.CalculoEnvio();
    float esperada = 10.2;

    // Assert - valide los resultados
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_Clase1_SiMenorQue8)
{
    /// AAA

    // Arrange - configurar el escenario
    EnvioPostal envio1(7,12,1);

    // Act - ejecute la operación
    float actual = envio1.CalculoEnvio();
    float esperada = 5.4;

    // Assert - valide los resultados
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_Clase1_SiMayorQue9)
{
    /// AAA

    // Arrange - configurar el escenario
    EnvioPostal envio1(10,17,1);

    // Act - ejecute la operación
    float actual = envio1.CalculoEnvio();
    float esperada = 10.2;

    // Assert - valide los resultados
    EXPECT_FLOAT_EQ(esperada, actual);
}
TEST(Test_Envio_Postal, Test_Clase2_SiMenorQue3)
{
    /// AAA

    // Arrange - configurar el escenario
    EnvioPostal envio4(2,37,2);

    // Act - ejecute la operación
    float actual = envio4.CalculoEnvio();
    float esperada = 1.036;

    // Assert - valide los resultados
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_Clase2_SiMenorQue8)
{
    /// AAA

    // Arrange - configurar el escenario
    EnvioPostal envio5(5,12,2);

    // Act - ejecute la operación
    float actual = envio5.CalculoEnvio();
    float esperada = 0.636;

    // Assert - valide los resultados
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_Clase2_SiMayorQue9)
{
    /// AAA

    // Arrange - configurar el escenario
    EnvioPostal envio6(13,24,2);

    // Act - ejecute la operación
    float actual = envio6.CalculoEnvio();
    float esperada = 1.8;

    // Assert - valide los resultados
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_Clase3)
{
    /// AAA

    // Arrange - configurar el escenario
    EnvioPostal envio7(13,43,3);

    // Act - ejecute la operación
    float actual = envio7.CalculoEnvio();
    float esperada = 0.516;

    // Assert - valide los resultados
    EXPECT_FLOAT_EQ(esperada, actual);
}