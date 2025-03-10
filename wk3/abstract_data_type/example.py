from collections import deque

class WebCrawler:
    def __init__(self, start_url):
        self.queue = deque([start_url])  # Queue for BFS
        self.visited = set()             # Set to track visited URLs
        self.history = []                # Stack to implement "back button"

    def fetch_links(self, url):
        """Simulates fetching links from a web page."""
        web_graph = {
            "https://site.com": ["https://site.com/page1", "https://site.com/page2"],
            "https://site.com/page1": ["https://site.com", "https://site.com/page3"],
            "https://site.com/page2": ["https://site.com"],
            "https://site.com/page3": ["https://site.com/page1"]
        }
        return web_graph.get(url, [])

    def crawl(self, max_depth=3):
        """Performs BFS web crawling up to max_depth."""
        depth = 0

        while self.queue and depth < max_depth:
            url = self.queue.popleft()  # Dequeue
            if url in self.visited:
                continue

            print(f"Visiting: {url}")
            self.visited.add(url)  # Mark as visited
            self.history.append(url)  # Push to stack for backtracking

            for link in self.fetch_links(url):
                if link not in self.visited:
                    self.queue.append(link)  # Enqueue new links

            depth += 1

    def back(self):
        """Simulates the 'back' button using a stack."""
        if len(self.history) > 1:
            self.history.pop()  # Pop current page
            print(f"Going back to: {self.history[-1]}")
        else:
            print("No previous page to go back to.")

# Example usage
crawler = WebCrawler("https://site.com")
crawler.crawl()

crawler.back()  # Simulate back button
crawler.back()
