for layer in mlp.layers():
    for neuron in layer.neurons():
        if (neuron == 3):
            break
        elif (neuron > 9 * 3 + 2):
            continue