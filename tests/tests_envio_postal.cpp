#include <gtest/gtest.h>
#include "../src/EnvioPostal.h"


TEST(Test_Envio_Postal, Test_Clase1_SiMenorQue3)
{
    EnvioPostal envio1(1,34,1);
    float actual = envio1.CalculoEnvio();
    float esperada = 10.2;
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_Clase1_SiMenorQue8)
{
    EnvioPostal envio1(7,12,1);
    float actual = envio1.CalculoEnvio();
    float esperada = 5.4;
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_Clase1_SiMayorQue9)
{
    EnvioPostal envio1(10,17,1);
    float actual = envio1.CalculoEnvio();
    float esperada = 10.2;
    EXPECT_FLOAT_EQ(esperada, actual);
}
TEST(Test_Envio_Postal, Test_Clase2_SiMenorQue3)
{
    EnvioPostal envio4(2,37,2);
    float actual = envio4.CalculoEnvio();
    float esperada = 1.036;
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_Clase2_SiMenorQue8)
{
    EnvioPostal envio5(5,12,2);
    float actual = envio5.CalculoEnvio();
    float esperada = 0.636;
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_Clase2_SiMayorQue9)
{
    EnvioPostal envio6(13,24,2);
    float actual = envio6.CalculoEnvio();
    float esperada = 1.8;
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_Clase3)
{
    EnvioPostal envio7(13,43,3);
    float actual = envio7.CalculoEnvio();
    float esperada = 0.516;
    EXPECT_FLOAT_EQ(esperada, actual);
}