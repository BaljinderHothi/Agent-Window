// File: include/agent_window/analysis/value_decomposer.hpp
// Purpose: Breaks down value estimates to understand decision components
//
// For multi-headed value networks:
// - Separates contributions from different value heads
// - Shows which objectives dominate decisions
// - Helps debug reward shaping issues
// - Identifies conflicts between objectives
//
// Important for multi-objective or hierarchical RL agents.
