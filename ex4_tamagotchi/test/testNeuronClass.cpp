#include <gtest/gtest.h>
#include "../neuron.h"

TEST(NeuronClass, TestOr) {
    Neuron orNeuron(1.0, 1.0, -0.5);
    EXPECT_TRUE(orNeuron.feed(0, 0) == 0);
}