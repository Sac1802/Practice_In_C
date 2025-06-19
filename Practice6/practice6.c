#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * Author: Sac1802
 */

/**
* @brief Checks if the next gas station is reachable.
*
* @param distance_to_pump Distance to the gas station.
* @param mpg Vehicle fuel economy in miles per gallon.
* @param fuel_left Amount of fuel available in gallons.
* @return true if reachable, false if not.
*/
bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
    return (fuel_left * mpg) >= distance_to_pump ? true : false;
}

int main(){
    bool van_drive = zero_fuel(100, 25, 3);
    printf("manages to reach the next gas station: %d", van_drive );
}