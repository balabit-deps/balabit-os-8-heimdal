/* ./bidi_table.h */
/* Automatically generated at 2019-06-07T02:26:41.396770 */

#ifndef BIDI_TABLE_H
#define BIDI_TABLE_H 1

#include <krb5-types.h>

struct range_entry {
  uint32_t start;
  unsigned len;
};

extern const struct range_entry _wind_ral_table[];
extern const struct range_entry _wind_l_table[];

extern const size_t _wind_ral_table_size;
extern const size_t _wind_l_table_size;

#endif /* BIDI_TABLE_H */
