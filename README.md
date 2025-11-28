# Agent Window

Interpretability framework for reinforcement learning agents.

## Description

Agent Window captures and analyzes RL agent internals during training and inference. 

Core capabilities:
- Layer activation capture
- Saliency map generation
- Action distribution analysis
- Value function decomposition

## Architecture

- C++ core for performance-critical operations
- Python bindings for integration with existing RL frameworks
- Web dashboard for visualization

## Usage
```python
import gymnasium as gym
from agent_window import AgentWindowWrapper

env = gym.make("CartPole-v1")
env = AgentWindowWrapper(env)

# Train agent with monitoring enabled
```

## Installation

Building from source requires:
- CMake >= 3.18
- LibTorch >= 2.0
- Protocol Buffers
- ZeroMQ

See docs/installation.md for detailed instructions.

## Status

In development.

# Road Map:
# Agent Window - 5-Week Development Roadmap

## Week 1: Foundation & Build System
**Goal: Get something compiling and testable**

- [ ] Set up development environment (CMake, LibTorch, Protocol Buffers, Python venv)
- [ ] Implement core types (`types.hpp/cpp`) - Define TensorData, ObservationData, ActionData
- [ ] Create working CMake build system (root + src CMakeLists)
- [ ] Implement basic logging system (`logger.hpp/cpp`)
- [ ] Write and run first unit tests with Google Test

**Milestone: Can compile C++ code and run basic tests**

---

## Week 2: Hook System & Activation Capture
**Goal: Can capture activations from a PyTorch model**

- [ ] Implement Hook Manager (`hook_manager.hpp/cpp`) - Register forward hooks on PyTorch layers
- [ ] Implement Activation Buffer (`activation_buffer.hpp/cpp`) - Circular buffer with thread-safe access
- [ ] Implement tensor utilities (`tensor_utils.hpp/cpp`) - PyTorch tensor conversions
- [ ] Create Interceptor (`interceptor.hpp/cpp`) - Main orchestrator tying everything together
- [ ] Write tests that hook into a simple MLP and capture activations

**Milestone: Can hook into PyTorch model and capture layer activations in C++**

---

## Week 3: Python Integration & Gymnasium Wrapper
**Goal: Can use from Python with a real RL environment**

- [ ] Implement pybind11 bindings (`bindings.cpp`, `core_bindings.cpp`)
- [ ] Create Python package structure (`__init__.py`, `core.py`)
- [ ] Implement Gymnasium wrapper (`gymnasium_wrapper.py`) - Auto-capture during env steps
- [ ] Implement observation/action capture (`observation_capture.hpp/cpp`, `action_capture.hpp/cpp`)
- [ ] Create CartPole example (`examples/cartpole/train_with_lens.py`)
- [ ] Test end-to-end: Python → Gymnasium → C++ capture → Python

**Milestone: Working CartPole example capturing activations during training**

---

## Week 4: Analysis & Serialization
**Goal: Can analyze captured data and export results**

- [ ] Implement saliency analysis (`saliency.hpp/cpp`) - Gradient-based attribution
- [ ] Implement activation analyzer (`activation_analyzer.hpp/cpp`) - Statistics and patterns
- [ ] Create Protocol Buffer schemas (`activation.proto`, `observation.proto`, `analysis.proto`)
- [ ] Implement serialization (`proto_serializer.hpp/cpp`, `json_exporter.hpp/cpp`)
- [ ] Python visualization tools (`visualizer.py`) - Matplotlib plots for activations and saliency
- [ ] Add analysis to CartPole example

**Milestone: Can run analysis on captured data and visualize results**

---

## Week 5: Dashboard & Polish
**Goal: Working real-time dashboard and complete examples**

- [ ] Implement WebSocket server (`websocket_server.hpp/cpp`) - Stream data to dashboard
- [ ] Create React dashboard foundation (basic UI structure)
- [ ] Implement activation heatmap component (`ActivationHeatmap.tsx`)
- [ ] Implement saliency map component (`SaliencyMap.tsx`)
- [ ] Connect dashboard to backend via WebSocket
- [ ] Create LunarLander example (`examples/lunar_lander/train_with_lens.py`)
- [ ] Write comprehensive README with installation and usage instructions
- [ ] Record demo video or GIF for README

**Milestone: Full working system with real-time dashboard visualization**

---

## Week 6 (Buffer Week): Documentation & Refinement
**Optional: Use if needed, otherwise move faster**

- [ ] Write documentation (`docs/getting_started.md`, `docs/installation.md`)
- [ ] Add more dashboard components (ActionDistribution, PolicyComparison)
- [ ] Create Atari example if time permits
- [ ] Performance optimization and bug fixes
- [ ] Add CI/CD (GitHub Actions for tests)
- [ ] Polish README with examples and screenshots

**Milestone: Production-ready open source project**
