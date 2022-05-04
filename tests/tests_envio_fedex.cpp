#include <gtest/gtest.h>
#include "../src/EnvioFedex.h"


TEST(Test_Envio_Postal, Test_PesoKilometrosMenor)
{
    EnvioFedex envio1(5,200);
    float actual = envio1.CalculoEnvio();
    float esperada = 35;
    EXPECT_FLOAT_EQ(esperada, actual);
}

TEST(Test_Envio_Postal, Test_PesoKilometrosMayor)
{
    EnvioFedex envio1(13,600);
    float actual = envio1.CalculoEnvio();
    float esperada = 60;
    EXPECT_FLOAT_EQ(esperada, actual);
}