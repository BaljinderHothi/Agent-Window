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
