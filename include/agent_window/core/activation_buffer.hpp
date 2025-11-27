// File: include/agent_window/core/activation_buffer.hpp
// Purpose: Provides efficient circular buffer storage for layer activations
//
// The ActivationBuffer:
// - Stores activations from multiple layers over time
// - Uses circular buffer to limit memory usage
// - Provides thread-safe access to recent activations
// - Supports querying activations by timestep or layer
//
// Essential for keeping activation history without running out of memory.
