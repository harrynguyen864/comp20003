#ifndef _DATA_H_
#define _DATA_H_
// Defining constants

// Data definitions
struct restaurant {
    int census_year, block_id, property_id, base_property_id, industry_code, num_seats;
    double longitude, latitude;
    char *bld_add, *clue_small_area, *business_add, *trading_name, *description, *seating;
};
typedef struct restaurant restaurant_t;

char *getName(restaurant_t);

void listAppend(list_t *, restaurant_t);

int findRestaurant(list_t *, char *);

void restaurantFree(restaurant_t);

#endif