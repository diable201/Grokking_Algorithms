graph = {}
graph["start"] = {}
graph["start"]["a"] = 7
graph["start"]["b"] = 3

graph["a"] = {}
graph["a"]["fin"] = 2

graph["b"] = {}
graph["b"]["a"] = 4
graph["b"]["fin"] = 6

graph["fin"] = {}

# the costs table
infinity = float("inf")
costs = {}
costs["a"] = 7
costs["b"] = 3
costs["fin"] = infinity

# the parents table
parents = {}
parents["a"] = "start"
parents["b"] = "start"
parents["fin"] = None

processed = []

def find_lowest_cost_node(costs):
    lowest_cost = float("inf")
    lowest_cost_node = None
    # Go through each node.
    for node in costs:
        cost = costs[node]
        # If it's the lowest cost so far and hasn't been processed yet...
        if cost < lowest_cost and node not in processed:
            # ... set it as the new lowest-cost node.
            lowest_cost = cost
            lowest_cost_node = node
    return lowest_cost_node

# Find the lowest-cost node that you haven't processed yet.
node = find_lowest_cost_node(costs)
# If you've processed all the nodes, this while loop is done.
while node is not None:
    cost = costs[node]
    # Go through all the neighbors of this node.
    neighbors = graph[node]
    for n in neighbors.keys():
        new_cost = cost + neighbors[n]
        if costs[n] > new_cost:
            costs[n] = new_cost
            # This node becomes the new parent for this neighbor.
            parents[n] = node
    # Mark the node as processed.
    processed.append(node)
    node = find_lowest_cost_node(costs)

print("Cost from the start to each node:")
print(costs)