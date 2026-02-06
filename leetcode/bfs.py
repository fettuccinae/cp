def main():
    graph = {"A": ["B", "C"], "B": ["D", "E"], "C": ["F", "G"], "D": [], "E": [], "F": [], "G": []}
    target = input("Enter target variable: ")
    bfs(graph, target[0], "A")


def bfs(graph, target, node):
    visited = set()
    queue = []

    queue.append(node)
    visited.add(node)

    while queue:
        s = queue.pop(0)
        print(s, end=" ")
        if s == target:
            return
        for neighbor in graph[s]:
            if neighbor not in visited:
                queue.append(neighbor)
                visited.add(neighbor)

    print("NO target")


if __name__ == "__main__":
    main()
