let data = parse_json(HEMTT_VFS.join("addons/worlds/worlds.json").open_file().read());
let worlds = data["worlds"];
let tips_raw = data["tips"];

let tips = "";
for tip in tips_raw {
    tips = tips + "\"" + tip + "\",";
}

let cup_worlds = [];
let bi_worlds = [];

for world in worlds {
    if (world[3].contains("CUP")) {
        cup_worlds.push(world);
        continue;
    }
    if (world[3].contains("A3_Map")) {
        bi_worlds.push(world);
        continue;
    }
    let dir = HEMTT_VFS.join("addons/worlds/" + world[1]);
    dir.create_dir();
    let config = dir.join("config.cpp").create_file();
    let name = "";
    if (world[0] != "") {
        name = `description = "${world[0]}";`;
    }
    config.write(`
#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "${world[3]}"
        };
        addonRootClass = "${world[3]}";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgWorlds {
    class ${world[2]};
    class ${world[1]}: ${world[2]} {
        ${name}
        loadingTexts[] = {${tips}};
    };
};`);
    let script_component = dir.join("script_component.hpp").create_file();
    script_component.write(`
#define COMPONENT tips_${world[1]}
#include "..\\..\\main\\script_mod.hpp"
#include "..\\..\\main\\script_macros.hpp"
`);
}

for group in [[cup_worlds, "cup"], [bi_worlds, "bi"]] {
    let dir = HEMTT_VFS.join("addons/worlds/" + group[1]);
    dir.create_dir();
    let config = dir.join("config.cpp").create_file();
    let worlds_cfg = "";
    let required = "";
    let external = [];
    let addonRootClass = "";
    for world in group[0] {
        let name = "";
        if (world[0] != "") {
            name = `description = "${world[0]}";`;
        }
        worlds_cfg = worlds_cfg + `
    class ${world[1]}: ${world[2]} {
        ${name}
        loadingTexts[] = {${tips}};
    };`;
        required = required + `"${world[3]}",`;
        addonRootClass = world[3];
        if (!external.contains(world[2])) {
            external.push(world[2]);
        }
    }
    let external_cfg = "";
    for ext in external {
        external_cfg = external_cfg + `    class ${ext};`;
    }
    config.write(`
#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            ${required}
        };
        addonRootClass = "${addonRootClass}";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};
class CfgWorlds { ${external_cfg} ${worlds_cfg} };`);
    let script_component = dir.join("script_component.hpp").create_file();
    script_component.write(`
#define COMPONENT tips_${group[1]}
#include "..\\..\\main\\script_mod.hpp"
#include "..\\..\\main\\script_macros.hpp"
`);
}
