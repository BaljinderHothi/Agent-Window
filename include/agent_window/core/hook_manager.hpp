// File: include/agent_window/core/hook_manager.hpp
// Purpose: Manages the hooking system that intercepts PyTorch model layers
//
// The HookManager is responsible for:
// - Registering forward hooks on PyTorch model layers
// - Managing hook lifecycle (attach/detach)
// - Routing captured activations to the appropriate buffers
// - Handling multiple simultaneous hooks
//
// This is the core component that makes activation capture possible.
