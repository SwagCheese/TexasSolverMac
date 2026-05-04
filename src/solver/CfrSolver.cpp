//
// Created by Xuefeng Huang on 2020/1/31.
//

#include <solver/BestResponse.h>
#include "solver/CfrSolver.h"

CfrSolver::CfrSolver(shared_ptr<GameTree> tree, vector<PrivateCards> range1, vector<PrivateCards> range2,
                     vector<int> initial_board, shared_ptr<Compairer> compairer, Deck deck, int iteration_number, bool debug,
                     int print_interval, string logfile, string trainer, Solver::MonteCarolAlg monteCarolAlg) :Solver(tree){

}

void CfrSolver::train() {
    throw runtime_error("CfrSolver::train not implemented");
}

void CfrSolver::stop() {
    throw runtime_error("CfrSolver::stop not implemented");
}

json CfrSolver::dumps(bool with_status,int depth) {
    throw runtime_error("CfrSolver::dumps not implemented");
}

vector<vector<vector<float>>> CfrSolver::get_strategy(shared_ptr<ActionNode> node,vector<Card> chance_cards) {
    throw runtime_error("CfrSolver::get_strategy not implemented");
}

vector<vector<vector<float>>> CfrSolver::get_evs(shared_ptr<ActionNode> node,vector<Card> chance_cards) {
    throw runtime_error("CfrSolver::get_evs not implemented");
}

