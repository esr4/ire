#ifndef IRE_BINARY_H
#define IRE_BINARY_H

IRE_API(ire_error_t) ire_binary_create(
    ire_data_t *data,
    ire_code_t *code,
    ire_binary_t **destination);


IRE_API(ire_error_t) ire_binary_create_from_file(
    FILE *stream,
    ire_binary_t **destination);


IRE_API(ire_error_t) ire_binary_destroy(
    ire_binary_t **self);


IRE_API(ire_error_t) ire_binary_write_to_file(
    ire_binary_t *self,
    FILE *stream);


IRE_API(ire_error_t) ire_binary_validate(
    ire_binary_t *self);

#endif
