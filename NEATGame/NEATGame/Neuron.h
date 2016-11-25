#pragma once

#include "Dendrite.h"
#include <list>

namespace NEATGame {

	enum class NeuronType {
		sensor,
		hidden,
		output
	};
	
	// A Neuron structure is the equivalent of a Node in the network
	class Neuron {
	private:
		int id;
		NeuronType type;
		std::list<Dendrite *> connectedNodes;

	public:
		Neuron();
	};
}