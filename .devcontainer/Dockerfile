FROM mcr.microsoft.com/devcontainers/cpp:1-debian-12

# Install additional packages if needed
RUN apt-get update && apt-get install -y \
    cmake \
    build-essential \
    && rm -rf /var/lib/apt/lists/*