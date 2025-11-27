// File: include/agent_window/analysis/saliency.hpp
// Purpose: Computes saliency maps showing which inputs influenced decisions
//
// Saliency analysis:
// - Takes gradients with respect to input observations
// - Produces heatmaps showing important features
// - Helps answer "what did the agent look at?"
// - Uses gradient-based attribution methods
//
// Critical for understanding what observations drive agent behavior.
