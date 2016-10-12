#pragma once

#include "Genome.h"
#include "Node.h"
#include <vector>

namespace NEATGame {

	// Artificial Neural Network Class
	class ANN {
	private:
		std::vector<Node *> nodes;

	public:
		ANN();
		ANN(Genome genes);

	};
}
