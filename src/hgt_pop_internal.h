//
// Created by LinMingzhi on 7/13/15.
//

#ifndef HGT_HGT_POP_INTERNAL_H
#define HGT_HGT_POP_INTERNAL_H
int hgt_pop_fitness_mutate_step(hgt_pop *p, hgt_params *params, const gsl_rng *r);
unsigned int search_region(unsigned int pos, unsigned int** region, unsigned num_regions, int inside);
int linkage_birth_dead(hgt_linkage **linkages, int birth, int dead, double generation);
int update_linkages_wf(hgt_pop *p, unsigned int *offsprings);
int linkage_linear_selection(hgt_linkage ** current_linkages, unsigned int * offsprings, unsigned int current_size, hgt_linkage ** new_linkages, double generation);
int hgt_pop_transfer_linkages(hgt_pop *p,
                              unsigned int donor,
                              unsigned int receiver,
                              unsigned int frag_len,
                              unsigned int start);
int linkage_transfer(hgt_linkage ** linkages, int donor, int receiver, double generation);
unsigned long next_power2(unsigned int len);

// increase population total time for each generation.
void increase_population_time(hgt_pop *p, double time);

int random_num_offsprings_bsc(unsigned int n, const gsl_rng *r);
void linkage_update_bsc(hgt_linkage **linkages, int birth, int *death, int num, double birth_time);
#endif //HGT_HGT_POP_INTERNAL_H
