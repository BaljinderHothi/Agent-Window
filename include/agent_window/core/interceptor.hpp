// File: include/agent_window/core/interceptor.hpp
// Purpose: Main orchestrator that coordinates all capture and analysis
//
// The Interceptor:
// - Coordinates HookManager, ObservationCapture, and ActionCapture
// - Manages the flow of data from agent to analysis components
// - Provides the main API that Python code interacts with
// - Handles start/stop of monitoring sessions
//
// Think of this as the "main controller" of the whole system.
