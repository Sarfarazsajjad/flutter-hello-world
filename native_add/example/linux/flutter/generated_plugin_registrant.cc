//
//  Generated file. Do not edit.
//

#include "generated_plugin_registrant.h"

#include <native_add/native_add_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) native_add_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "NativeAddPlugin");
  native_add_plugin_register_with_registrar(native_add_registrar);
}
