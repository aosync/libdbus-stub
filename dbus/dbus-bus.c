#include "dbus-bus.h"

DBusConnection *dbus_bus_get(
    DBusBusType type,
    DBusError *error
) {
    return NULL;
}

DBusConnection *dbus_bus_get_private(
    DBusBusType type,
    DBusError *error
) {
    return NULL;
}

dbus_bool_t dbus_bus_register(
    DBusConnection *connection,
    DBusError *error
) {
    return FALSE;
}

dbus_bool_t dbus_bus_set_unique_name(
    DBusConnection *connection,
    const char *unique_name
) {
    return FALSE;
}

const char* dbus_bus_get_unique_name(
    DBusConnection *connection
) {
    return NULL;
}

unsigned long dbus_bus_get_unix_user(
    DBusConnection *connection,
    const char *name,
    DBusError *error
) {
    return ((unsigned)-1);
}

char* dbus_bus_get_id(
    DBusConnection *connection,
    DBusError *error
) {
    return NULL;
}

int dbus_bus_request_name(
    DBusConnection *connection,
    const char *name,
    unsigned int flags,
    DBusError *error
) {
    return -1;
}

int dbus_bus_release_name(
    DBusConnection *connection,
    const char *name,
    DBusError *error
) {
    return -1;
}

dbus_bool_t dbus_bus_name_has_owner(
    DBusConnection *connection,
    const char *name,
    DBusError *error
) {
    return FALSE;
}

dbus_bool_t dbus_bus_start_service_by_name(
    DBusConnection *connection,
    const char *name,
    uint32_t flags,
    uint32_t *reply,
    DBusError *error
) {
    return FALSE;
}

void dbus_bus_add_match(
    DBusConnection *connection,
    const char *rule,
    DBusError  *error
) {

}

void dbus_bus_remove_match(
    DBusConnection *connection,
    const char *rule,
    DBusError *error
) {

}
