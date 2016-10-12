#pragma once

#include <vector>

namespace NEATGame {

	enum class NodeType {
		sensor,
		hidden,
		output
	};

	class Node {
	private:
		int id;
		NodeType type;
		std::vector<Node *> connectedNodes;

	public:
		Node();
	};
}