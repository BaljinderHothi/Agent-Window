// File: include/agent_window/capture/gradient_capture.hpp
// Purpose: Captures gradients during training for attribution analysis
//
// GradientCapture:
// - Hooks into backward pass to capture gradients
// - Links gradients to specific observations/actions
// - Enables gradient-based saliency methods
// - Helps debug learning issues
//
// Required for gradient-based interpretability techniques.
