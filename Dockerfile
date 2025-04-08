# Use Ubuntu 22.04 as the base image
FROM ubuntu:22.04

# Set non-interactive frontend
ENV DEBIAN_FRONTEND=noninteractive

# Install GCC 11 and set it as default
RUN apt-get update && apt-get install -y --no-install-recommends \
    software-properties-common gnupg \
    && apt-key adv --keyserver keyserver.ubuntu.com --recv-keys C8EC952E2A0E1FBDC5090F6A2C277A0A352154E5 \
    && add-apt-repository ppa:ubuntu-toolchain-r/test -y \
    && apt-get update && apt-get install -y --no-install-recommends \
    gcc-11 g++-11 \
    && update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-11 100 \
    && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-11 100 \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

RUN apt-get update && apt-get install -y --no-install-recommends \
    software-properties-common gnupg git cmake make build-essential \
    libboost-all-dev && apt-get clean && rm -rf /var/lib/apt/lists/*

RUN apt-get update && apt-get install -y guile-2.2-dev

RUN apt-get update && apt-get install -y --no-install-recommends \
    libssl-dev \
    && apt-get clean && rm -rf /var/lib/apt/lists/*


RUN apt-get update && apt-get install -y cxxtest

# Set the working directory
WORKDIR /app

# Clone and build CogUtil
RUN git clone https://github.com/singnet/cogutil.git \
    && cd cogutil \
    && mkdir build && cd build \
    && cmake .. \
    && make -j$(nproc) \
    && make install \
    && ldconfig

# Clone and build AtomSpace
RUN git clone https://github.com/singnet/atomspace.git \
    && cd atomspace \
    && mkdir build && cd build \
    && cmake .. \
    && make -j$(nproc) \
    && make install \
    && ldconfig

# Clone and build CogServer
RUN git clone https://github.com/singnet/cogserver.git \
    && cd cogserver \
    && mkdir build && cd build \
    && cmake .. \
    && make -j$(nproc) \
    && make install \
    && ldconfig
    


# Clone and build Attention Allocation
RUN git clone https://github.com/iCog-Labs-Dev/attention.git \
    && cd attention \
    && mkdir build && cd build \
    && cmake .. \
    && make -j$(nproc) \
    && make install \
    && ldconfig


# Install common development tools and dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    software-properties-common gnupg git cmake make build-essential \
    libboost-all-dev libssl-dev guile-2.2-dev cxxtest wget \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

# Install octool
RUN wget http://raw.github.com/opencog/ocpkg/master/ocpkg \
    && chmod +x ocpkg \
    && ln -s /app/ocpkg /usr/local/bin/octool

RUN cd /app/attention \
    && octool -e

CMD ["/bin/bash"]

RUN apt update && apt install -y coreutils vim nano


# Docker Commands
    # sudo docker build -t attention .
    # sudo docker run -it attention /bin/bash
    # sudo docker run -it -v ~/attention:/app/attention attention /bin/bash