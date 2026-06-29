/*
 * character.h
 *
 *  Created on: Jun 29, 2026
 *      Author: Luke Fadel
 */

#ifndef INC_CHARACTER_H_
#define INC_CHARACTER_H_

#include <stdint.h>

typedef struct {
  // ascii code that the character represents
  const uint8_t asciiCode;
  // bit packed array of data
  const uint8_t *data;
} Character_t;

#endif /* INC_CHARACTER_H_ */
